#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_GetTmrInf
// Address: 0x19d4b8 - 0x19d5bc
void SFD_GetTmrInf_0x19d4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_GetTmrInf");


    ctx->pc = 0x19d4b8u;

    // 0x19d4b8: 0x27bdffd0
    ctx->pc = 0x19d4b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d4bc: 0xffb10010
    ctx->pc = 0x19d4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19d4c0: 0xffb00000
    ctx->pc = 0x19d4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d4c4: 0x80882d
    ctx->pc = 0x19d4c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d4c8: 0xffbf0020
    ctx->pc = 0x19d4c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19d4cc: 0xc064f1e
    ctx->pc = 0x19D4CCu;
    SET_GPR_U32(ctx, 31, 0x19D4D4u);
    ctx->pc = 0x19D4D0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D4D4u; }
        else if (ctx->pc != 0x19D4D4u) { ctx->pc = 0x19D4D4u; }
    }
    if (ctx->pc != 0x19D4D4u) { return; }
    ctx->pc = 0x19D4D4u;
    // 0x19d4d4: 0x10400006
    ctx->pc = 0x19D4D4u;
    {
        const bool branch_taken_0x19d4d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D4D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d4d4) {
            ctx->pc = 0x19D4F0u;
            goto label_19d4f0;
        }
    }
    ctx->pc = 0x19D4DCu;
    // 0x19d4dc: 0x3c05ff00
    ctx->pc = 0x19d4dcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19d4e0: 0xc064ea0
    ctx->pc = 0x19D4E0u;
    SET_GPR_U32(ctx, 31, 0x19D4E8u);
    ctx->pc = 0x19D4E4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 282));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D4E8u; }
        else if (ctx->pc != 0x19D4E8u) { ctx->pc = 0x19D4E8u; }
    }
    if (ctx->pc != 0x19D4E8u) { return; }
    ctx->pc = 0x19D4E8u;
    // 0x19d4e8: 0x10000030
    ctx->pc = 0x19D4E8u;
    {
        const bool branch_taken_0x19d4e8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D4ECu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19d4e8) {
            ctx->pc = 0x19D5ACu;
            goto label_19d5ac;
        }
    }
    ctx->pc = 0x19D4F0u;
label_19d4f0:
    // 0x19d4f0: 0x26266828
    ctx->pc = 0x19d4f0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 17), 26664));
    // 0x19d4f4: 0x200102d
    ctx->pc = 0x19d4f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d4f8: 0x26246768
    ctx->pc = 0x19d4f8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 26472));
    // 0x19d4fc: 0x26050008
    ctx->pc = 0x19d4fcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 8));
    // 0x19d500: 0x26030010
    ctx->pc = 0x19d500u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 16));
label_19d504:
    // 0x19d504: 0xdc870000
    ctx->pc = 0x19d504u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19d508: 0xdc880008
    ctx->pc = 0x19d508u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x19d50c: 0xdc890010
    ctx->pc = 0x19d50cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x19d510: 0xdc8a0018
    ctx->pc = 0x19d510u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x19d514: 0xfc470000
    ctx->pc = 0x19d514u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x19d518: 0xfc480008
    ctx->pc = 0x19d518u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 8));
    // 0x19d51c: 0xfc490010
    ctx->pc = 0x19d51cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 9));
    // 0x19d520: 0xfc4a0018
    ctx->pc = 0x19d520u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 10));
    // 0x19d524: 0x24840020
    ctx->pc = 0x19d524u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 32));
    // 0x19d528: 0x24420020
    ctx->pc = 0x19d528u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 32));
    // 0x19d52c: 0x0
    ctx->pc = 0x19d52cu;
    // NOP
    // 0x19d530: 0x1486fff4
    ctx->pc = 0x19D530u;
    {
        const bool branch_taken_0x19d530 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 6));
        if (branch_taken_0x19d530) {
            ctx->pc = 0x19D504u;
            goto label_19d504;
        }
    }
    ctx->pc = 0x19D538u;
    // 0x19d538: 0x246a0020
    ctx->pc = 0x19d538u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 3), 32));
    // 0x19d53c: 0x24a90020
    ctx->pc = 0x19d53cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 5), 32));
    // 0x19d540: 0x26080020
    ctx->pc = 0x19d540u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 32));
    // 0x19d544: 0x240b0002
    ctx->pc = 0x19d544u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 2));
label_19d548:
    // 0x19d548: 0xdd030000
    ctx->pc = 0x19d548u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x19d54c: 0x256bffff
    ctx->pc = 0x19d54cu;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x19d550: 0xde020000
    ctx->pc = 0x19d550u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19d554: 0xde040008
    ctx->pc = 0x19d554u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19d558: 0x43102d
    ctx->pc = 0x19d558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x19d55c: 0xde060010
    ctx->pc = 0x19d55cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19d560: 0xfe020000
    ctx->pc = 0x19d560u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x19d564: 0x8d070018
    ctx->pc = 0x19d564u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x19d568: 0xdd250000
    ctx->pc = 0x19d568u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x19d56c: 0x25080020
    ctx->pc = 0x19d56cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 32));
    // 0x19d570: 0x8e030018
    ctx->pc = 0x19d570u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19d574: 0x25290020
    ctx->pc = 0x19d574u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 9), 32));
    // 0x19d578: 0xa4102a
    ctx->pc = 0x19d578u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
    // 0x19d57c: 0xa2200b
    ctx->pc = 0x19d57cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 5));
    // 0x19d580: 0x671821
    ctx->pc = 0x19d580u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x19d584: 0xfe040008
    ctx->pc = 0x19d584u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x19d588: 0xae030018
    ctx->pc = 0x19d588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x19d58c: 0xdd440000
    ctx->pc = 0x19d58cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x19d590: 0x254a0020
    ctx->pc = 0x19d590u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 10), 32));
    // 0x19d594: 0xc4102a
    ctx->pc = 0x19d594u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 6), GPR_S32(ctx, 4)));
    // 0x19d598: 0x82300b
    ctx->pc = 0x19d598u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 6, GPR_U32(ctx, 4));
    // 0x19d59c: 0x561ffea
    ctx->pc = 0x19D59Cu;
    {
        const bool branch_taken_0x19d59c = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x19D5A0u;
        WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 6));
        if (branch_taken_0x19d59c) {
            ctx->pc = 0x19D548u;
            goto label_19d548;
        }
    }
    ctx->pc = 0x19D5A4u;
    // 0x19d5a4: 0x102d
    ctx->pc = 0x19d5a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d5a8: 0xdfbf0020
    ctx->pc = 0x19d5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19d5ac:
    // 0x19d5ac: 0xdfb10010
    ctx->pc = 0x19d5acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d5b0: 0xdfb00000
    ctx->pc = 0x19d5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d5b4: 0x3e00008
    ctx->pc = 0x19D5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D5B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D4F0u: goto label_19d4f0;
            case 0x19D504u: goto label_19d504;
            case 0x19D548u: goto label_19d548;
            case 0x19D5ACu: goto label_19d5ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D5BCu;
}
