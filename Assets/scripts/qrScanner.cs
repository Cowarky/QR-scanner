using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using ZXing;
using UnityEngine.UI;

public class qrScanner : MonoBehaviour
{
    public RawImage _rawImageBackground;
    public AspectRatioFitter _aspectRatioFitter;
    public TextMeshProUGUI _text;
    public RectTransform _scanZone;
    public float _counter;

    private float count;
    private bool isCamAvailable;
    private WebCamTexture _cameraTexture;
    IBarcodeReader barcodeReader;
    // Start is called before the first frame update
    void Start()
    {
        barcodeReader = new BarcodeReader();
        setupCamera();
        count = _counter;
    }

    // Update is called once per frame
    void Update()
    {
        UpdateCameraRender();
        _counter-=1f;
        if (_counter <= 0){
            Scan();
            _counter = count;
            return;
        }

    }
    private void setupCamera(){
        WebCamDevice[] devices = WebCamTexture.devices;
        if (devices.Length == 0){
            isCamAvailable = false;
            return;
        }
        for (int i=0;i<devices.Length;i++){
            if (devices[i].isFrontFacing == false){
                _cameraTexture = new WebCamTexture(devices[i].name, (int)_scanZone.rect.width,(int)_scanZone.rect.height);

            }

        }
        _cameraTexture.Play();
        _rawImageBackground.texture = _cameraTexture;
        isCamAvailable = true;
    }
    private void UpdateCameraRender(){
        if (!isCamAvailable){
            return;
        }
        float ratio = (float)_cameraTexture.width/(float)_cameraTexture.height;
        _aspectRatioFitter.aspectRatio = ratio;

        int orientation = _cameraTexture.videoRotationAngle;
        _rawImageBackground.rectTransform.localEulerAngles = new Vector3(0,0,orientation);
    }
    public void OnClickScan(){
        Scan();
    }
    private void Scan(){
        try{
            Result result = barcodeReader.Decode(_cameraTexture.GetPixels32(),_cameraTexture.width, _cameraTexture.height);
            if (result != null){
                _text.text = result.Text;
            }else{
                _text.text = "failed to read our code";
            }
        }
        catch{
            _text.text = "failed to Get code";
        }
    }
}
