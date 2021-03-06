// This file declares the IDebugDocument Interface and Gateway for Python.
// Generated by makegw.py
// ---------------------------------------------------
//
// Interface Declaration

class PyIDebugDocument : public PyIDebugDocumentInfo {
   public:
    MAKE_PYCOM_CTOR_ERRORINFO(PyIDebugDocument, IID_IDebugDocument);
    static IDebugDocument *GetI(PyObject *self);
    static PyComTypeObject type;

    // The Python methods

   protected:
    PyIDebugDocument(IUnknown *pdisp);
    ~PyIDebugDocument();
};
// ---------------------------------------------------
//
// Gateway Declaration

class PyGDebugDocument : public PyGDebugDocumentInfo, public IDebugDocument {
   protected:
    PyGDebugDocument(PyObject *instance) : PyGDebugDocumentInfo(instance) { ; }
    PYGATEWAY_MAKE_SUPPORT2(PyGDebugDocument, IDebugDocument, IID_IDebugDocument, PyGDebugDocumentInfo)

    // IDebugDocumentInfo
    STDMETHOD(GetName)(DOCUMENTNAMETYPE dnt, BSTR *pbstrName);
    STDMETHOD(GetDocumentClassId)(CLSID *pclsidDocument);

    // IDebugDocument
};
