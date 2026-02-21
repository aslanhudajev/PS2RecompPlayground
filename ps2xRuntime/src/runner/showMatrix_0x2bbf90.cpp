#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: showMatrix
// Address: 0x2bbf90 - 0x2bc168
void showMatrix_0x2bbf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2bbf90u;

    // 0x2bbf90: 0x27bdff60
    ctx->pc = 0x2bbf90u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2bbf94: 0xffbf0090
    ctx->pc = 0x2bbf94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2bbf98: 0xffbe0080
    ctx->pc = 0x2bbf98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x2bbf9c: 0xffb70070
    ctx->pc = 0x2bbf9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x2bbfa0: 0xffb60060
    ctx->pc = 0x2bbfa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2bbfa4: 0xffb50050
    ctx->pc = 0x2bbfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2bbfa8: 0xffb40040
    ctx->pc = 0x2bbfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2bbfac: 0xffb30030
    ctx->pc = 0x2bbfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2bbfb0: 0xffb20020
    ctx->pc = 0x2bbfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2bbfb4: 0xffb10010
    ctx->pc = 0x2bbfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bbfb8: 0xffb00000
    ctx->pc = 0x2bbfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbfbc: 0x80902d
    ctx->pc = 0x2bbfbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbfc0: 0xc0802d
    ctx->pc = 0x2bbfc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbfc4: 0x3c020037
    ctx->pc = 0x2bbfc4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2bbfc8: 0x8c4220ac
    ctx->pc = 0x2bbfc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 8364)));
    // 0x2bbfcc: 0x8c5e0044
    ctx->pc = 0x2bbfccu;
    SET_GPR_U32(ctx, 30, READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2bbfd0: 0xc0be862
    ctx->pc = 0x2BBFD0u;
    SET_GPR_U32(ctx, 31, 0x2BBFD8u);
    ctx->pc = 0x2BBFD4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBFD8u; }
    }
    if (ctx->pc != 0x2BBFD8u) { return; }
    ctx->pc = 0x2BBFD8u;
    // 0x2bbfd8: 0x40a02d
    ctx->pc = 0x2bbfd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbfdc: 0xc0be862
    ctx->pc = 0x2BBFDCu;
    SET_GPR_U32(ctx, 31, 0x2BBFE4u);
    ctx->pc = 0x2BBFE0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBFE4u; }
    }
    if (ctx->pc != 0x2BBFE4u) { return; }
    ctx->pc = 0x2BBFE4u;
    // 0x2bbfe4: 0x40982d
    ctx->pc = 0x2bbfe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbfe8: 0xc0be862
    ctx->pc = 0x2BBFE8u;
    SET_GPR_U32(ctx, 31, 0x2BBFF0u);
    ctx->pc = 0x2BBFECu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBFF0u; }
    }
    if (ctx->pc != 0x2BBFF0u) { return; }
    ctx->pc = 0x2BBFF0u;
    // 0x2bbff0: 0x40882d
    ctx->pc = 0x2bbff0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbff4: 0xc0be862
    ctx->pc = 0x2BBFF4u;
    SET_GPR_U32(ctx, 31, 0x2BBFFCu);
    ctx->pc = 0x2BBFF8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBFFCu; }
    }
    if (ctx->pc != 0x2BBFFCu) { return; }
    ctx->pc = 0x2BBFFCu;
    // 0x2bbffc: 0x240202d
    ctx->pc = 0x2bbffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc000: 0x3c17003b
    ctx->pc = 0x2bc000u;
    SET_GPR_U32(ctx, 23, ((uint32_t)59 << 16));
    // 0x2bc004: 0x26e56118
    ctx->pc = 0x2bc004u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 24856));
    // 0x2bc008: 0x280302d
    ctx->pc = 0x2bc008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc00c: 0x260382d
    ctx->pc = 0x2bc00cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc010: 0x220402d
    ctx->pc = 0x2bc010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc014: 0xc0aeed2
    ctx->pc = 0x2BC014u;
    SET_GPR_U32(ctx, 31, 0x2BC01Cu);
    ctx->pc = 0x2BC018u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC01Cu; }
    }
    if (ctx->pc != 0x2BC01Cu) { return; }
    ctx->pc = 0x2BC01Cu;
    // 0x2bc01c: 0x240202d
    ctx->pc = 0x2bc01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc020: 0x3c16003b
    ctx->pc = 0x2bc020u;
    SET_GPR_U32(ctx, 22, ((uint32_t)59 << 16));
    // 0x2bc024: 0x26c56140
    ctx->pc = 0x2bc024u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 24896));
    // 0x2bc028: 0x3c0302d
    ctx->pc = 0x2bc028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc02c: 0x3c15003b
    ctx->pc = 0x2bc02cu;
    SET_GPR_U32(ctx, 21, ((uint32_t)59 << 16));
    // 0x2bc030: 0xc0aeed2
    ctx->pc = 0x2BC030u;
    SET_GPR_U32(ctx, 31, 0x2BC038u);
    ctx->pc = 0x2BC034u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 21), 392));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC038u; }
    }
    if (ctx->pc != 0x2BC038u) { return; }
    ctx->pc = 0x2BC038u;
    // 0x2bc038: 0xc0be862
    ctx->pc = 0x2BC038u;
    SET_GPR_U32(ctx, 31, 0x2BC040u);
    ctx->pc = 0x2BC03Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC040u; }
    }
    if (ctx->pc != 0x2BC040u) { return; }
    ctx->pc = 0x2BC040u;
    // 0x2bc040: 0x40a02d
    ctx->pc = 0x2bc040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc044: 0xc0be862
    ctx->pc = 0x2BC044u;
    SET_GPR_U32(ctx, 31, 0x2BC04Cu);
    ctx->pc = 0x2BC048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC04Cu; }
    }
    if (ctx->pc != 0x2BC04Cu) { return; }
    ctx->pc = 0x2BC04Cu;
    // 0x2bc04c: 0x40982d
    ctx->pc = 0x2bc04cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc050: 0xc0be862
    ctx->pc = 0x2BC050u;
    SET_GPR_U32(ctx, 31, 0x2BC058u);
    ctx->pc = 0x2BC054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC058u; }
    }
    if (ctx->pc != 0x2BC058u) { return; }
    ctx->pc = 0x2BC058u;
    // 0x2bc058: 0x40882d
    ctx->pc = 0x2bc058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc05c: 0xc0be862
    ctx->pc = 0x2BC05Cu;
    SET_GPR_U32(ctx, 31, 0x2BC064u);
    ctx->pc = 0x2BC060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC064u; }
    }
    if (ctx->pc != 0x2BC064u) { return; }
    ctx->pc = 0x2BC064u;
    // 0x2bc064: 0x240202d
    ctx->pc = 0x2bc064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc068: 0x26e56118
    ctx->pc = 0x2bc068u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 24856));
    // 0x2bc06c: 0x280302d
    ctx->pc = 0x2bc06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc070: 0x260382d
    ctx->pc = 0x2bc070u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc074: 0x220402d
    ctx->pc = 0x2bc074u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc078: 0xc0aeed2
    ctx->pc = 0x2BC078u;
    SET_GPR_U32(ctx, 31, 0x2BC080u);
    ctx->pc = 0x2BC07Cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC080u; }
    }
    if (ctx->pc != 0x2BC080u) { return; }
    ctx->pc = 0x2BC080u;
    // 0x2bc080: 0x240202d
    ctx->pc = 0x2bc080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc084: 0x26c56140
    ctx->pc = 0x2bc084u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 24896));
    // 0x2bc088: 0x3c0302d
    ctx->pc = 0x2bc088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc08c: 0xc0aeed2
    ctx->pc = 0x2BC08Cu;
    SET_GPR_U32(ctx, 31, 0x2BC094u);
    ctx->pc = 0x2BC090u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 21), 392));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC094u; }
    }
    if (ctx->pc != 0x2BC094u) { return; }
    ctx->pc = 0x2BC094u;
    // 0x2bc094: 0xc0be862
    ctx->pc = 0x2BC094u;
    SET_GPR_U32(ctx, 31, 0x2BC09Cu);
    ctx->pc = 0x2BC098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC09Cu; }
    }
    if (ctx->pc != 0x2BC09Cu) { return; }
    ctx->pc = 0x2BC09Cu;
    // 0x2bc09c: 0x40a02d
    ctx->pc = 0x2bc09cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0a0: 0xc0be862
    ctx->pc = 0x2BC0A0u;
    SET_GPR_U32(ctx, 31, 0x2BC0A8u);
    ctx->pc = 0x2BC0A4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC0A8u; }
    }
    if (ctx->pc != 0x2BC0A8u) { return; }
    ctx->pc = 0x2BC0A8u;
    // 0x2bc0a8: 0x40982d
    ctx->pc = 0x2bc0a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0ac: 0xc0be862
    ctx->pc = 0x2BC0ACu;
    SET_GPR_U32(ctx, 31, 0x2BC0B4u);
    ctx->pc = 0x2BC0B0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC0B4u; }
    }
    if (ctx->pc != 0x2BC0B4u) { return; }
    ctx->pc = 0x2BC0B4u;
    // 0x2bc0b4: 0x40882d
    ctx->pc = 0x2bc0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0b8: 0xc0be862
    ctx->pc = 0x2BC0B8u;
    SET_GPR_U32(ctx, 31, 0x2BC0C0u);
    ctx->pc = 0x2BC0BCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC0C0u; }
    }
    if (ctx->pc != 0x2BC0C0u) { return; }
    ctx->pc = 0x2BC0C0u;
    // 0x2bc0c0: 0x240202d
    ctx->pc = 0x2bc0c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0c4: 0x26e56118
    ctx->pc = 0x2bc0c4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 23), 24856));
    // 0x2bc0c8: 0x280302d
    ctx->pc = 0x2bc0c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0cc: 0x260382d
    ctx->pc = 0x2bc0ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0d0: 0x220402d
    ctx->pc = 0x2bc0d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0d4: 0xc0aeed2
    ctx->pc = 0x2BC0D4u;
    SET_GPR_U32(ctx, 31, 0x2BC0DCu);
    ctx->pc = 0x2BC0D8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC0DCu; }
    }
    if (ctx->pc != 0x2BC0DCu) { return; }
    ctx->pc = 0x2BC0DCu;
    // 0x2bc0dc: 0x240202d
    ctx->pc = 0x2bc0dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0e0: 0x26c56140
    ctx->pc = 0x2bc0e0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 24896));
    // 0x2bc0e4: 0x3c0302d
    ctx->pc = 0x2bc0e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0e8: 0xc0aeed2
    ctx->pc = 0x2BC0E8u;
    SET_GPR_U32(ctx, 31, 0x2BC0F0u);
    ctx->pc = 0x2BC0ECu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 21), 392));
    ctx->pc = 0x2BBB48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbVuMsgf_0x2bbb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC0F0u; }
    }
    if (ctx->pc != 0x2BC0F0u) { return; }
    ctx->pc = 0x2BC0F0u;
    // 0x2bc0f0: 0xc0be862
    ctx->pc = 0x2BC0F0u;
    SET_GPR_U32(ctx, 31, 0x2BC0F8u);
    ctx->pc = 0x2BC0F4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC0F8u; }
    }
    if (ctx->pc != 0x2BC0F8u) { return; }
    ctx->pc = 0x2BC0F8u;
    // 0x2bc0f8: 0x40a02d
    ctx->pc = 0x2bc0f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc0fc: 0xc0be862
    ctx->pc = 0x2BC0FCu;
    SET_GPR_U32(ctx, 31, 0x2BC104u);
    ctx->pc = 0x2BC100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC104u; }
    }
    if (ctx->pc != 0x2BC104u) { return; }
    ctx->pc = 0x2BC104u;
    // 0x2bc104: 0x40982d
    ctx->pc = 0x2bc104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc108: 0xc0be862
    ctx->pc = 0x2BC108u;
    SET_GPR_U32(ctx, 31, 0x2BC110u);
    ctx->pc = 0x2BC10Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC110u; }
    }
    if (ctx->pc != 0x2BC110u) { return; }
    ctx->pc = 0x2BC110u;
    // 0x2bc110: 0x40882d
    ctx->pc = 0x2bc110u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc114: 0xc0be862
    ctx->pc = 0x2BC114u;
    SET_GPR_U32(ctx, 31, 0x2BC11Cu);
    ctx->pc = 0x2BC118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BC11Cu; }
    }
    if (ctx->pc != 0x2BC11Cu) { return; }
    ctx->pc = 0x2BC11Cu;
    // 0x2bc11c: 0x240202d
    ctx->pc = 0x2bc11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc120: 0x3c05003b
    ctx->pc = 0x2bc120u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x2bc124: 0x24a56148
    ctx->pc = 0x2bc124u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 24904));
    // 0x2bc128: 0x280302d
    ctx->pc = 0x2bc128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc12c: 0x260382d
    ctx->pc = 0x2bc12cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc130: 0x220402d
    ctx->pc = 0x2bc130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc134: 0x40482d
    ctx->pc = 0x2bc134u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc138: 0xdfbf0090
    ctx->pc = 0x2bc138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bc13c: 0xdfbe0080
    ctx->pc = 0x2bc13cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bc140: 0xdfb70070
    ctx->pc = 0x2bc140u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bc144: 0xdfb60060
    ctx->pc = 0x2bc144u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2bc148: 0xdfb50050
    ctx->pc = 0x2bc148u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2bc14c: 0xdfb40040
    ctx->pc = 0x2bc14cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc150: 0xdfb30030
    ctx->pc = 0x2bc150u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2bc154: 0xdfb20020
    ctx->pc = 0x2bc154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bc158: 0xdfb10010
    ctx->pc = 0x2bc158u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc15c: 0xdfb00000
    ctx->pc = 0x2bc15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc160: 0x80aeed2
    ctx->pc = 0x2BC160u;
    ctx->pc = 0x2BC164u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
    ctx->pc = 0x2BBB48u;
    pbVuMsgf_0x2bbb48(rdram, ctx, runtime); return;
    ctx->pc = 0x2BC168u;
}
