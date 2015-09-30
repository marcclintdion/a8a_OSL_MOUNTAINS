//========================================================================                            
#ifdef __APPLE__                                                                                      
 //--------------                                                                                     
    spriteImage             = [UIImage imageNamed:@"doorWindowEdges_DOT3.png"].CGImage;      
    width                   =  CGImageGetWidth(spriteImage);                                          
    height                  =  CGImageGetHeight(spriteImage);                                         
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                    
    spriteContext           =  CGBitmapContextCreate(spriteData, width,                               
                                                                 height,                              
                                                                 8,                                   
                                                                 width * 4,                           
                                                                 CGImageGetColorSpace(spriteImage),   
                                                                 kCGImageAlphaNoneSkipLast);          
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                           
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                           
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                           
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                 
    CGContextRelease(spriteContext);                                                                  
    //---------                                                                                       
        glGenTextures(1, &doorWindowEdges_NORMALMAP);                                          
        glBindTexture(GL_TEXTURE_2D, doorWindowEdges_NORMALMAP);                               
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
             free(spriteData);                                                                        
        }                                                                                             
    //-------------------------------------------------------------------------------------           
    spriteImage             = [UIImage imageNamed:@"doorWindowEdges.png"].CGImage;           
    width                   =  CGImageGetWidth(spriteImage);                                          
    height                  =  CGImageGetHeight(spriteImage);                                         
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));                    
    spriteContext           =  CGBitmapContextCreate(spriteData,                                      
                                                     width,                                           
                                                     height,                                          
                                                     8,                                               
                                                     width * 4,                                       
                                                     CGImageGetColorSpace(spriteImage),               
                                                     kCGImageAlphaNoneSkipLast);                      
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy);                                           
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS                           
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS                           
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);                 
    CGContextRelease(spriteContext);                                                                  
    //---------                                                                                       
        glGenTextures(1, &doorWindowEdges_TEXTUREMAP);                                         
        glBindTexture(GL_TEXTURE_2D, doorWindowEdges_TEXTUREMAP);                              
        ConfigureAndLoadTexture(spriteData,  width, height);                                          
        if(spriteData != NULL)                                                                        
        {                                                                                             
            free(spriteData);                                                                         
        }                                                                                             
//----                                                                                                
#endif                                                                                                
//========================================================================                            
    //-----------------------------------------------------------------------------------                                              
    #ifdef WIN32                                                                                                                       
    loadTexture("_MODEL_FOLDERS_/doorWindowEdges/doorWindowEdges_DOT3.png",     doorWindowEdges_NORMALMAP);     
    loadTexture("_MODEL_FOLDERS_/doorWindowEdges/doorWindowEdges.png",          doorWindowEdges_TEXTUREMAP);    
    #endif                                                                                                                             
    //-----------------------------------------------------------------------------------                                              
    #include    "doorWindowEdges.cpp"                                                                                         
    glGenBuffers(1,              &doorWindowEdges_VBO);                                                                         
    glBindBuffer(GL_ARRAY_BUFFER, doorWindowEdges_VBO);                                                                         
    glBufferData(GL_ARRAY_BUFFER, sizeof(doorWindowEdges), doorWindowEdges, GL_STATIC_DRAW);                             
    glBindBuffer(GL_ARRAY_BUFFER, 0);                                                                                                  
    //-----------------------------------------------------------------------------------                                              
    #include    "doorWindowEdges_INDICES.cpp"                                                                                 
    glGenBuffers(1,              &doorWindowEdges_INDICES_VBO);                                                                 
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, doorWindowEdges_INDICES_VBO);                                                         
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(doorWindowEdges_INDICES), doorWindowEdges_INDICES, GL_STATIC_DRAW);     
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);                                                                                          
    //-----------------------------------------------------------------------------------                                              
    //=====================================================   
    doorWindowEdges_boundingBox[0] = -2.93434;
    doorWindowEdges_boundingBox[1] = 2.66066;
    doorWindowEdges_boundingBox[2] = 0.465312;
    doorWindowEdges_boundingBox[3] = 3.25737;
    doorWindowEdges_boundingBox[4] = 2.2797;
    doorWindowEdges_boundingBox[5] = 2.35123;
    //=====================================================   
    collisionBoxArray[boxCount][0] = -2.93434;
    collisionBoxArray[boxCount][1] = 2.66066;
    collisionBoxArray[boxCount][2] = 0.465312;
    collisionBoxArray[boxCount][3] = 3.25737;
    collisionBoxArray[boxCount][4] = 2.2797;
    collisionBoxArray[boxCount][5] = 2.35123;
    collisionBoxArray[boxCount][6] = boxCount;
//    boxCount++;
