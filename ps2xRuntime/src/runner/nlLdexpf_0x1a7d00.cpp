#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlLdexpf
// Address: 0x1a7d00 - 0x1a7dd8
void nlLdexpf_0x1a7d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlLdexpf");


    ctx->pc = 0x1a7d00u;

    // 0x1a7d00: 0x44800000
    ctx->pc = 0x1a7d00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x1a7d04: 0x0
    ctx->pc = 0x1a7d04u;
    // NOP
    // 0x1a7d08: 0x460c0032
    ctx->pc = 0x1a7d08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a7d0c: 0x0
    ctx->pc = 0x1a7d0cu;
    // NOP
    // 0x1a7d10: 0x45000003
    ctx->pc = 0x1A7D10u;
    {
        const bool branch_taken_0x1a7d10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A7D14u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
        if (branch_taken_0x1a7d10) {
            ctx->pc = 0x1A7D20u;
            goto label_1a7d20;
        }
    }
    ctx->pc = 0x1A7D18u;
    // 0x1a7d18: 0x1000002d
    ctx->pc = 0x1A7D18u;
    {
        const bool branch_taken_0x1a7d18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7D1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        if (branch_taken_0x1a7d18) {
            ctx->pc = 0x1A7DD0u;
            goto label_1a7dd0;
        }
    }
    ctx->pc = 0x1A7D20u;
label_1a7d20:
    // 0x1a7d20: 0xe7ac000c
    ctx->pc = 0x1a7d20u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1a7d24: 0x27a2000c
    ctx->pc = 0x1a7d24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 29), 12));
    // 0x1a7d28: 0x8c460000
    ctx->pc = 0x1a7d28u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7d2c: 0x61dc3
    ctx->pc = 0x1a7d2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 23));
    // 0x1a7d30: 0x306300ff
    ctx->pc = 0x1a7d30u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 255));
    // 0x1a7d34: 0x832021
    ctx->pc = 0x1a7d34u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a7d38: 0x1c800010
    ctx->pc = 0x1A7D38u;
    {
        const bool branch_taken_0x1a7d38 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1A7D3Cu;
        SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 255));
        if (branch_taken_0x1a7d38) {
            ctx->pc = 0x1A7D7Cu;
            goto label_1a7d7c;
        }
    }
    ctx->pc = 0x1A7D40u;
    // 0x1a7d40: 0x62a7c
    ctx->pc = 0x1a7d40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << (32 + 9));
    // 0x1a7d44: 0x52a7e
    ctx->pc = 0x1a7d44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 9));
    // 0x1a7d48: 0x3c030080
    ctx->pc = 0x1a7d48u;
    SET_GPR_U32(ctx, 3, ((uint32_t)128 << 16));
    // 0x1a7d4c: 0xa32825
    ctx->pc = 0x1a7d4cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1a7d50: 0x24030001
    ctx->pc = 0x1a7d50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a7d54: 0x641823
    ctx->pc = 0x1a7d54u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7d58: 0x652007
    ctx->pc = 0x1a7d58u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x1a7d5c: 0x3c038000
    ctx->pc = 0x1a7d5cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1a7d60: 0xc31824
    ctx->pc = 0x1a7d60u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a7d64: 0xac430000
    ctx->pc = 0x1a7d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7d68: 0x8c430000
    ctx->pc = 0x1a7d68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7d6c: 0x641825
    ctx->pc = 0x1a7d6cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7d70: 0xac430000
    ctx->pc = 0x1a7d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7d74: 0x10000015
    ctx->pc = 0x1A7D74u;
    {
        const bool branch_taken_0x1a7d74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7D78u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x1a7d74) {
            ctx->pc = 0x1A7DCCu;
            goto label_1a7dcc;
        }
    }
    ctx->pc = 0x1A7D7Cu;
label_1a7d7c:
    // 0x1a7d7c: 0x1420000a
    ctx->pc = 0x1A7D7Cu;
    {
        const bool branch_taken_0x1a7d7c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x1A7D80u;
        SET_GPR_U32(ctx, 3, ((uint32_t)32895 << 16));
        if (branch_taken_0x1a7d7c) {
            ctx->pc = 0x1A7DA8u;
            goto label_1a7da8;
        }
    }
    ctx->pc = 0x1A7D84u;
    // 0x1a7d84: 0x3c038000
    ctx->pc = 0x1a7d84u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32768 << 16));
    // 0x1a7d88: 0xc31824
    ctx->pc = 0x1a7d88u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a7d8c: 0xac430000
    ctx->pc = 0x1a7d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7d90: 0x8c440000
    ctx->pc = 0x1a7d90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7d94: 0x3c037f80
    ctx->pc = 0x1a7d94u;
    SET_GPR_U32(ctx, 3, ((uint32_t)32640 << 16));
    // 0x1a7d98: 0x831825
    ctx->pc = 0x1a7d98u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a7d9c: 0xac430000
    ctx->pc = 0x1a7d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7da0: 0x1000000a
    ctx->pc = 0x1A7DA0u;
    {
        const bool branch_taken_0x1a7da0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A7DA4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x1a7da0) {
            ctx->pc = 0x1A7DCCu;
            goto label_1a7dcc;
        }
    }
    ctx->pc = 0x1A7DA8u;
label_1a7da8:
    // 0x1a7da8: 0x3463ffff
    ctx->pc = 0x1a7da8u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 65535));
    // 0x1a7dac: 0xc31824
    ctx->pc = 0x1a7dacu;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1a7db0: 0xac430000
    ctx->pc = 0x1a7db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7db4: 0x8c430000
    ctx->pc = 0x1a7db4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a7db8: 0x425c0
    ctx->pc = 0x1a7db8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 23));
    // 0x1a7dbc: 0x641825
    ctx->pc = 0x1a7dbcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7dc0: 0xac430000
    ctx->pc = 0x1a7dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a7dc4: 0xc7a0000c
    ctx->pc = 0x1a7dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a7dc8: 0x0
    ctx->pc = 0x1a7dc8u;
    // NOP
label_1a7dcc:
    // 0x1a7dcc: 0x27bd0010
    ctx->pc = 0x1a7dccu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
label_1a7dd0:
    // 0x1a7dd0: 0x3e00008
    ctx->pc = 0x1A7DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A7D20u: goto label_1a7d20;
            case 0x1A7D7Cu: goto label_1a7d7c;
            case 0x1A7DA8u: goto label_1a7da8;
            case 0x1A7DCCu: goto label_1a7dcc;
            case 0x1A7DD0u: goto label_1a7dd0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A7DD8u;
}
