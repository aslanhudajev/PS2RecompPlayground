#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: check_player_atts
// Address: 0x230050 - 0x230128
void check_player_atts_0x230050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x230050u;

    // 0x230050: 0x27bdffe0
    ctx->pc = 0x230050u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x230054: 0xffbf0010
    ctx->pc = 0x230054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x230058: 0xffb00000
    ctx->pc = 0x230058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x23005c: 0x80802d
    ctx->pc = 0x23005cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230060: 0x8e040000
    ctx->pc = 0x230060u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x230064: 0x8e05000c
    ctx->pc = 0x230064u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x230068: 0xc093692
    ctx->pc = 0x230068u;
    SET_GPR_U32(ctx, 31, 0x230070u);
    ctx->pc = 0x23006Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24DA48u;
    {
        const uint32_t __entryPc = ctx->pc;
        LoadPlyrData_0x24da48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230070u; }
    }
    if (ctx->pc != 0x230070u) { return; }
    ctx->pc = 0x230070u;
    // 0x230070: 0x8e03000c
    ctx->pc = 0x230070u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x230074: 0x24020002
    ctx->pc = 0x230074u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x230078: 0x14620006
    ctx->pc = 0x230078u;
    {
        const bool branch_taken_0x230078 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x23007Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x230078) {
            ctx->pc = 0x230094u;
            goto label_230094;
        }
    }
    ctx->pc = 0x230080u;
    // 0x230080: 0x3c020032
    ctx->pc = 0x230080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x230084: 0x8e030104
    ctx->pc = 0x230084u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x230088: 0x8c421540
    ctx->pc = 0x230088u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 5440)));
    // 0x23008c: 0x10620004
    ctx->pc = 0x23008Cu;
    {
        const bool branch_taken_0x23008c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x23008c) {
            ctx->pc = 0x2300A0u;
            goto label_2300a0;
        }
    }
    ctx->pc = 0x230094u;
label_230094:
    // 0x230094: 0x8e05000c
    ctx->pc = 0x230094u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x230098: 0xc08af08
    ctx->pc = 0x230098u;
    SET_GPR_U32(ctx, 31, 0x2300A0u);
    ctx->pc = 0x23009Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x22BC20u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerUpdateAtts_0x22bc20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300A0u; }
    }
    if (ctx->pc != 0x2300A0u) { return; }
    ctx->pc = 0x2300A0u;
label_2300a0:
    // 0x2300a0: 0xc08afec
    ctx->pc = 0x2300A0u;
    SET_GPR_U32(ctx, 31, 0x2300A8u);
    ctx->pc = 0x2300A4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x22BFB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetFight_0x22bfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300A8u; }
    }
    if (ctx->pc != 0x2300A8u) { return; }
    ctx->pc = 0x2300A8u;
    // 0x2300a8: 0xe6000118
    ctx->pc = 0x2300a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    // 0x2300ac: 0xc08aff8
    ctx->pc = 0x2300ACu;
    SET_GPR_U32(ctx, 31, 0x2300B4u);
    ctx->pc = 0x2300B0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x22BFE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetArmor_0x22bfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300B4u; }
    }
    if (ctx->pc != 0x2300B4u) { return; }
    ctx->pc = 0x2300B4u;
    // 0x2300b4: 0xe600011c
    ctx->pc = 0x2300b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 284), bits); }
    // 0x2300b8: 0xc08b004
    ctx->pc = 0x2300B8u;
    SET_GPR_U32(ctx, 31, 0x2300C0u);
    ctx->pc = 0x2300BCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x22C010u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMagic_0x22c010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300C0u; }
    }
    if (ctx->pc != 0x2300C0u) { return; }
    ctx->pc = 0x2300C0u;
    // 0x2300c0: 0xe6000120
    ctx->pc = 0x2300c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
    // 0x2300c4: 0xc08b010
    ctx->pc = 0x2300C4u;
    SET_GPR_U32(ctx, 31, 0x2300CCu);
    ctx->pc = 0x2300C8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x22C040u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetSpeed_0x22c040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300CCu; }
    }
    if (ctx->pc != 0x2300CCu) { return; }
    ctx->pc = 0x2300CCu;
    // 0x2300cc: 0xe6000124
    ctx->pc = 0x2300ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x2300d0: 0x8e030008
    ctx->pc = 0x2300d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2300d4: 0x24020002
    ctx->pc = 0x2300d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2300d8: 0x10620003
    ctx->pc = 0x2300D8u;
    {
        const bool branch_taken_0x2300d8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2300DCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 6));
        if (branch_taken_0x2300d8) {
            ctx->pc = 0x2300E8u;
            goto label_2300e8;
        }
    }
    ctx->pc = 0x2300E0u;
    // 0x2300e0: 0x14620006
    ctx->pc = 0x2300E0u;
    {
        const bool branch_taken_0x2300e0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2300e0) {
            ctx->pc = 0x2300FCu;
            goto label_2300fc;
        }
    }
    ctx->pc = 0x2300E8u;
label_2300e8:
    // 0x2300e8: 0xc08b01c
    ctx->pc = 0x2300E8u;
    SET_GPR_U32(ctx, 31, 0x2300F0u);
    ctx->pc = 0x2300ECu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x22C070u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMissileDmg_0x22c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2300F0u; }
    }
    if (ctx->pc != 0x2300F0u) { return; }
    ctx->pc = 0x2300F0u;
    // 0x2300f0: 0xe6000128
    ctx->pc = 0x2300f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x2300f4: 0x10000005
    ctx->pc = 0x2300F4u;
    {
        const bool branch_taken_0x2300f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2300F8u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        if (branch_taken_0x2300f4) {
            ctx->pc = 0x23010Cu;
            goto label_23010c;
        }
    }
    ctx->pc = 0x2300FCu;
label_2300fc:
    // 0x2300fc: 0xc08b01c
    ctx->pc = 0x2300FCu;
    SET_GPR_U32(ctx, 31, 0x230104u);
    ctx->pc = 0x230100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x22C070u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMissileDmg_0x22c070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230104u; }
    }
    if (ctx->pc != 0x230104u) { return; }
    ctx->pc = 0x230104u;
    // 0x230104: 0xe6000128
    ctx->pc = 0x230104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 296), bits); }
    // 0x230108: 0xc60c0108
    ctx->pc = 0x230108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23010c:
    // 0x23010c: 0xc08b028
    ctx->pc = 0x23010Cu;
    SET_GPR_U32(ctx, 31, 0x230114u);
    ctx->pc = 0x22C0A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetMissileSpd_0x22c0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230114u; }
    }
    if (ctx->pc != 0x230114u) { return; }
    ctx->pc = 0x230114u;
    // 0x230114: 0xe600012c
    ctx->pc = 0x230114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 300), bits); }
    // 0x230118: 0xdfbf0010
    ctx->pc = 0x230118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23011c: 0xdfb00000
    ctx->pc = 0x23011cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x230120: 0x3e00008
    ctx->pc = 0x230120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x230124u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230094u: goto label_230094;
            case 0x2300A0u: goto label_2300a0;
            case 0x2300E8u: goto label_2300e8;
            case 0x2300FCu: goto label_2300fc;
            case 0x23010Cu: goto label_23010c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x230128u;
}
