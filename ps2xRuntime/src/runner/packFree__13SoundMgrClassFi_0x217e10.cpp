#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: packFree__13SoundMgrClassFi
// Address: 0x217e10 - 0x217e80
void packFree__13SoundMgrClassFi_0x217e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("packFree__13SoundMgrClassFi");


    ctx->pc = 0x217e10u;

    // 0x217e10: 0x27bdff70
    ctx->pc = 0x217e10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x217e14: 0x7fbf0020
    ctx->pc = 0x217e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x217e18: 0x7fb10010
    ctx->pc = 0x217e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x217e1c: 0x7fb00000
    ctx->pc = 0x217e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x217e20: 0x70a08e28
    ctx->pc = 0x217e20u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x217e24: 0x70808628
    ctx->pc = 0x217e24u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x217e28: 0x72202628
    ctx->pc = 0x217e28u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x217e2c: 0xc06b59c
    ctx->pc = 0x217E2Cu;
    SET_GPR_U32(ctx, 31, 0x217E34u);
    ctx->pc = 0x217E30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 140));
    ctx->pc = 0x1AD670u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndGetPackInfo_0x1ad670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E34u; }
        else if (ctx->pc != 0x217E34u) { ctx->pc = 0x217E34u; }
    }
    if (ctx->pc != 0x217E34u) { return; }
    ctx->pc = 0x217E34u;
    // 0x217e34: 0x8fa3008c
    ctx->pc = 0x217e34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x217e38: 0x460000c
    ctx->pc = 0x217E38u;
    {
        const bool branch_taken_0x217e38 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x217E3Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
        if (branch_taken_0x217e38) {
            ctx->pc = 0x217E6Cu;
            goto label_217e6c;
        }
    }
    ctx->pc = 0x217E40u;
    // 0x217e40: 0xc06b588
    ctx->pc = 0x217E40u;
    SET_GPR_U32(ctx, 31, 0x217E48u);
    ctx->pc = 0x217E44u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 48), (uint16_t)GPR_U32(ctx, 17));
    ctx->pc = 0x1AD620u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlsndPackFree_0x1ad620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E48u; }
        else if (ctx->pc != 0x217E48u) { ctx->pc = 0x217E48u; }
    }
    if (ctx->pc != 0x217E48u) { return; }
    ctx->pc = 0x217E48u;
    // 0x217e48: 0x8fa3008c
    ctx->pc = 0x217e48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x217e4c: 0x2404ffff
    ctx->pc = 0x217e4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x217e50: 0x318c0
    ctx->pc = 0x217e50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x217e54: 0x701821
    ctx->pc = 0x217e54u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x217e58: 0xac600004
    ctx->pc = 0x217e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x217e5c: 0x8fa3008c
    ctx->pc = 0x217e5cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x217e60: 0x318c0
    ctx->pc = 0x217e60u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 3));
    // 0x217e64: 0x701821
    ctx->pc = 0x217e64u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x217e68: 0xa4640002
    ctx->pc = 0x217e68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
label_217e6c:
    // 0x217e6c: 0x7bbf0020
    ctx->pc = 0x217e6cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217e70: 0x7bb10010
    ctx->pc = 0x217e70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217e74: 0x7bb00000
    ctx->pc = 0x217e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217e78: 0x3e00008
    ctx->pc = 0x217E78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217E7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217E6Cu: goto label_217e6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217E80u;
}
