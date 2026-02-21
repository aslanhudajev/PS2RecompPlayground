#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: ScreenSaverStartWeap
// Address: 0x22a440 - 0x22a5d8
void ScreenSaverStartWeap_0x22a440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x22a440u;

    // 0x22a440: 0x27bdffc0
    ctx->pc = 0x22a440u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22a444: 0xffbf0020
    ctx->pc = 0x22a444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22a448: 0xffb10010
    ctx->pc = 0x22a448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22a44c: 0xffb00000
    ctx->pc = 0x22a44cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x22a450: 0xe7b40030
    ctx->pc = 0x22a450u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x22a454: 0x80882d
    ctx->pc = 0x22a454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a458: 0x3c03003c
    ctx->pc = 0x22a458u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x22a45c: 0x246318c0
    ctx->pc = 0x22a45cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 6336));
    // 0x22a460: 0x24020090
    ctx->pc = 0x22a460u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
    // 0x22a464: 0x2221018
    ctx->pc = 0x22a464u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22a468: 0x431021
    ctx->pc = 0x22a468u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22a46c: 0x8c42003c
    ctx->pc = 0x22a46cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x22a470: 0x54400004
    ctx->pc = 0x22A470u;
    {
        const bool branch_taken_0x22a470 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x22a470) {
            ctx->pc = 0x22A474u;
            SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
            ctx->pc = 0x22A484u;
            goto label_22a484;
        }
    }
    ctx->pc = 0x22A478u;
    // 0x22a478: 0xc08a8ac
    ctx->pc = 0x22A478u;
    SET_GPR_U32(ctx, 31, 0x22A480u);
    ctx->pc = 0x22A2B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ScreenSaverCreateWeap_0x22a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A480u; }
    }
    if (ctx->pc != 0x22A480u) { return; }
    ctx->pc = 0x22A480u;
    // 0x22a480: 0x3c04003c
    ctx->pc = 0x22a480u;
    SET_GPR_U32(ctx, 4, ((uint32_t)60 << 16));
label_22a484:
    // 0x22a484: 0x248418c0
    ctx->pc = 0x22a484u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 6336));
    // 0x22a488: 0x24060090
    ctx->pc = 0x22a488u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 144));
    // 0x22a48c: 0x2263018
    ctx->pc = 0x22a48cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22a490: 0xc48021
    ctx->pc = 0x22a490u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x22a494: 0x3c020032
    ctx->pc = 0x22a494u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22a498: 0x24421068
    ctx->pc = 0x22a498u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4200));
    // 0x22a49c: 0x2405000c
    ctx->pc = 0x22a49cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    // 0x22a4a0: 0x2252818
    ctx->pc = 0x22a4a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x22a4a4: 0xa21821
    ctx->pc = 0x22a4a4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22a4a8: 0xc4600000
    ctx->pc = 0x22a4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a4ac: 0xe6000000
    ctx->pc = 0x22a4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x22a4b0: 0x451821
    ctx->pc = 0x22a4b0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22a4b4: 0xc4600004
    ctx->pc = 0x22a4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a4b8: 0xe6000004
    ctx->pc = 0x22a4b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x22a4bc: 0x60102d
    ctx->pc = 0x22a4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a4c0: 0xc4400008
    ctx->pc = 0x22a4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a4c4: 0xe6000008
    ctx->pc = 0x22a4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x22a4c8: 0x3c020032
    ctx->pc = 0x22a4c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22a4cc: 0x24421098
    ctx->pc = 0x22a4ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4248));
    // 0x22a4d0: 0xa21821
    ctx->pc = 0x22a4d0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22a4d4: 0xc4600000
    ctx->pc = 0x22a4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a4d8: 0xe6000010
    ctx->pc = 0x22a4d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x22a4dc: 0x451821
    ctx->pc = 0x22a4dcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22a4e0: 0xc4600004
    ctx->pc = 0x22a4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a4e4: 0xe6000014
    ctx->pc = 0x22a4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x22a4e8: 0x60102d
    ctx->pc = 0x22a4e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a4ec: 0xc4400008
    ctx->pc = 0x22a4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22a4f0: 0xe6000018
    ctx->pc = 0x22a4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x22a4f4: 0x24840010
    ctx->pc = 0x22a4f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 16));
    // 0x22a4f8: 0xc0b58a4
    ctx->pc = 0x22A4F8u;
    SET_GPR_U32(ctx, 31, 0x22A500u);
    ctx->pc = 0x22A4FCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A500u; }
    }
    if (ctx->pc != 0x22A500u) { return; }
    ctx->pc = 0x22A500u;
    // 0x22a500: 0xae000020
    ctx->pc = 0x22a500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x22a504: 0x3c013e4c
    ctx->pc = 0x22a504u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x22a508: 0x3421cccd
    ctx->pc = 0x22a508u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x22a50c: 0x44816000
    ctx->pc = 0x22a50cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22a510: 0xc0b5c06
    ctx->pc = 0x22A510u;
    SET_GPR_U32(ctx, 31, 0x22A518u);
    ctx->pc = 0x22A514u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A518u; }
    }
    if (ctx->pc != 0x22A518u) { return; }
    ctx->pc = 0x22A518u;
    // 0x22a518: 0x46000506
    ctx->pc = 0x22a518u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22a51c: 0x3c020032
    ctx->pc = 0x22a51cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22a520: 0xc0be862
    ctx->pc = 0x22A520u;
    SET_GPR_U32(ctx, 31, 0x22A528u);
    ctx->pc = 0x22A524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A528u; }
    }
    if (ctx->pc != 0x22A528u) { return; }
    ctx->pc = 0x22A528u;
    // 0x22a528: 0x40882d
    ctx->pc = 0x22a528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a52c: 0xc0be862
    ctx->pc = 0x22A52Cu;
    SET_GPR_U32(ctx, 31, 0x22A534u);
    ctx->pc = 0x22A530u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A534u; }
    }
    if (ctx->pc != 0x22A534u) { return; }
    ctx->pc = 0x22A534u;
    // 0x22a534: 0x3c01003a
    ctx->pc = 0x22a534u;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x22a538: 0xdc257028
    ctx->pc = 0x22a538u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 28712)));
    // 0x22a53c: 0xc0be340
    ctx->pc = 0x22A53Cu;
    SET_GPR_U32(ctx, 31, 0x22A544u);
    ctx->pc = 0x22A540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A544u; }
    }
    if (ctx->pc != 0x22A544u) { return; }
    ctx->pc = 0x22A544u;
    // 0x22a544: 0x220202d
    ctx->pc = 0x22a544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a548: 0xc0be370
    ctx->pc = 0x22A548u;
    SET_GPR_U32(ctx, 31, 0x22A550u);
    ctx->pc = 0x22A54Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A550u; }
    }
    if (ctx->pc != 0x22A550u) { return; }
    ctx->pc = 0x22A550u;
    // 0x22a550: 0xc0be564
    ctx->pc = 0x22A550u;
    SET_GPR_U32(ctx, 31, 0x22A558u);
    ctx->pc = 0x22A554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A558u; }
    }
    if (ctx->pc != 0x22A558u) { return; }
    ctx->pc = 0x22A558u;
    // 0x22a558: 0x3c013e4c
    ctx->pc = 0x22a558u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15948 << 16));
    // 0x22a55c: 0x3421cccd
    ctx->pc = 0x22a55cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x22a560: 0x44816000
    ctx->pc = 0x22a560u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x22a564: 0xc0b5c06
    ctx->pc = 0x22A564u;
    SET_GPR_U32(ctx, 31, 0x22A56Cu);
    ctx->pc = 0x22A568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->pc = 0x2D7018u;
    {
        const uint32_t __entryPc = ctx->pc;
        Random_0x2d7018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A56Cu; }
    }
    if (ctx->pc != 0x22A56Cu) { return; }
    ctx->pc = 0x22A56Cu;
    // 0x22a56c: 0x46000506
    ctx->pc = 0x22a56cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x22a570: 0x3c020032
    ctx->pc = 0x22a570u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x22a574: 0xc0be862
    ctx->pc = 0x22A574u;
    SET_GPR_U32(ctx, 31, 0x22A57Cu);
    ctx->pc = 0x22A578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A57Cu; }
    }
    if (ctx->pc != 0x22A57Cu) { return; }
    ctx->pc = 0x22A57Cu;
    // 0x22a57c: 0x40882d
    ctx->pc = 0x22a57cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a580: 0xc0be862
    ctx->pc = 0x22A580u;
    SET_GPR_U32(ctx, 31, 0x22A588u);
    ctx->pc = 0x22A584u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A588u; }
    }
    if (ctx->pc != 0x22A588u) { return; }
    ctx->pc = 0x22A588u;
    // 0x22a588: 0x3c01003a
    ctx->pc = 0x22a588u;
    SET_GPR_U32(ctx, 1, ((uint32_t)58 << 16));
    // 0x22a58c: 0xdc257030
    ctx->pc = 0x22a58cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 1), 28720)));
    // 0x22a590: 0xc0be340
    ctx->pc = 0x22A590u;
    SET_GPR_U32(ctx, 31, 0x22A598u);
    ctx->pc = 0x22A594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8D00u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpadd_0x2f8d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A598u; }
    }
    if (ctx->pc != 0x22A598u) { return; }
    ctx->pc = 0x22A598u;
    // 0x22a598: 0x220202d
    ctx->pc = 0x22a598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a59c: 0xc0be370
    ctx->pc = 0x22A59Cu;
    SET_GPR_U32(ctx, 31, 0x22A5A4u);
    ctx->pc = 0x22A5A0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F8DC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x2f8dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5A4u; }
    }
    if (ctx->pc != 0x22A5A4u) { return; }
    ctx->pc = 0x22A5A4u;
    // 0x22a5a4: 0xc0be564
    ctx->pc = 0x22A5A4u;
    SET_GPR_U32(ctx, 31, 0x22A5ACu);
    ctx->pc = 0x22A5A8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F9590u;
    {
        const uint32_t __entryPc = ctx->pc;
        dptofp_0x2f9590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5ACu; }
    }
    if (ctx->pc != 0x22A5ACu) { return; }
    ctx->pc = 0x22A5ACu;
    // 0x22a5ac: 0xe6000038
    ctx->pc = 0x22a5acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x22a5b0: 0xae00002c
    ctx->pc = 0x22a5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x22a5b4: 0x8e04003c
    ctx->pc = 0x22a5b4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x22a5b8: 0x24050002
    ctx->pc = 0x22a5b8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x22a5bc: 0x302d
    ctx->pc = 0x22a5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a5c0: 0xdfbf0020
    ctx->pc = 0x22a5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22a5c4: 0xdfb10010
    ctx->pc = 0x22a5c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22a5c8: 0xdfb00000
    ctx->pc = 0x22a5c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22a5cc: 0xc7b40030
    ctx->pc = 0x22a5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x22a5d0: 0x80b41e4
    ctx->pc = 0x22A5D0u;
    ctx->pc = 0x22A5D4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D0790u;
    MBTreeClearFlags_0x2d0790(rdram, ctx, runtime); return;
    ctx->pc = 0x22A5D8u;
}
