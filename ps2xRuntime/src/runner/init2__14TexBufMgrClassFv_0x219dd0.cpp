#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: init2__14TexBufMgrClassFv
// Address: 0x219dd0 - 0x219e94
void init2__14TexBufMgrClassFv_0x219dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("init2__14TexBufMgrClassFv");


    ctx->pc = 0x219dd0u;

    // 0x219dd0: 0x27bdffe0
    ctx->pc = 0x219dd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x219dd4: 0x7fbf0010
    ctx->pc = 0x219dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x219dd8: 0x7fb00000
    ctx->pc = 0x219dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x219ddc: 0xac800394
    ctx->pc = 0x219ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 916), GPR_U32(ctx, 0));
    // 0x219de0: 0xac800398
    ctx->pc = 0x219de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 920), GPR_U32(ctx, 0));
    // 0x219de4: 0xac80000c
    ctx->pc = 0x219de4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x219de8: 0xac80039c
    ctx->pc = 0x219de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 924), GPR_U32(ctx, 0));
    // 0x219dec: 0xac8003a0
    ctx->pc = 0x219decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 928), GPR_U32(ctx, 0));
    // 0x219df0: 0xac800010
    ctx->pc = 0x219df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x219df4: 0xac800010
    ctx->pc = 0x219df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x219df8: 0xac80000c
    ctx->pc = 0x219df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x219dfc: 0x70808628
    ctx->pc = 0x219dfcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x219e00: 0xac800008
    ctx->pc = 0x219e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x219e04: 0x70001e28
    ctx->pc = 0x219e04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x219e08: 0x72002e28
    ctx->pc = 0x219e08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_219e0c:
    // 0x219e0c: 0x24820014
    ctx->pc = 0x219e0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 20));
    // 0x219e10: 0xaca20314
    ctx->pc = 0x219e10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 788), GPR_U32(ctx, 2));
    // 0x219e14: 0x2482002c
    ctx->pc = 0x219e14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 44));
    // 0x219e18: 0xaca20318
    ctx->pc = 0x219e18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 792), GPR_U32(ctx, 2));
    // 0x219e1c: 0x24820044
    ctx->pc = 0x219e1cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 68));
    // 0x219e20: 0xaca2031c
    ctx->pc = 0x219e20u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 796), GPR_U32(ctx, 2));
    // 0x219e24: 0x2482005c
    ctx->pc = 0x219e24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 92));
    // 0x219e28: 0xaca20320
    ctx->pc = 0x219e28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 800), GPR_U32(ctx, 2));
    // 0x219e2c: 0x24820074
    ctx->pc = 0x219e2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 116));
    // 0x219e30: 0xaca20324
    ctx->pc = 0x219e30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 804), GPR_U32(ctx, 2));
    // 0x219e34: 0x2482008c
    ctx->pc = 0x219e34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 140));
    // 0x219e38: 0xaca20328
    ctx->pc = 0x219e38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 808), GPR_U32(ctx, 2));
    // 0x219e3c: 0x248200a4
    ctx->pc = 0x219e3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 164));
    // 0x219e40: 0xaca2032c
    ctx->pc = 0x219e40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 812), GPR_U32(ctx, 2));
    // 0x219e44: 0x248200bc
    ctx->pc = 0x219e44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 188));
    // 0x219e48: 0xaca20330
    ctx->pc = 0x219e48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 816), GPR_U32(ctx, 2));
    // 0x219e4c: 0x24630008
    ctx->pc = 0x219e4cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 8));
    // 0x219e50: 0x28620020
    ctx->pc = 0x219e50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 32));
    // 0x219e54: 0x248400c0
    ctx->pc = 0x219e54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 192));
    // 0x219e58: 0x1440ffec
    ctx->pc = 0x219E58u;
    {
        const bool branch_taken_0x219e58 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x219E5Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 32));
        if (branch_taken_0x219e58) {
            ctx->pc = 0x219E0Cu;
            goto label_219e0c;
        }
    }
    ctx->pc = 0x219E60u;
    // 0x219e60: 0xc0867c8
    ctx->pc = 0x219E60u;
    SET_GPR_U32(ctx, 31, 0x219E68u);
    ctx->pc = 0x219E64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x219F20u;
    {
        const uint32_t __entryPc = ctx->pc;
        getFreeBlock__14TexBufMgrClassFv_0x219f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219E68u; }
        else if (ctx->pc != 0x219E68u) { ctx->pc = 0x219E68u; }
    }
    if (ctx->pc != 0x219E68u) { return; }
    ctx->pc = 0x219E68u;
    // 0x219e68: 0x8e030000
    ctx->pc = 0x219e68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x219e6c: 0x72002628
    ctx->pc = 0x219e6cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x219e70: 0x70402e28
    ctx->pc = 0x219e70u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x219e74: 0xac430008
    ctx->pc = 0x219e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x219e78: 0x8e030004
    ctx->pc = 0x219e78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x219e7c: 0xc086800
    ctx->pc = 0x219E7Cu;
    SET_GPR_U32(ctx, 31, 0x219E84u);
    ctx->pc = 0x219E80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    ctx->pc = 0x21A000u;
    {
        const uint32_t __entryPc = ctx->pc;
        appendFreeBlockList__14TexBufMgrClassFP10TexSurface_0x21a000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x219E84u; }
        else if (ctx->pc != 0x219E84u) { ctx->pc = 0x219E84u; }
    }
    if (ctx->pc != 0x219E84u) { return; }
    ctx->pc = 0x219E84u;
    // 0x219e84: 0x7bbf0010
    ctx->pc = 0x219e84u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x219e88: 0x7bb00000
    ctx->pc = 0x219e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x219e8c: 0x3e00008
    ctx->pc = 0x219E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x219E90u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219E0Cu: goto label_219e0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x219E94u;
}
