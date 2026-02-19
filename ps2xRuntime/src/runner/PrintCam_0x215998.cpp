#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PrintCam
// Address: 0x215998 - 0x215ae4
void PrintCam_0x215998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x215998u;

    // 0x215998: 0x27bdffc0
    ctx->pc = 0x215998u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21599c: 0xffbf0030
    ctx->pc = 0x21599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2159a0: 0xffb20020
    ctx->pc = 0x2159a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2159a4: 0xffb10010
    ctx->pc = 0x2159a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2159a8: 0xffb00000
    ctx->pc = 0x2159a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2159ac: 0x3c020031
    ctx->pc = 0x2159acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2159b0: 0x8c42fffc
    ctx->pc = 0x2159b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x2159b4: 0x10400045
    ctx->pc = 0x2159B4u;
    {
        const bool branch_taken_0x2159b4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2159B8u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2159b4) {
            ctx->pc = 0x215ACCu;
            goto label_215acc;
        }
    }
    ctx->pc = 0x2159BCu;
    // 0x2159bc: 0xc0be862
    ctx->pc = 0x2159BCu;
    SET_GPR_U32(ctx, 31, 0x2159C4u);
    ctx->pc = 0x2159C0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159C4u; }
    }
    if (ctx->pc != 0x2159C4u) { return; }
    ctx->pc = 0x2159C4u;
    // 0x2159c4: 0x40882d
    ctx->pc = 0x2159c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159c8: 0xc0be862
    ctx->pc = 0x2159C8u;
    SET_GPR_U32(ctx, 31, 0x2159D0u);
    ctx->pc = 0x2159CCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159D0u; }
    }
    if (ctx->pc != 0x2159D0u) { return; }
    ctx->pc = 0x2159D0u;
    // 0x2159d0: 0x40802d
    ctx->pc = 0x2159d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159d4: 0xc0be862
    ctx->pc = 0x2159D4u;
    SET_GPR_U32(ctx, 31, 0x2159DCu);
    ctx->pc = 0x2159D8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159DCu; }
    }
    if (ctx->pc != 0x2159DCu) { return; }
    ctx->pc = 0x2159DCu;
    // 0x2159dc: 0x3c04003a
    ctx->pc = 0x2159dcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x2159e0: 0x24845ac8
    ctx->pc = 0x2159e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23240));
    // 0x2159e4: 0x220282d
    ctx->pc = 0x2159e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159e8: 0x200302d
    ctx->pc = 0x2159e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2159ec: 0xc0b4a34
    ctx->pc = 0x2159ECu;
    SET_GPR_U32(ctx, 31, 0x2159F4u);
    ctx->pc = 0x2159F0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159F4u; }
    }
    if (ctx->pc != 0x2159F4u) { return; }
    ctx->pc = 0x2159F4u;
    // 0x2159f4: 0xc0be862
    ctx->pc = 0x2159F4u;
    SET_GPR_U32(ctx, 31, 0x2159FCu);
    ctx->pc = 0x2159F8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2159FCu; }
    }
    if (ctx->pc != 0x2159FCu) { return; }
    ctx->pc = 0x2159FCu;
    // 0x2159fc: 0x40882d
    ctx->pc = 0x2159fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a00: 0xc0be862
    ctx->pc = 0x215A00u;
    SET_GPR_U32(ctx, 31, 0x215A08u);
    ctx->pc = 0x215A04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A08u; }
    }
    if (ctx->pc != 0x215A08u) { return; }
    ctx->pc = 0x215A08u;
    // 0x215a08: 0x40802d
    ctx->pc = 0x215a08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a0c: 0xc0be862
    ctx->pc = 0x215A0Cu;
    SET_GPR_U32(ctx, 31, 0x215A14u);
    ctx->pc = 0x215A10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A14u; }
    }
    if (ctx->pc != 0x215A14u) { return; }
    ctx->pc = 0x215A14u;
    // 0x215a14: 0x3c04003a
    ctx->pc = 0x215a14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x215a18: 0x24845ae0
    ctx->pc = 0x215a18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23264));
    // 0x215a1c: 0x220282d
    ctx->pc = 0x215a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a20: 0x200302d
    ctx->pc = 0x215a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a24: 0xc0b4a34
    ctx->pc = 0x215A24u;
    SET_GPR_U32(ctx, 31, 0x215A2Cu);
    ctx->pc = 0x215A28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A2Cu; }
    }
    if (ctx->pc != 0x215A2Cu) { return; }
    ctx->pc = 0x215A2Cu;
    // 0x215a2c: 0xc0be862
    ctx->pc = 0x215A2Cu;
    SET_GPR_U32(ctx, 31, 0x215A34u);
    ctx->pc = 0x215A30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A34u; }
    }
    if (ctx->pc != 0x215A34u) { return; }
    ctx->pc = 0x215A34u;
    // 0x215a34: 0x3c04003a
    ctx->pc = 0x215a34u;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x215a38: 0x24845af8
    ctx->pc = 0x215a38u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23288));
    // 0x215a3c: 0xc0b4a34
    ctx->pc = 0x215A3Cu;
    SET_GPR_U32(ctx, 31, 0x215A44u);
    ctx->pc = 0x215A40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A44u; }
    }
    if (ctx->pc != 0x215A44u) { return; }
    ctx->pc = 0x215A44u;
    // 0x215a44: 0xc0be862
    ctx->pc = 0x215A44u;
    SET_GPR_U32(ctx, 31, 0x215A4Cu);
    ctx->pc = 0x215A48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A4Cu; }
    }
    if (ctx->pc != 0x215A4Cu) { return; }
    ctx->pc = 0x215A4Cu;
    // 0x215a4c: 0x3c04003a
    ctx->pc = 0x215a4cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x215a50: 0x24845b08
    ctx->pc = 0x215a50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23304));
    // 0x215a54: 0xc0b4a34
    ctx->pc = 0x215A54u;
    SET_GPR_U32(ctx, 31, 0x215A5Cu);
    ctx->pc = 0x215A58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A5Cu; }
    }
    if (ctx->pc != 0x215A5Cu) { return; }
    ctx->pc = 0x215A5Cu;
    // 0x215a5c: 0xc0be862
    ctx->pc = 0x215A5Cu;
    SET_GPR_U32(ctx, 31, 0x215A64u);
    ctx->pc = 0x215A60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A64u; }
    }
    if (ctx->pc != 0x215A64u) { return; }
    ctx->pc = 0x215A64u;
    // 0x215a64: 0x40882d
    ctx->pc = 0x215a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a68: 0xc0be862
    ctx->pc = 0x215A68u;
    SET_GPR_U32(ctx, 31, 0x215A70u);
    ctx->pc = 0x215A6Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A70u; }
    }
    if (ctx->pc != 0x215A70u) { return; }
    ctx->pc = 0x215A70u;
    // 0x215a70: 0x40802d
    ctx->pc = 0x215a70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a74: 0xc0be862
    ctx->pc = 0x215A74u;
    SET_GPR_U32(ctx, 31, 0x215A7Cu);
    ctx->pc = 0x215A78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A7Cu; }
    }
    if (ctx->pc != 0x215A7Cu) { return; }
    ctx->pc = 0x215A7Cu;
    // 0x215a7c: 0x3c04003a
    ctx->pc = 0x215a7cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x215a80: 0x24845b18
    ctx->pc = 0x215a80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23320));
    // 0x215a84: 0x220282d
    ctx->pc = 0x215a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a88: 0x200302d
    ctx->pc = 0x215a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a8c: 0xc0b4a34
    ctx->pc = 0x215A8Cu;
    SET_GPR_U32(ctx, 31, 0x215A94u);
    ctx->pc = 0x215A90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A94u; }
    }
    if (ctx->pc != 0x215A94u) { return; }
    ctx->pc = 0x215A94u;
    // 0x215a94: 0xc0be862
    ctx->pc = 0x215A94u;
    SET_GPR_U32(ctx, 31, 0x215A9Cu);
    ctx->pc = 0x215A98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2FA188u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2fa188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215A9Cu; }
    }
    if (ctx->pc != 0x215A9Cu) { return; }
    ctx->pc = 0x215A9Cu;
    // 0x215a9c: 0x3c04003a
    ctx->pc = 0x215a9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x215aa0: 0x24845b38
    ctx->pc = 0x215aa0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23352));
    // 0x215aa4: 0xc0b4a34
    ctx->pc = 0x215AA4u;
    SET_GPR_U32(ctx, 31, 0x215AACu);
    ctx->pc = 0x215AA8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215AACu; }
    }
    if (ctx->pc != 0x215AACu) { return; }
    ctx->pc = 0x215AACu;
    // 0x215aac: 0x3c04003a
    ctx->pc = 0x215aacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)58 << 16));
    // 0x215ab0: 0x24845b48
    ctx->pc = 0x215ab0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 23368));
    // 0x215ab4: 0xdfbf0030
    ctx->pc = 0x215ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215ab8: 0xdfb20020
    ctx->pc = 0x215ab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215abc: 0xdfb10010
    ctx->pc = 0x215abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215ac0: 0xdfb00000
    ctx->pc = 0x215ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215ac4: 0x80b4a34
    ctx->pc = 0x215AC4u;
    ctx->pc = 0x215AC8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D28D0u;
    LogfilePrintf_0x2d28d0(rdram, ctx, runtime); return;
    ctx->pc = 0x215ACCu;
label_215acc:
    // 0x215acc: 0xdfbf0030
    ctx->pc = 0x215accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x215ad0: 0xdfb20020
    ctx->pc = 0x215ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x215ad4: 0xdfb10010
    ctx->pc = 0x215ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x215ad8: 0xdfb00000
    ctx->pc = 0x215ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x215adc: 0x3e00008
    ctx->pc = 0x215ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215AE0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215ACCu: goto label_215acc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215AE4u;
}
