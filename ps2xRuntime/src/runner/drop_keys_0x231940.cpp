#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: drop_keys
// Address: 0x231940 - 0x231a0c
void drop_keys_0x231940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x231940u;

    // 0x231940: 0x27bdffa0
    ctx->pc = 0x231940u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x231944: 0xffbf0050
    ctx->pc = 0x231944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x231948: 0xffb00040
    ctx->pc = 0x231948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x23194c: 0x80802d
    ctx->pc = 0x23194cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231950: 0x8e021a14
    ctx->pc = 0x231950u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x231954: 0x18400028
    ctx->pc = 0x231954u;
    {
        const bool branch_taken_0x231954 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x231958u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x231954) {
            ctx->pc = 0x2319F8u;
            goto label_2319f8;
        }
    }
    ctx->pc = 0x23195Cu;
    // 0x23195c: 0x8c43e7f0
    ctx->pc = 0x23195cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961136)));
    // 0x231960: 0x2402000d
    ctx->pc = 0x231960u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 13));
    // 0x231964: 0x10620024
    ctx->pc = 0x231964u;
    {
        const bool branch_taken_0x231964 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x231968u;
        SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
        if (branch_taken_0x231964) {
            ctx->pc = 0x2319F8u;
            goto label_2319f8;
        }
    }
    ctx->pc = 0x23196Cu;
    // 0x23196c: 0x24842550
    ctx->pc = 0x23196cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 9552));
    // 0x231970: 0xc0b5494
    ctx->pc = 0x231970u;
    SET_GPR_U32(ctx, 31, 0x231978u);
    ctx->pc = 0x231974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231978u; }
    }
    if (ctx->pc != 0x231978u) { return; }
    ctx->pc = 0x231978u;
    // 0x231978: 0x3c020033
    ctx->pc = 0x231978u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x23197c: 0x2443c7c8
    ctx->pc = 0x23197cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294952904));
    // 0x231980: 0xc440c7c8
    ctx->pc = 0x231980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231984: 0xe7a00030
    ctx->pc = 0x231984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x231988: 0xc4600004
    ctx->pc = 0x231988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23198c: 0xe7a00034
    ctx->pc = 0x23198cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x231990: 0xc4600008
    ctx->pc = 0x231990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231994: 0xe7a00038
    ctx->pc = 0x231994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x231998: 0x26040020
    ctx->pc = 0x231998u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 32));
    // 0x23199c: 0xc0b5494
    ctx->pc = 0x23199Cu;
    SET_GPR_U32(ctx, 31, 0x2319A4u);
    ctx->pc = 0x2319A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5250u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat4_0x2d5250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2319A4u; }
    }
    if (ctx->pc != 0x2319A4u) { return; }
    ctx->pc = 0x2319A4u;
    // 0x2319a4: 0x3c020036
    ctx->pc = 0x2319a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2319a8: 0x8c42d934
    ctx->pc = 0x2319a8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x2319ac: 0x4430013
    ctx->pc = 0x2319ACu;
    {
        const bool branch_taken_0x2319ac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2319ac) {
            ctx->pc = 0x2319B0u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 0));
            ctx->pc = 0x2319FCu;
            goto label_2319fc;
        }
    }
    ctx->pc = 0x2319B4u;
    // 0x2319b4: 0x8e031a14
    ctx->pc = 0x2319b4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x2319b8: 0x24020001
    ctx->pc = 0x2319b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2319bc: 0x14620004
    ctx->pc = 0x2319BCu;
    {
        const bool branch_taken_0x2319bc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2319C0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
        if (branch_taken_0x2319bc) {
            ctx->pc = 0x2319D0u;
            goto label_2319d0;
        }
    }
    ctx->pc = 0x2319C4u;
    // 0x2319c4: 0x3c02003a
    ctx->pc = 0x2319c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2319c8: 0x10000002
    ctx->pc = 0x2319C8u;
    {
        const bool branch_taken_0x2319c8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2319CCu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 29224));
        if (branch_taken_0x2319c8) {
            ctx->pc = 0x2319D4u;
            goto label_2319d4;
        }
    }
    ctx->pc = 0x2319D0u;
label_2319d0:
    // 0x2319d0: 0x244677e8
    ctx->pc = 0x2319d0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 30696));
label_2319d4:
    // 0x2319d4: 0x24040001
    ctx->pc = 0x2319d4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2319d8: 0x24050002
    ctx->pc = 0x2319d8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2319dc: 0xc094e54
    ctx->pc = 0x2319DCu;
    SET_GPR_U32(ctx, 31, 0x2319E4u);
    ctx->pc = 0x2319E0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x253950u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddItem_0x253950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2319E4u; }
    }
    if (ctx->pc != 0x2319E4u) { return; }
    ctx->pc = 0x2319E4u;
    // 0x2319e4: 0x40182d
    ctx->pc = 0x2319e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2319e8: 0x50600004
    ctx->pc = 0x2319E8u;
    {
        const bool branch_taken_0x2319e8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x2319e8) {
            ctx->pc = 0x2319ECu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 0));
            ctx->pc = 0x2319FCu;
            goto label_2319fc;
        }
    }
    ctx->pc = 0x2319F0u;
    // 0x2319f0: 0x8e021a14
    ctx->pc = 0x2319f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x2319f4: 0xac6200f4
    ctx->pc = 0x2319f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 2));
label_2319f8:
    // 0x2319f8: 0xae001a14
    ctx->pc = 0x2319f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 0));
label_2319fc:
    // 0x2319fc: 0xdfbf0050
    ctx->pc = 0x2319fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x231a00: 0xdfb00040
    ctx->pc = 0x231a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231a04: 0x3e00008
    ctx->pc = 0x231A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231A08u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2319D0u: goto label_2319d0;
            case 0x2319D4u: goto label_2319d4;
            case 0x2319F8u: goto label_2319f8;
            case 0x2319FCu: goto label_2319fc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x231A0Cu;
}
