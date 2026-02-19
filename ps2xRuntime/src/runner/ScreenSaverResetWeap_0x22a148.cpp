#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScreenSaverResetWeap
// Address: 0x22a148 - 0x22a2b0
void ScreenSaverResetWeap_0x22a148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22a148u;

    // 0x22a148: 0x27bdffa0
    ctx->pc = 0x22a148u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22a14c: 0xffbf0040
    ctx->pc = 0x22a14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x22a150: 0xffb30030
    ctx->pc = 0x22a150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22a154: 0xffb20020
    ctx->pc = 0x22a154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22a158: 0xffb10010
    ctx->pc = 0x22a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a15c: 0xffb00000
    ctx->pc = 0x22a15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a160: 0xe7b40050
    ctx->pc = 0x22a160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x22a164: 0x3c12003c
    ctx->pc = 0x22a164u;
    SET_GPR_U32(ctx, 18, ((uint32_t)60 << 16));
    // 0x22a168: 0x265218c0
    ctx->pc = 0x22a168u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 6336));
    // 0x22a16c: 0x24130090
    ctx->pc = 0x22a16cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 144));
    // 0x22a170: 0x939818
    ctx->pc = 0x22a170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22a174: 0x2728021
    ctx->pc = 0x22a174u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x22a178: 0x3c020032
    ctx->pc = 0x22a178u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22a17c: 0x24421068
    ctx->pc = 0x22a17cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4200));
    // 0x22a180: 0x2403000c
    ctx->pc = 0x22a180u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 12));
    // 0x22a184: 0x832018
    ctx->pc = 0x22a184u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22a188: 0x821821
    ctx->pc = 0x22a188u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22a18c: 0xc4600000
    ctx->pc = 0x22a18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a190: 0xe6000000
    ctx->pc = 0x22a190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x22a194: 0x441821
    ctx->pc = 0x22a194u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x22a198: 0xc4600004
    ctx->pc = 0x22a198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a19c: 0xe6000004
    ctx->pc = 0x22a19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x22a1a0: 0x60102d
    ctx->pc = 0x22a1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a1a4: 0xc4400008
    ctx->pc = 0x22a1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a1a8: 0xe6000008
    ctx->pc = 0x22a1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x22a1ac: 0x3c013f80
    ctx->pc = 0x22a1acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x22a1b0: 0x44816000
    ctx->pc = 0x22a1b0u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22a1b4: 0xc0b5c06
    ctx->pc = 0x22A1B4u;
    SET_GPR_U32(ctx, 31, 0x22A1BCu);
    ctx->pc = 0x22A1B8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1BCu; }
    }
    if (ctx->pc != 0x22A1BCu) { return; }
    ctx->pc = 0x22A1BCu;
    // 0x22a1bc: 0x46000506
    ctx->pc = 0x22a1bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22a1c0: 0x3c020032
    ctx->pc = 0x22a1c0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22a1c4: 0xc0be862
    ctx->pc = 0x22A1C4u;
    SET_GPR_U32(ctx, 31, 0x22A1CCu);
    ctx->pc = 0x22A1C8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1CCu; }
    }
    if (ctx->pc != 0x22A1CCu) { return; }
    ctx->pc = 0x22A1CCu;
    // 0x22a1cc: 0x40882d
    ctx->pc = 0x22a1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a1d0: 0xc0be862
    ctx->pc = 0x22A1D0u;
    SET_GPR_U32(ctx, 31, 0x22A1D8u);
    ctx->pc = 0x22A1D4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1D8u; }
    }
    if (ctx->pc != 0x22A1D8u) { return; }
    ctx->pc = 0x22A1D8u;
    // 0x22a1d8: 0x3405ff80
    ctx->pc = 0x22a1d8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x22a1dc: 0x52bbc
    ctx->pc = 0x22a1dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x22a1e0: 0xc0be340
    ctx->pc = 0x22A1E0u;
    SET_GPR_U32(ctx, 31, 0x22A1E8u);
    ctx->pc = 0x22A1E4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1E8u; }
    }
    if (ctx->pc != 0x22A1E8u) { return; }
    ctx->pc = 0x22A1E8u;
    // 0x22a1e8: 0x220202d
    ctx->pc = 0x22a1e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a1ec: 0xc0be370
    ctx->pc = 0x22A1ECu;
    SET_GPR_U32(ctx, 31, 0x22A1F4u);
    ctx->pc = 0x22A1F0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1F4u; }
    }
    if (ctx->pc != 0x22A1F4u) { return; }
    ctx->pc = 0x22A1F4u;
    // 0x22a1f4: 0x3405809c
    ctx->pc = 0x22a1f4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32924));
    // 0x22a1f8: 0x52bfc
    ctx->pc = 0x22a1f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x22a1fc: 0xc0be370
    ctx->pc = 0x22A1FCu;
    SET_GPR_U32(ctx, 31, 0x22A204u);
    ctx->pc = 0x22A200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A204u; }
    }
    if (ctx->pc != 0x22A204u) { return; }
    ctx->pc = 0x22A204u;
    // 0x22a204: 0xc0be4fc
    ctx->pc = 0x22A204u;
    SET_GPR_U32(ctx, 31, 0x22A20Cu);
    ctx->pc = 0x22A208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F93F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x2f93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A20Cu; }
    }
    if (ctx->pc != 0x22A20Cu) { return; }
    ctx->pc = 0x22A20Cu;
    // 0x22a20c: 0x24420001
    ctx->pc = 0x22a20cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x22a210: 0x3c013f80
    ctx->pc = 0x22a210u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x22a214: 0x44816000
    ctx->pc = 0x22a214u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22a218: 0xc0b5c06
    ctx->pc = 0x22A218u;
    SET_GPR_U32(ctx, 31, 0x22A220u);
    ctx->pc = 0x22A21Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A220u; }
    }
    if (ctx->pc != 0x22A220u) { return; }
    ctx->pc = 0x22A220u;
    // 0x22a220: 0x46000506
    ctx->pc = 0x22a220u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22a224: 0x3c020032
    ctx->pc = 0x22a224u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22a228: 0xc0be862
    ctx->pc = 0x22A228u;
    SET_GPR_U32(ctx, 31, 0x22A230u);
    ctx->pc = 0x22A22Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A230u; }
    }
    if (ctx->pc != 0x22A230u) { return; }
    ctx->pc = 0x22A230u;
    // 0x22a230: 0x40882d
    ctx->pc = 0x22a230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a234: 0xc0be862
    ctx->pc = 0x22A234u;
    SET_GPR_U32(ctx, 31, 0x22A23Cu);
    ctx->pc = 0x22A238u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A23Cu; }
    }
    if (ctx->pc != 0x22A23Cu) { return; }
    ctx->pc = 0x22A23Cu;
    // 0x22a23c: 0x3405ff80
    ctx->pc = 0x22a23cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 65408));
    // 0x22a240: 0x52bbc
    ctx->pc = 0x22a240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x22a244: 0xc0be340
    ctx->pc = 0x22A244u;
    SET_GPR_U32(ctx, 31, 0x22A24Cu);
    ctx->pc = 0x22A248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A24Cu; }
    }
    if (ctx->pc != 0x22A24Cu) { return; }
    ctx->pc = 0x22A24Cu;
    // 0x22a24c: 0x220202d
    ctx->pc = 0x22a24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a250: 0xc0be370
    ctx->pc = 0x22A250u;
    SET_GPR_U32(ctx, 31, 0x22A258u);
    ctx->pc = 0x22A254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A258u; }
    }
    if (ctx->pc != 0x22A258u) { return; }
    ctx->pc = 0x22A258u;
    // 0x22a258: 0x3405809c
    ctx->pc = 0x22a258u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 0), 32924));
    // 0x22a25c: 0x52bfc
    ctx->pc = 0x22a25cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x22a260: 0xc0be370
    ctx->pc = 0x22A260u;
    SET_GPR_U32(ctx, 31, 0x22A268u);
    ctx->pc = 0x22A264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A268u; }
    }
    if (ctx->pc != 0x22A268u) { return; }
    ctx->pc = 0x22A268u;
    // 0x22a268: 0xc0be4fc
    ctx->pc = 0x22A268u;
    SET_GPR_U32(ctx, 31, 0x22A270u);
    ctx->pc = 0x22A26Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F93F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptoli_0x2f93f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A270u; }
    }
    if (ctx->pc != 0x22A270u) { return; }
    ctx->pc = 0x22A270u;
    // 0x22a270: 0xae020030
    ctx->pc = 0x22a270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x22a274: 0x26520040
    ctx->pc = 0x22a274u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 64));
    // 0x22a278: 0xc08496c
    ctx->pc = 0x22A278u;
    SET_GPR_U32(ctx, 31, 0x22A280u);
    ctx->pc = 0x22A27Cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    ctx->pc = 0x2125B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeDelete_0x2125b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A280u; }
    }
    if (ctx->pc != 0x22A280u) { return; }
    ctx->pc = 0x22A280u;
    // 0x22a280: 0x8e04003c
    ctx->pc = 0x22a280u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x22a284: 0xc0b3f1a
    ctx->pc = 0x22A284u;
    SET_GPR_U32(ctx, 31, 0x22A28Cu);
    ctx->pc = 0x22A288u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A28Cu; }
    }
    if (ctx->pc != 0x22A28Cu) { return; }
    ctx->pc = 0x22A28Cu;
    // 0x22a28c: 0xae02003c
    ctx->pc = 0x22a28cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x22a290: 0xdfbf0040
    ctx->pc = 0x22a290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22a294: 0xdfb30030
    ctx->pc = 0x22a294u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22a298: 0xdfb20020
    ctx->pc = 0x22a298u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a29c: 0xdfb10010
    ctx->pc = 0x22a29cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a2a0: 0xdfb00000
    ctx->pc = 0x22a2a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a2a4: 0xc7b40050
    ctx->pc = 0x22a2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22a2a8: 0x3e00008
    ctx->pc = 0x22A2A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A2ACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22A2B0u;
}
