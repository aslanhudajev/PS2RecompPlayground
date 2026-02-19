#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: blocked08
// Address: 0x240d40 - 0x240de8
void blocked08_0x240d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x240d40u;

    // 0x240d40: 0x27bdffe0
    ctx->pc = 0x240d40u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x240d44: 0xffbf0010
    ctx->pc = 0x240d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x240d48: 0xffb00000
    ctx->pc = 0x240d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x240d4c: 0xa0382d
    ctx->pc = 0x240d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240d50: 0x240303b0
    ctx->pc = 0x240d50u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x240d54: 0x831818
    ctx->pc = 0x240d54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x240d58: 0x3c020033
    ctx->pc = 0x240d58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x240d5c: 0x2442dfd0
    ctx->pc = 0x240d5cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x240d60: 0x628021
    ctx->pc = 0x240d60u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x240d64: 0x8e020368
    ctx->pc = 0x240d64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x240d68: 0x4420001
    ctx->pc = 0x240D68u;
    {
        const bool branch_taken_0x240d68 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x240d68) {
            ctx->pc = 0x240D6Cu;
            SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->pc = 0x240D70u;
            goto label_240d70;
        }
    }
    ctx->pc = 0x240D70u;
label_240d70:
    // 0x240d70: 0x28420003
    ctx->pc = 0x240d70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x240d74: 0x10400008
    ctx->pc = 0x240D74u;
    {
        const bool branch_taken_0x240d74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x240D78u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x240d74) {
            ctx->pc = 0x240D98u;
            goto label_240d98;
        }
    }
    ctx->pc = 0x240D7Cu;
    // 0x240d7c: 0x96020378
    ctx->pc = 0x240d7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
    // 0x240d80: 0x24420001
    ctx->pc = 0x240d80u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x240d84: 0xa6020378
    ctx->pc = 0x240d84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 2));
    // 0x240d88: 0xc08efc2
    ctx->pc = 0x240D88u;
    SET_GPR_U32(ctx, 31, 0x240D90u);
    ctx->pc = 0x240D8Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240D90u; }
    }
    if (ctx->pc != 0x240D90u) { return; }
    ctx->pc = 0x240D90u;
    // 0x240d90: 0x1000000a
    ctx->pc = 0x240D90u;
    {
        const bool branch_taken_0x240d90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x240D94u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
        if (branch_taken_0x240d90) {
            ctx->pc = 0x240DBCu;
            goto label_240dbc;
        }
    }
    ctx->pc = 0x240D98u;
label_240d98:
    // 0x240d98: 0xc08efc2
    ctx->pc = 0x240D98u;
    SET_GPR_U32(ctx, 31, 0x240DA0u);
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240DA0u; }
    }
    if (ctx->pc != 0x240DA0u) { return; }
    ctx->pc = 0x240DA0u;
    // 0x240da0: 0x3c02003c
    ctx->pc = 0x240da0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x240da4: 0xc4401c6c
    ctx->pc = 0x240da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x240da8: 0xe6000260
    ctx->pc = 0x240da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 608), bits); }
    // 0x240dac: 0xe6000258
    ctx->pc = 0x240dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
    // 0x240db0: 0xa6000378
    ctx->pc = 0x240db0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
    // 0x240db4: 0xae000368
    ctx->pc = 0x240db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 0));
    // 0x240db8: 0x86020378
    ctx->pc = 0x240db8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 888)));
label_240dbc:
    // 0x240dbc: 0x28420007
    ctx->pc = 0x240dbcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 7));
    // 0x240dc0: 0x14400006
    ctx->pc = 0x240DC0u;
    {
        const bool branch_taken_0x240dc0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x240DC4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x240dc0) {
            ctx->pc = 0x240DDCu;
            goto label_240ddc;
        }
    }
    ctx->pc = 0x240DC8u;
    // 0x240dc8: 0x8e020368
    ctx->pc = 0x240dc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x240dcc: 0x21023
    ctx->pc = 0x240dccu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x240dd0: 0x21040
    ctx->pc = 0x240dd0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 1));
    // 0x240dd4: 0xae020368
    ctx->pc = 0x240dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x240dd8: 0xa6000378
    ctx->pc = 0x240dd8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
label_240ddc:
    // 0x240ddc: 0xdfb00000
    ctx->pc = 0x240ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240de0: 0x3e00008
    ctx->pc = 0x240DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240DE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240D70u: goto label_240d70;
            case 0x240D98u: goto label_240d98;
            case 0x240DBCu: goto label_240dbc;
            case 0x240DDCu: goto label_240ddc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240DE8u;
}
