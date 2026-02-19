#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBInitFrameMode
// Address: 0x2a8c70 - 0x2a8d54
void MBInitFrameMode_0x2a8c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a8c70u;

    // 0x2a8c70: 0x27bdffd0
    ctx->pc = 0x2a8c70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a8c74: 0xffbf0020
    ctx->pc = 0x2a8c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a8c78: 0xffb10010
    ctx->pc = 0x2a8c78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a8c7c: 0xffb00000
    ctx->pc = 0x2a8c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a8c80: 0x3c020036
    ctx->pc = 0x2a8c80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a8c84: 0x8c50dee0
    ctx->pc = 0x2a8c84u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a8c88: 0x8e020010
    ctx->pc = 0x2a8c88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8c8c: 0x3c11003c
    ctx->pc = 0x2a8c8cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)60 << 16));
    // 0x2a8c90: 0x26314ee0
    ctx->pc = 0x2a8c90u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 20192));
    // 0x2a8c94: 0xac51000c
    ctx->pc = 0x2a8c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
    // 0x2a8c98: 0x8e040010
    ctx->pc = 0x2a8c98u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8c9c: 0x8c82000c
    ctx->pc = 0x2a8c9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a8ca0: 0xae020008
    ctx->pc = 0x2a8ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2a8ca4: 0x3c020036
    ctx->pc = 0x2a8ca4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a8ca8: 0x8c43deec
    ctx->pc = 0x2a8ca8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294958828)));
    // 0x2a8cac: 0x8c82000c
    ctx->pc = 0x2a8cacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a8cb0: 0xac620000
    ctx->pc = 0x2a8cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a8cb4: 0x8e020010
    ctx->pc = 0x2a8cb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8cb8: 0x3c014500
    ctx->pc = 0x2a8cb8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17664 << 16));
    // 0x2a8cbc: 0x44810800
    ctx->pc = 0x2a8cbcu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x2a8cc0: 0xe4410038
    ctx->pc = 0x2a8cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x2a8cc4: 0x8e040010
    ctx->pc = 0x2a8cc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8cc8: 0x3c020037
    ctx->pc = 0x2a8cc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a8ccc: 0x3c030037
    ctx->pc = 0x2a8cccu;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2a8cd0: 0x8c428358
    ctx->pc = 0x2a8cd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935384)));
    // 0x2a8cd4: 0x8c638354
    ctx->pc = 0x2a8cd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294935380)));
    // 0x2a8cd8: 0x431023
    ctx->pc = 0x2a8cd8u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8cdc: 0x21fc2
    ctx->pc = 0x2a8cdcu;
    SET_GPR_U32(ctx, 3, SRL32(GPR_U32(ctx, 2), 31));
    // 0x2a8ce0: 0x431021
    ctx->pc = 0x2a8ce0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a8ce4: 0x21043
    ctx->pc = 0x2a8ce4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2a8ce8: 0x44820000
    ctx->pc = 0x2a8ce8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x2a8cec: 0x46800020
    ctx->pc = 0x2a8cecu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x2a8cf0: 0x46010000
    ctx->pc = 0x2a8cf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2a8cf4: 0xe480003c
    ctx->pc = 0x2a8cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x2a8cf8: 0x8e020010
    ctx->pc = 0x2a8cf8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8cfc: 0xac400004
    ctx->pc = 0x2a8cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a8d00: 0xc0b8312
    ctx->pc = 0x2A8D00u;
    SET_GPR_U32(ctx, 31, 0x2A8D08u);
    ctx->pc = 0x2A8D04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E0C48u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncV_0x2e0c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8D08u; }
    }
    if (ctx->pc != 0x2A8D08u) { return; }
    ctx->pc = 0x2A8D08u;
    // 0x2a8d08: 0x8e030010
    ctx->pc = 0x2a8d08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8d0c: 0x2c420001
    ctx->pc = 0x2a8d0cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 1));
    // 0x2a8d10: 0xac620008
    ctx->pc = 0x2a8d10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2a8d14: 0x8e020010
    ctx->pc = 0x2a8d14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8d18: 0xac400010
    ctx->pc = 0x2a8d18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x2a8d1c: 0x8e020010
    ctx->pc = 0x2a8d1cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8d20: 0x24030004
    ctx->pc = 0x2a8d20u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a8d24: 0xac430014
    ctx->pc = 0x2a8d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x2a8d28: 0x8e020010
    ctx->pc = 0x2a8d28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a8d2c: 0xac430018
    ctx->pc = 0x2a8d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x2a8d30: 0x3c020037
    ctx->pc = 0x2a8d30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a8d34: 0x8c428330
    ctx->pc = 0x2a8d34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294935344)));
    // 0x2a8d38: 0xac510028
    ctx->pc = 0x2a8d38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 17));
    // 0x2a8d3c: 0xac51002c
    ctx->pc = 0x2a8d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
    // 0x2a8d40: 0xdfbf0020
    ctx->pc = 0x2a8d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a8d44: 0xdfb10010
    ctx->pc = 0x2a8d44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a8d48: 0xdfb00000
    ctx->pc = 0x2a8d48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8d4c: 0x3e00008
    ctx->pc = 0x2A8D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A8D50u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A8D54u;
}
