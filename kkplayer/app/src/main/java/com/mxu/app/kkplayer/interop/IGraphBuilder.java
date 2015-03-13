package com.mxu.app.kkplayer.interop;

/**
 * Created by mxu on 3/13/2015.
 */
public class IGraphBuilder {

    public native boolean openFile(String filePath);
    public native boolean closeFile();
}
