#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossDeath
// Address: 0x29df08 - 0x29e118
void BossDeath_0x29df08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29df08u;

    // 0x29df08: 0x27bdff50
    ctx->pc = 0x29df08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x29df0c: 0xffbf00a0
    ctx->pc = 0x29df0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x29df10: 0xffb50090
    ctx->pc = 0x29df10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x29df14: 0xffb40080
    ctx->pc = 0x29df14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x29df18: 0xffb30070
    ctx->pc = 0x29df18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x29df1c: 0xffb20060
    ctx->pc = 0x29df1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x29df20: 0xffb10050
    ctx->pc = 0x29df20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x29df24: 0xc09970c
    ctx->pc = 0x29DF24u;
    SET_GPR_U32(ctx, 31, 0x29DF2Cu);
    ctx->pc = 0x29DF28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->pc = 0x265C30u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartGoodWizard_0x265c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DF2Cu; }
    }
    if (ctx->pc != 0x29DF2Cu) { return; }
    ctx->pc = 0x29DF2Cu;
    // 0x29df2c: 0x3c020036
    ctx->pc = 0x29df2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29df30: 0x24030001
    ctx->pc = 0x29df30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29df34: 0xac43d804
    ctx->pc = 0x29df34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957060), GPR_U32(ctx, 3));
    // 0x29df38: 0x902d
    ctx->pc = 0x29df38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df3c: 0x3c020032
    ctx->pc = 0x29df3cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29df40: 0x24551bc0
    ctx->pc = 0x29df40u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29df44: 0x24142b00
    ctx->pc = 0x29df44u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x29df48: 0x24130001
    ctx->pc = 0x29df48u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29df4c: 0x24110008
    ctx->pc = 0x29df4cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 8));
    // 0x29df50: 0x3c100034
    ctx->pc = 0x29df50u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x29df54: 0x2541818
    ctx->pc = 0x29df54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_29df58:
    // 0x29df58: 0x751021
    ctx->pc = 0x29df58u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x29df5c: 0x8c4200fc
    ctx->pc = 0x29df5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x29df60: 0x10530003
    ctx->pc = 0x29DF60u;
    {
        const bool branch_taken_0x29df60 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 19));
        if (branch_taken_0x29df60) {
            ctx->pc = 0x29DF70u;
            goto label_29df70;
        }
    }
    ctx->pc = 0x29DF68u;
    // 0x29df68: 0x54510007
    ctx->pc = 0x29DF68u;
    {
        const bool branch_taken_0x29df68 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 17));
        if (branch_taken_0x29df68) {
            ctx->pc = 0x29DF6Cu;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29DF88u;
            goto label_29df88;
        }
    }
    ctx->pc = 0x29DF70u;
label_29df70:
    // 0x29df70: 0xc09d592
    ctx->pc = 0x29DF70u;
    SET_GPR_U32(ctx, 31, 0x29DF78u);
    ctx->pc = 0x29DF74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294961136)));
    ctx->pc = 0x275648u;
    {
        const uint32_t __entryPc = ctx->pc;
        GetWorldOrder_0x275648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DF78u; }
    }
    if (ctx->pc != 0x29DF78u) { return; }
    ctx->pc = 0x29DF78u;
    // 0x29df78: 0x240202d
    ctx->pc = 0x29df78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29df7c: 0xc09da98
    ctx->pc = 0x29DF7Cu;
    SET_GPR_U32(ctx, 31, 0x29DF84u);
    ctx->pc = 0x29DF80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x276A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        PlayerGiveShard_0x276a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29DF84u; }
    }
    if (ctx->pc != 0x29DF84u) { return; }
    ctx->pc = 0x29DF84u;
    // 0x29df84: 0x26520001
    ctx->pc = 0x29df84u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_29df88:
    // 0x29df88: 0x2a420004
    ctx->pc = 0x29df88u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x29df8c: 0x1440fff2
    ctx->pc = 0x29DF8Cu;
    {
        const bool branch_taken_0x29df8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29DF90u;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29df8c) {
            ctx->pc = 0x29DF58u;
            goto label_29df58;
        }
    }
    ctx->pc = 0x29DF94u;
    // 0x29df94: 0x3c020036
    ctx->pc = 0x29df94u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29df98: 0x8c43d930
    ctx->pc = 0x29df98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x29df9c: 0xc4610460
    ctx->pc = 0x29df9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29dfa0: 0xe7a10000
    ctx->pc = 0x29dfa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29dfa4: 0xc4620464
    ctx->pc = 0x29dfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x29dfa8: 0xe7a20004
    ctx->pc = 0x29dfa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29dfac: 0xc4630468
    ctx->pc = 0x29dfacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x29dfb0: 0xe7a30008
    ctx->pc = 0x29dfb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29dfb4: 0x8c620004
    ctx->pc = 0x29dfb4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29dfb8: 0xc44000d0
    ctx->pc = 0x29dfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dfbc: 0x46010000
    ctx->pc = 0x29dfbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29dfc0: 0xe7a00000
    ctx->pc = 0x29dfc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29dfc4: 0x8c620004
    ctx->pc = 0x29dfc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29dfc8: 0xc44000d4
    ctx->pc = 0x29dfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dfcc: 0x46020000
    ctx->pc = 0x29dfccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x29dfd0: 0xe7a00004
    ctx->pc = 0x29dfd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29dfd4: 0x8c620004
    ctx->pc = 0x29dfd4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29dfd8: 0xc44000d8
    ctx->pc = 0x29dfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29dfdc: 0x46030000
    ctx->pc = 0x29dfdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x29dfe0: 0xe7a00008
    ctx->pc = 0x29dfe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29dfe4: 0x3c020036
    ctx->pc = 0x29dfe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29dfe8: 0x8c42d934
    ctx->pc = 0x29dfe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x29dfec: 0x2842002a
    ctx->pc = 0x29dfecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 42));
    // 0x29dff0: 0x10400020
    ctx->pc = 0x29DFF0u;
    {
        const bool branch_taken_0x29dff0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29DFF4u;
        SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
        if (branch_taken_0x29dff0) {
            ctx->pc = 0x29E074u;
            goto label_29e074;
        }
    }
    ctx->pc = 0x29DFF8u;
    // 0x29dff8: 0x8e04cda4
    ctx->pc = 0x29dff8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954404)));
    // 0x29dffc: 0x3c05003b
    ctx->pc = 0x29dffcu;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x29e000: 0x24a5e430
    ctx->pc = 0x29e000u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294960176));
    // 0x29e004: 0x302d
    ctx->pc = 0x29e004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e008: 0xc09e6d2
    ctx->pc = 0x29E008u;
    SET_GPR_U32(ctx, 31, 0x29E010u);
    ctx->pc = 0x29E00Cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffect_0x279b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E010u; }
    }
    if (ctx->pc != 0x29E010u) { return; }
    ctx->pc = 0x29E010u;
    // 0x29e010: 0x40882d
    ctx->pc = 0x29e010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e014: 0x8e04cda4
    ctx->pc = 0x29e014u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294954404)));
    // 0x29e018: 0x3c05003b
    ctx->pc = 0x29e018u;
    SET_GPR_U32(ctx, 5, ((uint32_t)59 << 16));
    // 0x29e01c: 0x24a5e438
    ctx->pc = 0x29e01cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 4294960184));
    // 0x29e020: 0x302d
    ctx->pc = 0x29e020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e024: 0xc09e6d2
    ctx->pc = 0x29E024u;
    SET_GPR_U32(ctx, 31, 0x29E02Cu);
    ctx->pc = 0x29E028u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x279B48u;
    {
        const uint32_t __entryPc = ctx->pc;
        InitCustomEffect_0x279b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E02Cu; }
    }
    if (ctx->pc != 0x29E02Cu) { return; }
    ctx->pc = 0x29E02Cu;
    // 0x29e02c: 0x40802d
    ctx->pc = 0x29e02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e030: 0x220202d
    ctx->pc = 0x29e030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e034: 0x3a0282d
    ctx->pc = 0x29e034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e038: 0x44806000
    ctx->pc = 0x29e038u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 0);
    // 0x29e03c: 0x3c068000
    ctx->pc = 0x29e03cu;
    SET_GPR_U32(ctx, 6, ((uint32_t)32768 << 16));
    // 0x29e040: 0x34c60040
    ctx->pc = 0x29e040u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 6), 64));
    // 0x29e044: 0xc09f5fa
    ctx->pc = 0x29E044u;
    SET_GPR_U32(ctx, 31, 0x29E04Cu);
    ctx->pc = 0x29E048u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 2176));
    ctx->pc = 0x27D7E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartFXSub_0x27d7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E04Cu; }
    }
    if (ctx->pc != 0x29E04Cu) { return; }
    ctx->pc = 0x29E04Cu;
    // 0x29e04c: 0x3c030036
    ctx->pc = 0x29e04cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x29e050: 0xac62d94c
    ctx->pc = 0x29e050u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957388), GPR_U32(ctx, 2));
    // 0x29e054: 0x40202d
    ctx->pc = 0x29e054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e058: 0x200282d
    ctx->pc = 0x29e058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e05c: 0x3c0141f0
    ctx->pc = 0x29e05cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x29e060: 0x44816000
    ctx->pc = 0x29e060u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x29e064: 0xc09f802
    ctx->pc = 0x29E064u;
    SET_GPR_U32(ctx, 31, 0x29E06Cu);
    ctx->pc = 0x29E068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27E008u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetMorph_0x27e008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E06Cu; }
    }
    if (ctx->pc != 0x29E06Cu) { return; }
    ctx->pc = 0x29E06Cu;
    // 0x29e06c: 0xc097afe
    ctx->pc = 0x29E06Cu;
    SET_GPR_U32(ctx, 31, 0x29E074u);
    ctx->pc = 0x29E070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x25EBF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioBossKey_0x25ebf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E074u; }
    }
    if (ctx->pc != 0x29E074u) { return; }
    ctx->pc = 0x29E074u;
label_29e074:
    // 0x29e074: 0x902d
    ctx->pc = 0x29e074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e078: 0x3c02003c
    ctx->pc = 0x29e078u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e07c: 0x24544188
    ctx->pc = 0x29e07cu;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 16776));
    // 0x29e080: 0x3c02003c
    ctx->pc = 0x29e080u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x29e084: 0x245341a0
    ctx->pc = 0x29e084u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 16800));
    // 0x29e088: 0x802d
    ctx->pc = 0x29e088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e08c: 0x0
    ctx->pc = 0x29e08cu;
    // NOP
label_29e090:
    // 0x29e090: 0x1288c0
    ctx->pc = 0x29e090u;
    SET_GPR_U32(ctx, 17, SLL32(GPR_U32(ctx, 18), 3));
    // 0x29e094: 0x101080
    ctx->pc = 0x29e094u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_29e098:
    // 0x29e098: 0x511021
    ctx->pc = 0x29e098u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29e09c: 0x541021
    ctx->pc = 0x29e09cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x29e0a0: 0x8c440000
    ctx->pc = 0x29e0a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29e0a4: 0x10800004
    ctx->pc = 0x29E0A4u;
    {
        const bool branch_taken_0x29e0a4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x29E0A8u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x29e0a4) {
            ctx->pc = 0x29E0B8u;
            goto label_29e0b8;
        }
    }
    ctx->pc = 0x29E0ACu;
    // 0x29e0ac: 0xc0b0ce8
    ctx->pc = 0x29E0ACu;
    SET_GPR_U32(ctx, 31, 0x29E0B4u);
    ctx->pc = 0x29E0B0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E0B4u; }
    }
    if (ctx->pc != 0x29E0B4u) { return; }
    ctx->pc = 0x29E0B4u;
    // 0x29e0b4: 0x101080
    ctx->pc = 0x29e0b4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_29e0b8:
    // 0x29e0b8: 0x511021
    ctx->pc = 0x29e0b8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x29e0bc: 0x531021
    ctx->pc = 0x29e0bcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x29e0c0: 0x8c440000
    ctx->pc = 0x29e0c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29e0c4: 0x50800004
    ctx->pc = 0x29E0C4u;
    {
        const bool branch_taken_0x29e0c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x29e0c4) {
            ctx->pc = 0x29E0C8u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x29E0D8u;
            goto label_29e0d8;
        }
    }
    ctx->pc = 0x29E0CCu;
    // 0x29e0cc: 0xc0b0ce8
    ctx->pc = 0x29E0CCu;
    SET_GPR_U32(ctx, 31, 0x29E0D4u);
    ctx->pc = 0x29E0D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2C33A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetHide_0x2c33a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E0D4u; }
    }
    if (ctx->pc != 0x29E0D4u) { return; }
    ctx->pc = 0x29E0D4u;
    // 0x29e0d4: 0x26100001
    ctx->pc = 0x29e0d4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_29e0d8:
    // 0x29e0d8: 0x2a020002
    ctx->pc = 0x29e0d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 2));
    // 0x29e0dc: 0x1440ffee
    ctx->pc = 0x29E0DCu;
    {
        const bool branch_taken_0x29e0dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29E0E0u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x29e0dc) {
            ctx->pc = 0x29E098u;
            goto label_29e098;
        }
    }
    ctx->pc = 0x29E0E4u;
    // 0x29e0e4: 0x26520001
    ctx->pc = 0x29e0e4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x29e0e8: 0x2a420003
    ctx->pc = 0x29e0e8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 3));
    // 0x29e0ec: 0x1440ffe8
    ctx->pc = 0x29E0ECu;
    {
        const bool branch_taken_0x29e0ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29E0F0u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29e0ec) {
            ctx->pc = 0x29E090u;
            goto label_29e090;
        }
    }
    ctx->pc = 0x29E0F4u;
    // 0x29e0f4: 0xdfbf00a0
    ctx->pc = 0x29e0f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29e0f8: 0xdfb50090
    ctx->pc = 0x29e0f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29e0fc: 0xdfb40080
    ctx->pc = 0x29e0fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29e100: 0xdfb30070
    ctx->pc = 0x29e100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29e104: 0xdfb20060
    ctx->pc = 0x29e104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29e108: 0xdfb10050
    ctx->pc = 0x29e108u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29e10c: 0xdfb00040
    ctx->pc = 0x29e10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29e110: 0x3e00008
    ctx->pc = 0x29E110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E114u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29DF58u: goto label_29df58;
            case 0x29DF70u: goto label_29df70;
            case 0x29DF88u: goto label_29df88;
            case 0x29E074u: goto label_29e074;
            case 0x29E090u: goto label_29e090;
            case 0x29E098u: goto label_29e098;
            case 0x29E0B8u: goto label_29e0b8;
            case 0x29E0D8u: goto label_29e0d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29E118u;
}
