package com.mxu.app.kkplayer.interop;

/**
 * Created by mxu on 3/13/2015.
 */
public class IMediaControl {

    public IMediaControl()
    {
        //
    }

    public native boolean start();
    public native boolean stop();
    public native boolean pause();
}

