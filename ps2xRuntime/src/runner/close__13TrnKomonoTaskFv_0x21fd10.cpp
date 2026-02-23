#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: close__13TrnKomonoTaskFv
// Address: 0x21fd10 - 0x220018
void close__13TrnKomonoTaskFv_0x21fd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("close__13TrnKomonoTaskFv");


    ctx->pc = 0x21fd10u;

    // 0x21fd10: 0x27bdfba0
    ctx->pc = 0x21fd10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966176));
    // 0x21fd14: 0x7fbf0020
    ctx->pc = 0x21fd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x21fd18: 0x7fb10010
    ctx->pc = 0x21fd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21fd1c: 0x7fb00000
    ctx->pc = 0x21fd1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21fd20: 0xa3a00030
    ctx->pc = 0x21fd20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x21fd24: 0x24020005
    ctx->pc = 0x21fd24u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 5));
    // 0x21fd28: 0xa3a20031
    ctx->pc = 0x21fd28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x21fd2c: 0xa7a00032
    ctx->pc = 0x21fd2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 50), (uint16_t)GPR_U32(ctx, 0));
    // 0x21fd30: 0x84830054
    ctx->pc = 0x21fd30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x21fd34: 0x3c02002c
    ctx->pc = 0x21fd34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)44 << 16));
    // 0x21fd38: 0x24500d80
    ctx->pc = 0x21fd38u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 3456));
    // 0x21fd3c: 0x2405002b
    ctx->pc = 0x21fd3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 43));
    // 0x21fd40: 0x70a01628
    ctx->pc = 0x21fd40u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x21fd44: 0x70808e28
    ctx->pc = 0x21fd44u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21fd48: 0xa7a30034
    ctx->pc = 0x21fd48u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x21fd4c: 0xa7a00036
    ctx->pc = 0x21fd4cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 54), (uint16_t)GPR_U32(ctx, 0));
    // 0x21fd50: 0xc480002c
    ctx->pc = 0x21fd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fd54: 0x24a5ffff
    ctx->pc = 0x21fd54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x21fd58: 0xe7a00038
    ctx->pc = 0x21fd58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x21fd5c: 0xc4800030
    ctx->pc = 0x21fd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fd60: 0xe7a0003c
    ctx->pc = 0x21fd60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x21fd64: 0xc4800034
    ctx->pc = 0x21fd64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fd68: 0xe7a00040
    ctx->pc = 0x21fd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21fd6c: 0xc480002c
    ctx->pc = 0x21fd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fd70: 0xe7a00440
    ctx->pc = 0x21fd70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1088), bits); }
    // 0x21fd74: 0xc4800030
    ctx->pc = 0x21fd74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fd78: 0xe7a00444
    ctx->pc = 0x21fd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1092), bits); }
    // 0x21fd7c: 0xc4800034
    ctx->pc = 0x21fd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21fd80: 0xe7a00448
    ctx->pc = 0x21fd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1096), bits); }
    // 0x21fd84: 0x8c830050
    ctx->pc = 0x21fd84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x21fd88: 0xafa3044c
    ctx->pc = 0x21fd88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1100), GPR_U32(ctx, 3));
    // 0x21fd8c: 0x8c830054
    ctx->pc = 0x21fd8cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x21fd90: 0xafa30450
    ctx->pc = 0x21fd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 3));
    // 0x21fd94: 0x8c830058
    ctx->pc = 0x21fd94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x21fd98: 0x1040005d
    ctx->pc = 0x21FD98u;
    {
        const bool branch_taken_0x21fd98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FD9Cu;
        WRITE32(ADD32(GPR_U32(ctx, 29), 1108), GPR_U32(ctx, 3));
        if (branch_taken_0x21fd98) {
            ctx->pc = 0x21FF10u;
            goto label_21ff10;
        }
    }
    ctx->pc = 0x21FDA0u;
    // 0x21fda0: 0x8e23016c
    ctx->pc = 0x21fda0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x21fda4: 0x0
    ctx->pc = 0x21fda4u;
    // NOP
label_21fda8:
    // 0x21fda8: 0x8e020000
    ctx->pc = 0x21fda8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21fdac: 0x14620055
    ctx->pc = 0x21FDACu;
    {
        const bool branch_taken_0x21fdac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x21FDB0u;
        SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21fdac) {
            ctx->pc = 0x21FF04u;
            goto label_21ff04;
        }
    }
    ctx->pc = 0x21FDB4u;
    // 0x21fdb4: 0x86020004
    ctx->pc = 0x21fdb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21fdb8: 0x10400018
    ctx->pc = 0x21FDB8u;
    {
        const bool branch_taken_0x21fdb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FDBCu;
        SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
        if (branch_taken_0x21fdb8) {
            ctx->pc = 0x21FE1Cu;
            goto label_21fe1c;
        }
    }
    ctx->pc = 0x21FDC0u;
    // 0x21fdc0: 0x86020006
    ctx->pc = 0x21fdc0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x21fdc4: 0x27a40030
    ctx->pc = 0x21fdc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 48));
    // 0x21fdc8: 0xc078504
    ctx->pc = 0x21FDC8u;
    SET_GPR_U32(ctx, 31, 0x21FDD0u);
    ctx->pc = 0x21FDCCu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    ctx->pc = 0x1E1410u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_DynamicsTask__FP11ENEMY_TABLE_0x1e1410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FDD0u; }
        else if (ctx->pc != 0x21FDD0u) { ctx->pc = 0x21FDD0u; }
    }
    if (ctx->pc != 0x21FDD0u) { return; }
    ctx->pc = 0x21FDD0u;
    // 0x21fdd0: 0x86020008
    ctx->pc = 0x21fdd0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x21fdd4: 0x10400006
    ctx->pc = 0x21FDD4u;
    {
        const bool branch_taken_0x21fdd4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21fdd4) {
            ctx->pc = 0x21FDF0u;
            goto label_21fdf0;
        }
    }
    ctx->pc = 0x21FDDCu;
    // 0x21fddc: 0xc60c000c
    ctx->pc = 0x21fddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21fde0: 0x2243c
    ctx->pc = 0x21fde0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x21fde4: 0x4243f
    ctx->pc = 0x21fde4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x21fde8: 0xc0785e0
    ctx->pc = 0x21FDE8u;
    SET_GPR_U32(ctx, 31, 0x21FDF0u);
    ctx->pc = 0x21FDECu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 1088));
    ctx->pc = 0x1E1780u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__Fi4ANPOf_0x1e1780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FDF0u; }
        else if (ctx->pc != 0x21FDF0u) { ctx->pc = 0x21FDF0u; }
    }
    if (ctx->pc != 0x21FDF0u) { return; }
    ctx->pc = 0x21FDF0u;
label_21fdf0:
    // 0x21fdf0: 0x8e050010
    ctx->pc = 0x21fdf0u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21fdf4: 0x2402ffff
    ctx->pc = 0x21fdf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21fdf8: 0x10a20045
    ctx->pc = 0x21FDF8u;
    {
        const bool branch_taken_0x21fdf8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x21FDFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x21fdf8) {
            ctx->pc = 0x21FF10u;
            goto label_21ff10;
        }
    }
    ctx->pc = 0x21FE00u;
    // 0x21fe00: 0x244434f0
    ctx->pc = 0x21fe00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x21fe04: 0x70003628
    ctx->pc = 0x21fe04u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21fe08: 0x70003e28
    ctx->pc = 0x21fe08u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21fe0c: 0xc086018
    ctx->pc = 0x21FE0Cu;
    SET_GPR_U32(ctx, 31, 0x21FE14u);
    ctx->pc = 0x21FE10u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE14u; }
        else if (ctx->pc != 0x21FE14u) { ctx->pc = 0x21FE14u; }
    }
    if (ctx->pc != 0x21FE14u) { return; }
    ctx->pc = 0x21FE14u;
    // 0x21fe14: 0x1000003f
    ctx->pc = 0x21FE14u;
    {
        const bool branch_taken_0x21fe14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FE18u;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 364)));
        if (branch_taken_0x21fe14) {
            ctx->pc = 0x21FF14u;
            goto label_21ff14;
        }
    }
    ctx->pc = 0x21FE1Cu;
label_21fe1c:
    // 0x21fe1c: 0x8423e504
    ctx->pc = 0x21fe1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x21fe20: 0x2402000a
    ctx->pc = 0x21fe20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x21fe24: 0x14620018
    ctx->pc = 0x21FE24u;
    {
        const bool branch_taken_0x21fe24 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x21fe24) {
            ctx->pc = 0x21FE88u;
            goto label_21fe88;
        }
    }
    ctx->pc = 0x21FE2Cu;
    // 0x21fe2c: 0x8f838bcc
    ctx->pc = 0x21fe2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937548)));
    // 0x21fe30: 0x24020002
    ctx->pc = 0x21fe30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x21fe34: 0x14620014
    ctx->pc = 0x21FE34u;
    {
        const bool branch_taken_0x21fe34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x21fe34) {
            ctx->pc = 0x21FE88u;
            goto label_21fe88;
        }
    }
    ctx->pc = 0x21FE3Cu;
    // 0x21fe3c: 0x8f888ccc
    ctx->pc = 0x21fe3cu;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
    // 0x21fe40: 0x11000003
    ctx->pc = 0x21FE40u;
    {
        const bool branch_taken_0x21fe40 = (GPR_U32(ctx, 8) == GPR_U32(ctx, 0));
        if (branch_taken_0x21fe40) {
            ctx->pc = 0x21FE50u;
            goto label_21fe50;
        }
    }
    ctx->pc = 0x21FE48u;
    // 0x21fe48: 0x8d080000
    ctx->pc = 0x21fe48u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x21fe4c: 0x0
    ctx->pc = 0x21fe4cu;
    // NOP
label_21fe50:
    // 0x21fe50: 0x8e220168
    ctx->pc = 0x21fe50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x21fe54: 0x2404008c
    ctx->pc = 0x21fe54u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 140));
    // 0x21fe58: 0x8c460010
    ctx->pc = 0x21fe58u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21fe5c: 0x8cc70014
    ctx->pc = 0x21fe5cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x21fe60: 0xc069040
    ctx->pc = 0x21FE60u;
    SET_GPR_U32(ctx, 31, 0x21FE68u);
    ctx->pc = 0x21FE64u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE68u; }
        else if (ctx->pc != 0x21FE68u) { ctx->pc = 0x21FE68u; }
    }
    if (ctx->pc != 0x21FE68u) { return; }
    ctx->pc = 0x21FE68u;
    // 0x21fe68: 0x10400013
    ctx->pc = 0x21FE68u;
    {
        const bool branch_taken_0x21fe68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21fe68) {
            ctx->pc = 0x21FEB8u;
            goto label_21feb8;
        }
    }
    ctx->pc = 0x21FE70u;
    // 0x21fe70: 0x8e050000
    ctx->pc = 0x21fe70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21fe74: 0x70402628
    ctx->pc = 0x21fe74u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21fe78: 0xc0872c0
    ctx->pc = 0x21FE78u;
    SET_GPR_U32(ctx, 31, 0x21FE80u);
    ctx->pc = 0x21FE7Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 1088));
    ctx->pc = 0x21CB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__23KomonoTrnDishKowareTaskFi4ANPO_0x21cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FE80u; }
        else if (ctx->pc != 0x21FE80u) { ctx->pc = 0x21FE80u; }
    }
    if (ctx->pc != 0x21FE80u) { return; }
    ctx->pc = 0x21FE80u;
    // 0x21fe80: 0x1000000e
    ctx->pc = 0x21FE80u;
    {
        const bool branch_taken_0x21fe80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21FE84u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
        if (branch_taken_0x21fe80) {
            ctx->pc = 0x21FEBCu;
            goto label_21febc;
        }
    }
    ctx->pc = 0x21FE88u;
label_21fe88:
    // 0x21fe88: 0x8e280168
    ctx->pc = 0x21fe88u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 17), 360)));
    // 0x21fe8c: 0x2404008c
    ctx->pc = 0x21fe8cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 140));
    // 0x21fe90: 0x8d060010
    ctx->pc = 0x21fe90u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x21fe94: 0x8cc70014
    ctx->pc = 0x21fe94u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x21fe98: 0xc069040
    ctx->pc = 0x21FE98u;
    SET_GPR_U32(ctx, 31, 0x21FEA0u);
    ctx->pc = 0x21FE9Cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4100u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__10SystemTaskFUiPvP11SYSTEM_TASKP11SYSTEM_TASKP11SYSTEM_TASK_0x1a4100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FEA0u; }
        else if (ctx->pc != 0x21FEA0u) { ctx->pc = 0x21FEA0u; }
    }
    if (ctx->pc != 0x21FEA0u) { return; }
    ctx->pc = 0x21FEA0u;
    // 0x21fea0: 0x10400005
    ctx->pc = 0x21FEA0u;
    {
        const bool branch_taken_0x21fea0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21fea0) {
            ctx->pc = 0x21FEB8u;
            goto label_21feb8;
        }
    }
    ctx->pc = 0x21FEA8u;
    // 0x21fea8: 0x8e050000
    ctx->pc = 0x21fea8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21feac: 0x70402628
    ctx->pc = 0x21feacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21feb0: 0xc0872c0
    ctx->pc = 0x21FEB0u;
    SET_GPR_U32(ctx, 31, 0x21FEB8u);
    ctx->pc = 0x21FEB4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 1088));
    ctx->pc = 0x21CB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__23KomonoTrnDishKowareTaskFi4ANPO_0x21cb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FEB8u; }
        else if (ctx->pc != 0x21FEB8u) { ctx->pc = 0x21FEB8u; }
    }
    if (ctx->pc != 0x21FEB8u) { return; }
    ctx->pc = 0x21FEB8u;
label_21feb8:
    // 0x21feb8: 0x86020008
    ctx->pc = 0x21feb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_21febc:
    // 0x21febc: 0x10400006
    ctx->pc = 0x21FEBCu;
    {
        const bool branch_taken_0x21febc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x21febc) {
            ctx->pc = 0x21FED8u;
            goto label_21fed8;
        }
    }
    ctx->pc = 0x21FEC4u;
    // 0x21fec4: 0xc60c000c
    ctx->pc = 0x21fec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21fec8: 0x2243c
    ctx->pc = 0x21fec8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 16));
    // 0x21fecc: 0x4243f
    ctx->pc = 0x21feccu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x21fed0: 0xc0785e0
    ctx->pc = 0x21FED0u;
    SET_GPR_U32(ctx, 31, 0x21FED8u);
    ctx->pc = 0x21FED4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 1088));
    ctx->pc = 0x1E1780u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__Fi4ANPOf_0x1e1780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FED8u; }
        else if (ctx->pc != 0x21FED8u) { ctx->pc = 0x21FED8u; }
    }
    if (ctx->pc != 0x21FED8u) { return; }
    ctx->pc = 0x21FED8u;
label_21fed8:
    // 0x21fed8: 0x8e050010
    ctx->pc = 0x21fed8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21fedc: 0x2402ffff
    ctx->pc = 0x21fedcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21fee0: 0x10a2000b
    ctx->pc = 0x21FEE0u;
    {
        const bool branch_taken_0x21fee0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x21FEE4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x21fee0) {
            ctx->pc = 0x21FF10u;
            goto label_21ff10;
        }
    }
    ctx->pc = 0x21FEE8u;
    // 0x21fee8: 0x244434f0
    ctx->pc = 0x21fee8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x21feec: 0x70003628
    ctx->pc = 0x21feecu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21fef0: 0x70003e28
    ctx->pc = 0x21fef0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21fef4: 0xc086018
    ctx->pc = 0x21FEF4u;
    SET_GPR_U32(ctx, 31, 0x21FEFCu);
    ctx->pc = 0x21FEF8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FEFCu; }
        else if (ctx->pc != 0x21FEFCu) { ctx->pc = 0x21FEFCu; }
    }
    if (ctx->pc != 0x21FEFCu) { return; }
    ctx->pc = 0x21FEFCu;
    // 0x21fefc: 0x10000004
    ctx->pc = 0x21FEFCu;
    {
        const bool branch_taken_0x21fefc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21fefc) {
            ctx->pc = 0x21FF10u;
            goto label_21ff10;
        }
    }
    ctx->pc = 0x21FF04u;
label_21ff04:
    // 0x21ff04: 0x26100014
    ctx->pc = 0x21ff04u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 20));
    // 0x21ff08: 0x1440ffa7
    ctx->pc = 0x21FF08u;
    {
        const bool branch_taken_0x21ff08 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21FF0Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294967295));
        if (branch_taken_0x21ff08) {
            ctx->pc = 0x21FDA8u;
            goto label_21fda8;
        }
    }
    ctx->pc = 0x21FF10u;
label_21ff10:
    // 0x21ff10: 0x8e24016c
    ctx->pc = 0x21ff10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 364)));
label_21ff14:
    // 0x21ff14: 0x3c020047
    ctx->pc = 0x21ff14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)71 << 16));
    // 0x21ff18: 0x344300f6
    ctx->pc = 0x21ff18u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 2), 246));
    // 0x21ff1c: 0x50830033
    ctx->pc = 0x21FF1Cu;
    {
        const bool branch_taken_0x21ff1c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x21ff1c) {
            ctx->pc = 0x21FF20u;
            SET_GPR_U32(ctx, 2, ((uint32_t)16448 << 16));
            ctx->pc = 0x21FFECu;
            goto label_21ffec;
        }
    }
    ctx->pc = 0x21FF24u;
    // 0x21ff24: 0x344200d6
    ctx->pc = 0x21ff24u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 214));
    // 0x21ff28: 0x1082002a
    ctx->pc = 0x21FF28u;
    {
        const bool branch_taken_0x21ff28 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x21FF2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x21ff28) {
            ctx->pc = 0x21FFD4u;
            goto label_21ffd4;
        }
    }
    ctx->pc = 0x21FF30u;
    // 0x21ff30: 0x3c020040
    ctx->pc = 0x21ff30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)64 << 16));
    // 0x21ff34: 0x3442003a
    ctx->pc = 0x21ff34u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 58));
    // 0x21ff38: 0x10820020
    ctx->pc = 0x21FF38u;
    {
        const bool branch_taken_0x21ff38 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x21FF3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)16384 << 16));
        if (branch_taken_0x21ff38) {
            ctx->pc = 0x21FFBCu;
            goto label_21ffbc;
        }
    }
    ctx->pc = 0x21FF40u;
    // 0x21ff40: 0x3c03003c
    ctx->pc = 0x21ff40u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x21ff44: 0x3462004f
    ctx->pc = 0x21ff44u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 79));
    // 0x21ff48: 0x10820015
    ctx->pc = 0x21FF48u;
    {
        const bool branch_taken_0x21ff48 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x21FF4Cu;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 60));
        if (branch_taken_0x21ff48) {
            ctx->pc = 0x21FFA0u;
            goto label_21ffa0;
        }
    }
    ctx->pc = 0x21FF50u;
    // 0x21ff50: 0x1082000c
    ctx->pc = 0x21FF50u;
    {
        const bool branch_taken_0x21ff50 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x21FF54u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), 28));
        if (branch_taken_0x21ff50) {
            ctx->pc = 0x21FF84u;
            goto label_21ff84;
        }
    }
    ctx->pc = 0x21FF58u;
    // 0x21ff58: 0x10820003
    ctx->pc = 0x21FF58u;
    {
        const bool branch_taken_0x21ff58 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        if (branch_taken_0x21ff58) {
            ctx->pc = 0x21FF68u;
            goto label_21ff68;
        }
    }
    ctx->pc = 0x21FF60u;
    // 0x21ff60: 0x10000026
    ctx->pc = 0x21FF60u;
    {
        const bool branch_taken_0x21ff60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21ff60) {
            ctx->pc = 0x21FFFCu;
            goto label_21fffc;
        }
    }
    ctx->pc = 0x21FF68u;
label_21ff68:
    // 0x21ff68: 0xc62c002c
    ctx->pc = 0x21ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21ff6c: 0xc62d0030
    ctx->pc = 0x21ff6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21ff70: 0xc62e0034
    ctx->pc = 0x21ff70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21ff74: 0xc07868c
    ctx->pc = 0x21FF74u;
    SET_GPR_U32(ctx, 31, 0x21FF7Cu);
    ctx->pc = 0x21FF78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1E1A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__Fifff_0x1e1a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF7Cu; }
        else if (ctx->pc != 0x21FF7Cu) { ctx->pc = 0x21FF7Cu; }
    }
    if (ctx->pc != 0x21FF7Cu) { return; }
    ctx->pc = 0x21FF7Cu;
    // 0x21ff7c: 0x1000001f
    ctx->pc = 0x21FF7Cu;
    {
        const bool branch_taken_0x21ff7c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21ff7c) {
            ctx->pc = 0x21FFFCu;
            goto label_21fffc;
        }
    }
    ctx->pc = 0x21FF84u;
label_21ff84:
    // 0x21ff84: 0xc62c002c
    ctx->pc = 0x21ff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21ff88: 0xc62d0030
    ctx->pc = 0x21ff88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21ff8c: 0xc62e0034
    ctx->pc = 0x21ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21ff90: 0xc07868c
    ctx->pc = 0x21FF90u;
    SET_GPR_U32(ctx, 31, 0x21FF98u);
    ctx->pc = 0x21FF94u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4));
    ctx->pc = 0x1E1A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__Fifff_0x1e1a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF98u; }
        else if (ctx->pc != 0x21FF98u) { ctx->pc = 0x21FF98u; }
    }
    if (ctx->pc != 0x21FF98u) { return; }
    ctx->pc = 0x21FF98u;
    // 0x21ff98: 0x10000018
    ctx->pc = 0x21FF98u;
    {
        const bool branch_taken_0x21ff98 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21ff98) {
            ctx->pc = 0x21FFFCu;
            goto label_21fffc;
        }
    }
    ctx->pc = 0x21FFA0u;
label_21ffa0:
    // 0x21ffa0: 0xc62c002c
    ctx->pc = 0x21ffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21ffa4: 0xc62d0030
    ctx->pc = 0x21ffa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21ffa8: 0xc62e0034
    ctx->pc = 0x21ffa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21ffac: 0xc07868c
    ctx->pc = 0x21FFACu;
    SET_GPR_U32(ctx, 31, 0x21FFB4u);
    ctx->pc = 0x21FFB0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 5));
    ctx->pc = 0x1E1A30u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__Fifff_0x1e1a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFB4u; }
        else if (ctx->pc != 0x21FFB4u) { ctx->pc = 0x21FFB4u; }
    }
    if (ctx->pc != 0x21FFB4u) { return; }
    ctx->pc = 0x21FFB4u;
    // 0x21ffb4: 0x10000011
    ctx->pc = 0x21FFB4u;
    {
        const bool branch_taken_0x21ffb4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21ffb4) {
            ctx->pc = 0x21FFFCu;
            goto label_21fffc;
        }
    }
    ctx->pc = 0x21FFBCu;
label_21ffbc:
    // 0x21ffbc: 0x44826000
    ctx->pc = 0x21ffbcu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x21ffc0: 0x24040006
    ctx->pc = 0x21ffc0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 6));
    // 0x21ffc4: 0xc0785e0
    ctx->pc = 0x21FFC4u;
    SET_GPR_U32(ctx, 31, 0x21FFCCu);
    ctx->pc = 0x21FFC8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 1088));
    ctx->pc = 0x1E1780u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__Fi4ANPOf_0x1e1780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFCCu; }
        else if (ctx->pc != 0x21FFCCu) { ctx->pc = 0x21FFCCu; }
    }
    if (ctx->pc != 0x21FFCCu) { return; }
    ctx->pc = 0x21FFCCu;
    // 0x21ffcc: 0x1000000b
    ctx->pc = 0x21FFCCu;
    {
        const bool branch_taken_0x21ffcc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21ffcc) {
            ctx->pc = 0x21FFFCu;
            goto label_21fffc;
        }
    }
    ctx->pc = 0x21FFD4u;
label_21ffd4:
    // 0x21ffd4: 0x44826000
    ctx->pc = 0x21ffd4u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x21ffd8: 0x24040007
    ctx->pc = 0x21ffd8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    // 0x21ffdc: 0xc0785e0
    ctx->pc = 0x21FFDCu;
    SET_GPR_U32(ctx, 31, 0x21FFE4u);
    ctx->pc = 0x21FFE0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 1088));
    ctx->pc = 0x1E1780u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__Fi4ANPOf_0x1e1780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFE4u; }
        else if (ctx->pc != 0x21FFE4u) { ctx->pc = 0x21FFE4u; }
    }
    if (ctx->pc != 0x21FFE4u) { return; }
    ctx->pc = 0x21FFE4u;
    // 0x21ffe4: 0x10000005
    ctx->pc = 0x21FFE4u;
    {
        const bool branch_taken_0x21ffe4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x21ffe4) {
            ctx->pc = 0x21FFFCu;
            goto label_21fffc;
        }
    }
    ctx->pc = 0x21FFECu;
label_21ffec:
    // 0x21ffec: 0x44826000
    ctx->pc = 0x21ffecu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 2);
    // 0x21fff0: 0x24040008
    ctx->pc = 0x21fff0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x21fff4: 0xc0785e0
    ctx->pc = 0x21FFF4u;
    SET_GPR_U32(ctx, 31, 0x21FFFCu);
    ctx->pc = 0x21FFF8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 1088));
    ctx->pc = 0x1E1780u;
    {
        const uint32_t __entryPc = ctx->pc;
        new_FcvEffectTask__Fi4ANPOf_0x1e1780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFFCu; }
        else if (ctx->pc != 0x21FFFCu) { ctx->pc = 0x21FFFCu; }
    }
    if (ctx->pc != 0x21FFFCu) { return; }
    ctx->pc = 0x21FFFCu;
label_21fffc:
    // 0x21fffc: 0xc06898c
    ctx->pc = 0x21FFFCu;
    SET_GPR_U32(ctx, 31, 0x220004u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220004u; }
        else if (ctx->pc != 0x220004u) { ctx->pc = 0x220004u; }
    }
    if (ctx->pc != 0x220004u) { return; }
    ctx->pc = 0x220004u;
    // 0x220004: 0x7bbf0020
    ctx->pc = 0x220004u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220008: 0x7bb10010
    ctx->pc = 0x220008u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22000c: 0x7bb00000
    ctx->pc = 0x22000cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220010: 0x3e00008
    ctx->pc = 0x220010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220014u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 1120));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21FDA8u: goto label_21fda8;
            case 0x21FDF0u: goto label_21fdf0;
            case 0x21FE1Cu: goto label_21fe1c;
            case 0x21FE50u: goto label_21fe50;
            case 0x21FE88u: goto label_21fe88;
            case 0x21FEB8u: goto label_21feb8;
            case 0x21FEBCu: goto label_21febc;
            case 0x21FED8u: goto label_21fed8;
            case 0x21FF04u: goto label_21ff04;
            case 0x21FF10u: goto label_21ff10;
            case 0x21FF14u: goto label_21ff14;
            case 0x21FF68u: goto label_21ff68;
            case 0x21FF84u: goto label_21ff84;
            case 0x21FFA0u: goto label_21ffa0;
            case 0x21FFBCu: goto label_21ffbc;
            case 0x21FFD4u: goto label_21ffd4;
            case 0x21FFECu: goto label_21ffec;
            case 0x21FFFCu: goto label_21fffc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x220018u;
}
