#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init1st__11TexMgrClassFv
// Address: 0x21a460 - 0x21a568
void init1st__11TexMgrClassFv_0x21a460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init1st__11TexMgrClassFv");


    ctx->pc = 0x21a460u;

    // 0x21a460: 0x3c030092
    ctx->pc = 0x21a460u;
    SET_GPR_U32(ctx, 3, ((uint32_t)146 << 16));
    // 0x21a464: 0x70002e28
    ctx->pc = 0x21a464u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21a468: 0x24644d00
    ctx->pc = 0x21a468u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 19712));
label_21a46c:
    // 0x21a46c: 0xac800000
    ctx->pc = 0x21a46cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x21a470: 0xac800004
    ctx->pc = 0x21a470u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x21a474: 0xac800014
    ctx->pc = 0x21a474u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x21a478: 0xac800018
    ctx->pc = 0x21a478u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x21a47c: 0xac800008
    ctx->pc = 0x21a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x21a480: 0xac80001c
    ctx->pc = 0x21a480u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x21a484: 0xac800020
    ctx->pc = 0x21a484u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x21a488: 0xac800030
    ctx->pc = 0x21a488u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x21a48c: 0xac800034
    ctx->pc = 0x21a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x21a490: 0xac800024
    ctx->pc = 0x21a490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x21a494: 0xac800038
    ctx->pc = 0x21a494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x21a498: 0xac80003c
    ctx->pc = 0x21a498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x21a49c: 0xac80004c
    ctx->pc = 0x21a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x21a4a0: 0xac800050
    ctx->pc = 0x21a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x21a4a4: 0xac800040
    ctx->pc = 0x21a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x21a4a8: 0xac800054
    ctx->pc = 0x21a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x21a4ac: 0xac800058
    ctx->pc = 0x21a4acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x21a4b0: 0xac800068
    ctx->pc = 0x21a4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x21a4b4: 0xac80006c
    ctx->pc = 0x21a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x21a4b8: 0xac80005c
    ctx->pc = 0x21a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x21a4bc: 0xac800070
    ctx->pc = 0x21a4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x21a4c0: 0xac800074
    ctx->pc = 0x21a4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 0));
    // 0x21a4c4: 0xac800084
    ctx->pc = 0x21a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x21a4c8: 0xac800088
    ctx->pc = 0x21a4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x21a4cc: 0xac800078
    ctx->pc = 0x21a4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x21a4d0: 0xac80008c
    ctx->pc = 0x21a4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
    // 0x21a4d4: 0xac800090
    ctx->pc = 0x21a4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x21a4d8: 0xac8000a0
    ctx->pc = 0x21a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x21a4dc: 0xac8000a4
    ctx->pc = 0x21a4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x21a4e0: 0xac800094
    ctx->pc = 0x21a4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x21a4e4: 0xac8000a8
    ctx->pc = 0x21a4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x21a4e8: 0xac8000ac
    ctx->pc = 0x21a4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x21a4ec: 0xac8000bc
    ctx->pc = 0x21a4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x21a4f0: 0xac8000c0
    ctx->pc = 0x21a4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
    // 0x21a4f4: 0xac8000b0
    ctx->pc = 0x21a4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x21a4f8: 0xac8000c4
    ctx->pc = 0x21a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x21a4fc: 0xac8000c8
    ctx->pc = 0x21a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x21a500: 0xac8000d8
    ctx->pc = 0x21a500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 0));
    // 0x21a504: 0xac8000dc
    ctx->pc = 0x21a504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 0));
    // 0x21a508: 0x24a50008
    ctx->pc = 0x21a508u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
    // 0x21a50c: 0xac8000cc
    ctx->pc = 0x21a50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
    // 0x21a510: 0x28a301cf
    ctx->pc = 0x21a510u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 463));
    // 0x21a514: 0x1460ffd5
    ctx->pc = 0x21A514u;
    {
        const bool branch_taken_0x21a514 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21A518u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 224));
        if (branch_taken_0x21a514) {
            ctx->pc = 0x21A46Cu;
            goto label_21a46c;
        }
    }
    ctx->pc = 0x21A51Cu;
    // 0x21a51c: 0x28a101d7
    ctx->pc = 0x21a51cu;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 5), 471));
    // 0x21a520: 0x1020000f
    ctx->pc = 0x21A520u;
    {
        const bool branch_taken_0x21a520 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x21A524u;
        SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
        if (branch_taken_0x21a520) {
            ctx->pc = 0x21A560u;
            goto label_21a560;
        }
    }
    ctx->pc = 0x21A528u;
    // 0x21a528: 0x651823
    ctx->pc = 0x21a528u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21a52c: 0x32080
    ctx->pc = 0x21a52cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x21a530: 0x3c030092
    ctx->pc = 0x21a530u;
    SET_GPR_U32(ctx, 3, ((uint32_t)146 << 16));
    // 0x21a534: 0x24634d00
    ctx->pc = 0x21a534u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 19712));
    // 0x21a538: 0x642021
    ctx->pc = 0x21a538u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_21a53c:
    // 0x21a53c: 0xac800000
    ctx->pc = 0x21a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x21a540: 0xac800004
    ctx->pc = 0x21a540u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x21a544: 0xac800014
    ctx->pc = 0x21a544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x21a548: 0xac800018
    ctx->pc = 0x21a548u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x21a54c: 0x24a50001
    ctx->pc = 0x21a54cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x21a550: 0xac800008
    ctx->pc = 0x21a550u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x21a554: 0x28a301d7
    ctx->pc = 0x21a554u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 471));
    // 0x21a558: 0x1460fff8
    ctx->pc = 0x21A558u;
    {
        const bool branch_taken_0x21a558 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21A55Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 28));
        if (branch_taken_0x21a558) {
            ctx->pc = 0x21A53Cu;
            goto label_21a53c;
        }
    }
    ctx->pc = 0x21A560u;
label_21a560:
    // 0x21a560: 0x3e00008
    ctx->pc = 0x21A560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21A46Cu: goto label_21a46c;
            case 0x21A53Cu: goto label_21a53c;
            case 0x21A560u: goto label_21a560;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21A568u;
}
