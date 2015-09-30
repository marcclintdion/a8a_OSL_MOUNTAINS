//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
    
    //====================================================== 
    if(generic_01_FBO != 0)                                                                                                      
    {                                                                                                                                              
        glDeleteFramebuffers(1, &generic_01_FBO);
        generic_01_FBO = 0;                                                                                                  
    }                    
    //--------------------------------------------
    if(generic_01_TEXTURE  != 0)                                                                                      
    {                                                                                                              
        glDeleteTextures(1, &generic_01_TEXTURE);                                                                 
        generic_01_TEXTURE  = 0;                                                                                  
    }                                                                                                              
    //======================================================
    if(generic_02_FBO != 0)                                                                                                      
    {                                                                                                                                              
        glDeleteFramebuffers(1, &generic_02_FBO);
        generic_02_FBO = 0;                                                                                                  
    }                    
    //-------------------------------------------
    if(generic_02_TEXTURE  != 0)                                                                                      
    {                                                                                                              
        glDeleteTextures(1, &generic_02_TEXTURE);                                                                 
        generic_02_TEXTURE  = 0;                                                                                  
    }                                                                                                              
    //======================================================

    //====================================================== 
    if(generic_03_FBO != 0)                                                                                                      
    {                                                                                                                                              
        glDeleteFramebuffers(1, &generic_03_FBO);
        generic_03_FBO = 0;                                                                                                  
    }                    
    //--------------------------------------------
    if(generic_03_TEXTURE  != 0)                                                                                      
    {                                                                                                              
        glDeleteTextures(1, &generic_03_TEXTURE);                                                                 
        generic_03_TEXTURE  = 0;                                                                                  
    }                                                                                                              
    //======================================================
    if(generic_04_FBO != 0)                                                                                                      
    {                                                                                                                                              
        glDeleteFramebuffers(1, &generic_04_FBO);
        generic_04_FBO = 0;                                                                                                  
    }                    
    //-------------------------------------------
    if(generic_04_TEXTURE  != 0)                                                                                      
    {                                                                                                              
        glDeleteTextures(1, &generic_04_TEXTURE);                                                                 
        generic_04_TEXTURE  = 0;                                                                                  
    }                                                                                                              
    //======================================================
