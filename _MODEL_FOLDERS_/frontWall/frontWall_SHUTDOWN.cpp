    if(frontWall_NORMALMAP != 0)                      
    {                                                              
        glDeleteTextures(1, &frontWall_NORMALMAP);    
        frontWall_NORMALMAP = 0;                      
    }                                                              
    if(frontWall_TEXTUREMAP  != 0)                    
    {                                                              
        glDeleteTextures(1, &frontWall_TEXTUREMAP);   
        frontWall_TEXTUREMAP  = 0;                    
    }                                                              
    //===========================================================  

    if(frontWall_VBO  != 0)                           
    {                                                              
        glDeleteBuffers(1, &frontWall_VBO);           
        frontWall_VBO  = 0;                           
    }                                                              
    if(frontWall_INDICES_VBO  != 0)                   
    {                                                              
        glDeleteBuffers(1, &frontWall_INDICES_VBO);   
        frontWall_INDICES_VBO  = 0;                   
    }                                                              
