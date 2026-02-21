#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: update_chinfo
// Address: 0x21ff58 - 0x220048
void update_chinfo_0x21ff58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x21ff58u;

    // 0x21ff58: 0x27bdffa0
    ctx->pc = 0x21ff58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21ff5c: 0xffbf0050
    ctx->pc = 0x21ff5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21ff60: 0xffb40040
    ctx->pc = 0x21ff60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x21ff64: 0xffb30030
    ctx->pc = 0x21ff64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x21ff68: 0xffb20020
    ctx->pc = 0x21ff68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21ff6c: 0xffb10010
    ctx->pc = 0x21ff6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x21ff70: 0xffb00000
    ctx->pc = 0x21ff70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ff74: 0xa0882d
    ctx->pc = 0x21ff74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff78: 0xc0902d
    ctx->pc = 0x21ff78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff7c: 0xe0982d
    ctx->pc = 0x21ff7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff80: 0x4800029
    ctx->pc = 0x21FF80u;
    {
        const bool branch_taken_0x21ff80 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x21FF84u;
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x21ff80) {
            ctx->pc = 0x220028u;
            goto label_220028;
        }
    }
    ctx->pc = 0x21FF88u;
    // 0x21ff88: 0x41940
    ctx->pc = 0x21ff88u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 4), 5));
    // 0x21ff8c: 0x3c02003c
    ctx->pc = 0x21ff8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x21ff90: 0x2442d630
    ctx->pc = 0x21ff90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294956592));
    // 0x21ff94: 0x628021
    ctx->pc = 0x21ff94u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21ff98: 0xc087fca
    ctx->pc = 0x21FF98u;
    SET_GPR_U32(ctx, 31, 0x21FFA0u);
    ctx->pc = 0x21FF9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x21FF28u;
    {
        const uint32_t __entryPc = ctx->pc;
        audnum_to_index_0x21ff28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFA0u; }
    }
    if (ctx->pc != 0x21FFA0u) { return; }
    ctx->pc = 0x21FFA0u;
    // 0x21ffa0: 0xae020000
    ctx->pc = 0x21ffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x21ffa4: 0xae020004
    ctx->pc = 0x21ffa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x21ffa8: 0xae110008
    ctx->pc = 0x21ffa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x21ffac: 0x3c03003a
    ctx->pc = 0x21ffacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x21ffb0: 0x8c6322f8
    ctx->pc = 0x21ffb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 8952)));
    // 0x21ffb4: 0xae03000c
    ctx->pc = 0x21ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x21ffb8: 0xae120010
    ctx->pc = 0x21ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x21ffbc: 0xae130014
    ctx->pc = 0x21ffbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 19));
    // 0x21ffc0: 0xae140018
    ctx->pc = 0x21ffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 20));
    // 0x21ffc4: 0x3c030032
    ctx->pc = 0x21ffc4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x21ffc8: 0x8c63fd6c
    ctx->pc = 0x21ffc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294966636)));
    // 0x21ffcc: 0x8c640014
    ctx->pc = 0x21ffccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x21ffd0: 0x2403001c
    ctx->pc = 0x21ffd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 28));
    // 0x21ffd4: 0x431018
    ctx->pc = 0x21ffd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x21ffd8: 0x441021
    ctx->pc = 0x21ffd8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21ffdc: 0xc4410014
    ctx->pc = 0x21ffdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ffe0: 0x44800000
    ctx->pc = 0x21ffe0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21ffe4: 0x46010034
    ctx->pc = 0x21ffe4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ffe8: 0x0
    ctx->pc = 0x21ffe8u;
    // NOP
    // 0x21ffec: 0x4500000b
    ctx->pc = 0x21FFECu;
    {
        const bool branch_taken_0x21ffec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21FFF0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x21ffec) {
            ctx->pc = 0x22001Cu;
            goto label_22001c;
        }
    }
    ctx->pc = 0x21FFF4u;
    // 0x21fff4: 0x3c014270
    ctx->pc = 0x21fff4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17008 << 16));
    // 0x21fff8: 0x44810000
    ctx->pc = 0x21fff8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x21fffc: 0x46000802
    ctx->pc = 0x21fffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x220000: 0xc601000c
    ctx->pc = 0x220000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220004: 0x46800860
    ctx->pc = 0x220004u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x220008: 0x46010000
    ctx->pc = 0x220008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x22000c: 0x46000064
    ctx->pc = 0x22000cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x220010: 0xe601001c
    ctx->pc = 0x220010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x220014: 0x10000006
    ctx->pc = 0x220014u;
    {
        const bool branch_taken_0x220014 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x220018u;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x220014) {
            ctx->pc = 0x220030u;
            goto label_220030;
        }
    }
    ctx->pc = 0x22001Cu;
label_22001c:
    // 0x22001c: 0x2402ffff
    ctx->pc = 0x22001cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x220020: 0xae02001c
    ctx->pc = 0x220020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x220024: 0x0
    ctx->pc = 0x220024u;
    // NOP
label_220028:
    // 0x220028: 0xdfbf0050
    ctx->pc = 0x220028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22002c: 0xdfb40040
    ctx->pc = 0x22002cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_220030:
    // 0x220030: 0xdfb30030
    ctx->pc = 0x220030u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x220034: 0xdfb20020
    ctx->pc = 0x220034u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220038: 0xdfb10010
    ctx->pc = 0x220038u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22003c: 0xdfb00000
    ctx->pc = 0x22003cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220040: 0x3e00008
    ctx->pc = 0x220040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220044u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22001Cu: goto label_22001c;
            case 0x220028u: goto label_220028;
            case 0x220030u: goto label_220030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220048u;
}
