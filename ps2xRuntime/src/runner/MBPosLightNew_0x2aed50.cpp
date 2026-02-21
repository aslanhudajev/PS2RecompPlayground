#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPosLightNew
// Address: 0x2aed50 - 0x2aee5c
void MBPosLightNew_0x2aed50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2aed50u;

    // 0x2aed50: 0x27bdff90
    ctx->pc = 0x2aed50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2aed54: 0xffbf0050
    ctx->pc = 0x2aed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2aed58: 0xffb40040
    ctx->pc = 0x2aed58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2aed5c: 0xffb30030
    ctx->pc = 0x2aed5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2aed60: 0xffb20020
    ctx->pc = 0x2aed60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2aed64: 0xffb10010
    ctx->pc = 0x2aed64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2aed68: 0xffb00000
    ctx->pc = 0x2aed68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2aed6c: 0xe7b50068
    ctx->pc = 0x2aed6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2aed70: 0xe7b40060
    ctx->pc = 0x2aed70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2aed74: 0x80a02d
    ctx->pc = 0x2aed74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed78: 0xa0982d
    ctx->pc = 0x2aed78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aed7c: 0x46006506
    ctx->pc = 0x2aed7cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2aed80: 0x3c020036
    ctx->pc = 0x2aed80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2aed84: 0x8c52dee0
    ctx->pc = 0x2aed84u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2aed88: 0x8e42001c
    ctx->pc = 0x2aed88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2aed8c: 0x8c4200e4
    ctx->pc = 0x2aed8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x2aed90: 0x14400003
    ctx->pc = 0x2AED90u;
    {
        const bool branch_taken_0x2aed90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AED94u;
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x2aed90) {
            ctx->pc = 0x2AEDA0u;
            goto label_2aeda0;
        }
    }
    ctx->pc = 0x2AED98u;
    // 0x2aed98: 0xc0abb18
    ctx->pc = 0x2AED98u;
    SET_GPR_U32(ctx, 31, 0x2AEDA0u);
    ctx->pc = 0x2AED9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2AEC60u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBPosLightDelete_0x2aec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEDA0u; }
    }
    if (ctx->pc != 0x2AEDA0u) { return; }
    ctx->pc = 0x2AEDA0u;
label_2aeda0:
    // 0x2aeda0: 0x8e43001c
    ctx->pc = 0x2aeda0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2aeda4: 0x8c7000e4
    ctx->pc = 0x2aeda4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x2aeda8: 0x8e020028
    ctx->pc = 0x2aeda8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2aedac: 0xac6200e4
    ctx->pc = 0x2aedacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 228), GPR_U32(ctx, 2));
    // 0x2aedb0: 0x3c030037
    ctx->pc = 0x2aedb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)55 << 16));
    // 0x2aedb4: 0x8c628bb0
    ctx->pc = 0x2aedb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294937520)));
    // 0x2aedb8: 0x2442ffff
    ctx->pc = 0x2aedb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2aedbc: 0x14400003
    ctx->pc = 0x2AEDBCu;
    {
        const bool branch_taken_0x2aedbc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2AEDC0u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294937520), GPR_U32(ctx, 2));
        if (branch_taken_0x2aedbc) {
            ctx->pc = 0x2AEDCCu;
            goto label_2aedcc;
        }
    }
    ctx->pc = 0x2AEDC4u;
    // 0x2aedc4: 0x3402fff1
    ctx->pc = 0x2aedc4u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65521));
    // 0x2aedc8: 0xac628bb0
    ctx->pc = 0x2aedc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937520), GPR_U32(ctx, 2));
label_2aedcc:
    // 0x2aedcc: 0x2611fd40
    ctx->pc = 0x2aedccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 4294966592));
    // 0x2aedd0: 0x8e42001c
    ctx->pc = 0x2aedd0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2aedd4: 0x2228823
    ctx->pc = 0x2aedd4u;
    SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2aedd8: 0x3c03cccc
    ctx->pc = 0x2aedd8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52428 << 16));
    // 0x2aeddc: 0x3463cccd
    ctx->pc = 0x2aeddcu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x2aede0: 0x2231818
    ctx->pc = 0x2aede0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2aede4: 0x31903
    ctx->pc = 0x2aede4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2aede8: 0x3c020037
    ctx->pc = 0x2aede8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2aedec: 0x8c428bb0
    ctx->pc = 0x2aedecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937520)));
    // 0x2aedf0: 0x21400
    ctx->pc = 0x2aedf0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x2aedf4: 0x628821
    ctx->pc = 0x2aedf4u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aedf8: 0xae11002c
    ctx->pc = 0x2aedf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 17));
    // 0x2aedfc: 0x8e42001c
    ctx->pc = 0x2aedfcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2aee00: 0x8c4200e0
    ctx->pc = 0x2aee00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 224)));
    // 0x2aee04: 0xae020028
    ctx->pc = 0x2aee04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x2aee08: 0x8e42001c
    ctx->pc = 0x2aee08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2aee0c: 0xac5000e0
    ctx->pc = 0x2aee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 16));
    // 0x2aee10: 0x200202d
    ctx->pc = 0x2aee10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee14: 0xc0b958e
    ctx->pc = 0x2AEE14u;
    SET_GPR_U32(ctx, 31, 0x2AEE1Cu);
    ctx->pc = 0x2AEE18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEE1Cu; }
    }
    if (ctx->pc != 0x2AEE1Cu) { return; }
    ctx->pc = 0x2AEE1Cu;
    // 0x2aee1c: 0x26040010
    ctx->pc = 0x2aee1cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    // 0x2aee20: 0xc0b958e
    ctx->pc = 0x2AEE20u;
    SET_GPR_U32(ctx, 31, 0x2AEE28u);
    ctx->pc = 0x2AEE24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E5638u;
    {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x2e5638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AEE28u; }
    }
    if (ctx->pc != 0x2AEE28u) { return; }
    ctx->pc = 0x2AEE28u;
    // 0x2aee28: 0xe6140020
    ctx->pc = 0x2aee28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2aee2c: 0xe6150024
    ctx->pc = 0x2aee2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2aee30: 0x220102d
    ctx->pc = 0x2aee30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aee34: 0xdfbf0050
    ctx->pc = 0x2aee34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aee38: 0xdfb40040
    ctx->pc = 0x2aee38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aee3c: 0xdfb30030
    ctx->pc = 0x2aee3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aee40: 0xdfb20020
    ctx->pc = 0x2aee40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aee44: 0xdfb10010
    ctx->pc = 0x2aee44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aee48: 0xdfb00000
    ctx->pc = 0x2aee48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aee4c: 0xc7b50068
    ctx->pc = 0x2aee4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2aee50: 0xc7b40060
    ctx->pc = 0x2aee50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2aee54: 0x3e00008
    ctx->pc = 0x2AEE54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEE58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2AEDA0u: goto label_2aeda0;
            case 0x2AEDCCu: goto label_2aedcc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2AEE5Cu;
}
