#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CalcDestination
// Address: 0x214f10 - 0x214fa0
void CalcDestination_0x214f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x214f10u;

    // 0x214f10: 0x27bdffa0
    ctx->pc = 0x214f10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x214f14: 0xffbf0050
    ctx->pc = 0x214f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x214f18: 0xffb40040
    ctx->pc = 0x214f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x214f1c: 0xffb30030
    ctx->pc = 0x214f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x214f20: 0xffb20020
    ctx->pc = 0x214f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x214f24: 0xffb10010
    ctx->pc = 0x214f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x214f28: 0xffb00000
    ctx->pc = 0x214f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x214f2c: 0x80982d
    ctx->pc = 0x214f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f30: 0x902d
    ctx->pc = 0x214f30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214f34: 0x3c020032
    ctx->pc = 0x214f34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x214f38: 0x8c42f778
    ctx->pc = 0x214f38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965112)));
    // 0x214f3c: 0x18400010
    ctx->pc = 0x214F3Cu;
    {
        const bool branch_taken_0x214f3c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x214F40u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x214f3c) {
            ctx->pc = 0x214F80u;
            goto label_214f80;
        }
    }
    ctx->pc = 0x214F44u;
    // 0x214f44: 0x3c140032
    ctx->pc = 0x214f44u;
    SET_GPR_U32(ctx, 20, ((uint32_t)50 << 16));
label_214f48:
    // 0x214f48: 0xc08582a
    ctx->pc = 0x214F48u;
    SET_GPR_U32(ctx, 31, 0x214F50u);
    ctx->pc = 0x214F4Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2160A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateCam_0x2160a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F50u; }
    }
    if (ctx->pc != 0x214F50u) { return; }
    ctx->pc = 0x214F50u;
    // 0x214f50: 0xc0ab452
    ctx->pc = 0x214F50u;
    SET_GPR_U32(ctx, 31, 0x214F58u);
    ctx->pc = 0x214F54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AD148u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbUpdateMatricies_0x2ad148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214F58u; }
    }
    if (ctx->pc != 0x214F58u) { return; }
    ctx->pc = 0x214F58u;
    // 0x214f58: 0x12000002
    ctx->pc = 0x214F58u;
    {
        const bool branch_taken_0x214f58 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x214F5Cu;
        SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
        if (branch_taken_0x214f58) {
            ctx->pc = 0x214F64u;
            goto label_214f64;
        }
    }
    ctx->pc = 0x214F60u;
    // 0x214f60: 0x902d
    ctx->pc = 0x214f60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214f64:
    // 0x214f64: 0x8e82f778
    ctx->pc = 0x214f64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294965112)));
    // 0x214f68: 0x242102a
    ctx->pc = 0x214f68u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x214f6c: 0x10400004
    ctx->pc = 0x214F6Cu;
    {
        const bool branch_taken_0x214f6c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x214F70u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
        if (branch_taken_0x214f6c) {
            ctx->pc = 0x214F80u;
            goto label_214f80;
        }
    }
    ctx->pc = 0x214F74u;
    // 0x214f74: 0x2a220064
    ctx->pc = 0x214f74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 100));
    // 0x214f78: 0x1440fff3
    ctx->pc = 0x214F78u;
    {
        const bool branch_taken_0x214f78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x214f78) {
            ctx->pc = 0x214F48u;
            goto label_214f48;
        }
    }
    ctx->pc = 0x214F80u;
label_214f80:
    // 0x214f80: 0xdfbf0050
    ctx->pc = 0x214f80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x214f84: 0xdfb40040
    ctx->pc = 0x214f84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x214f88: 0xdfb30030
    ctx->pc = 0x214f88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214f8c: 0xdfb20020
    ctx->pc = 0x214f8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214f90: 0xdfb10010
    ctx->pc = 0x214f90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214f94: 0xdfb00000
    ctx->pc = 0x214f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214f98: 0x3e00008
    ctx->pc = 0x214F98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214F9Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214F48u: goto label_214f48;
            case 0x214F64u: goto label_214f64;
            case 0x214F80u: goto label_214f80;
            default: break;
        }
        return;
    }
    ctx->pc = 0x214FA0u;
}
