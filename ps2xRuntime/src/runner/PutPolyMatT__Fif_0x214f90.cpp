#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: PutPolyMatT__Fif
// Address: 0x214f90 - 0x215000
void PutPolyMatT__Fif_0x214f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("PutPolyMatT__Fif");


    ctx->pc = 0x214f90u;

    // 0x214f90: 0x41c03
    ctx->pc = 0x214f90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 16));
    // 0x214f94: 0x3405ffff
    ctx->pc = 0x214f94u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65535));
    // 0x214f98: 0x651824
    ctx->pc = 0x214f98u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x214f9c: 0x33100
    ctx->pc = 0x214f9cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 3), 4));
    // 0x214fa0: 0x3c030050
    ctx->pc = 0x214fa0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)80 << 16));
    // 0x214fa4: 0x27bdfff0
    ctx->pc = 0x214fa4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x214fa8: 0x2463ea20
    ctx->pc = 0x214fa8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961696));
    // 0x214fac: 0x7fbf0000
    ctx->pc = 0x214facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x214fb0: 0x661821
    ctx->pc = 0x214fb0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x214fb4: 0x8c650000
    ctx->pc = 0x214fb4u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x214fb8: 0x3c038000
    ctx->pc = 0x214fb8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x214fbc: 0xa31824
    ctx->pc = 0x214fbcu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x214fc0: 0x1060000c
    ctx->pc = 0x214FC0u;
    {
        const bool branch_taken_0x214fc0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x214fc0) {
            ctx->pc = 0x214FF4u;
            goto label_214ff4;
        }
    }
    ctx->pc = 0x214FC8u;
    // 0x214fc8: 0x3c020050
    ctx->pc = 0x214fc8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x214fcc: 0x2442ea24
    ctx->pc = 0x214fccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961700));
    // 0x214fd0: 0x461021
    ctx->pc = 0x214fd0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x214fd4: 0x8c420000
    ctx->pc = 0x214fd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x214fd8: 0x3084ffff
    ctx->pc = 0x214fd8u;
    SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
    // 0x214fdc: 0x41840
    ctx->pc = 0x214fdcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 1));
    // 0x214fe0: 0x641821
    ctx->pc = 0x214fe0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x214fe4: 0x31880
    ctx->pc = 0x214fe4u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 2));
    // 0x214fe8: 0x431021
    ctx->pc = 0x214fe8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x214fec: 0xc06a278
    ctx->pc = 0x214FECu;
    SET_GPR_U32(ctx, 31, 0x214FF4u);
    ctx->pc = 0x214FF0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x1A89E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlObjPutTrnsl_0x1a89e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x214FF4u; }
        else if (ctx->pc != 0x214FF4u) { ctx->pc = 0x214FF4u; }
    }
    if (ctx->pc != 0x214FF4u) { return; }
    ctx->pc = 0x214FF4u;
label_214ff4:
    // 0x214ff4: 0x7bbf0000
    ctx->pc = 0x214ff4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x214ff8: 0x3e00008
    ctx->pc = 0x214FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214FFCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x214FF4u: goto label_214ff4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215000u;
}
