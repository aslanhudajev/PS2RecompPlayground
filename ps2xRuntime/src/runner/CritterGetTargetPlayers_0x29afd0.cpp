#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterGetTargetPlayers
// Address: 0x29afd0 - 0x29b1bc
void CritterGetTargetPlayers_0x29afd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x29afd0u;

    // 0x29afd0: 0x27bdff70
    ctx->pc = 0x29afd0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x29afd4: 0xffbf0070
    ctx->pc = 0x29afd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x29afd8: 0xffb20060
    ctx->pc = 0x29afd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x29afdc: 0xffb10050
    ctx->pc = 0x29afdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x29afe0: 0xffb00040
    ctx->pc = 0x29afe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x29afe4: 0xe7b50088
    ctx->pc = 0x29afe4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x29afe8: 0xe7b40080
    ctx->pc = 0x29afe8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x29afec: 0x80802d
    ctx->pc = 0x29afecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aff0: 0xa6000136
    ctx->pc = 0x29aff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 0));
    // 0x29aff4: 0xc60104f4
    ctx->pc = 0x29aff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29aff8: 0x44800000
    ctx->pc = 0x29aff8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x29affc: 0x46000836
    ctx->pc = 0x29affcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b000: 0x0
    ctx->pc = 0x29b000u;
    // NOP
    // 0x29b004: 0x45010066
    ctx->pc = 0x29B004u;
    {
        const bool branch_taken_0x29b004 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B008u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x29b004) {
            ctx->pc = 0x29B1A0u;
            goto label_29b1a0;
        }
    }
    ctx->pc = 0x29B00Cu;
    // 0x29b00c: 0x902d
    ctx->pc = 0x29b00cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b010: 0x3c020032
    ctx->pc = 0x29b010u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x29b014: 0x24511bc0
    ctx->pc = 0x29b014u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x29b018: 0x46000546
    ctx->pc = 0x29b018u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x29b01c: 0x3c01447a
    ctx->pc = 0x29b01cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x29b020: 0x4481a000
    ctx->pc = 0x29b020u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x29b024: 0x0
    ctx->pc = 0x29b024u;
    // NOP
label_29b028:
    // 0x29b028: 0x8e2300fc
    ctx->pc = 0x29b028u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x29b02c: 0x24020001
    ctx->pc = 0x29b02cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b030: 0x54620041
    ctx->pc = 0x29B030u;
    {
        const bool branch_taken_0x29b030 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x29b030) {
            ctx->pc = 0x29B034u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29B138u;
            goto label_29b138;
        }
    }
    ctx->pc = 0x29B038u;
    // 0x29b038: 0x8e220138
    ctx->pc = 0x29b038u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x29b03c: 0x30420004
    ctx->pc = 0x29b03cu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4));
    // 0x29b040: 0x5040000b
    ctx->pc = 0x29B040u;
    {
        const bool branch_taken_0x29b040 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29b040) {
            ctx->pc = 0x29B044u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x29B070u;
            goto label_29b070;
        }
    }
    ctx->pc = 0x29B048u;
    // 0x29b048: 0x8e020008
    ctx->pc = 0x29b048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29b04c: 0x50400008
    ctx->pc = 0x29B04Cu;
    {
        const bool branch_taken_0x29b04c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x29b04c) {
            ctx->pc = 0x29B050u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x29B070u;
            goto label_29b070;
        }
    }
    ctx->pc = 0x29B054u;
    // 0x29b054: 0x8e020004
    ctx->pc = 0x29b054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29b058: 0x8c420120
    ctx->pc = 0x29b058u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x29b05c: 0x84430020
    ctx->pc = 0x29b05cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x29b060: 0x24020004
    ctx->pc = 0x29b060u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x29b064: 0x54620034
    ctx->pc = 0x29B064u;
    {
        const bool branch_taken_0x29b064 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x29b064) {
            ctx->pc = 0x29B068u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29B138u;
            goto label_29b138;
        }
    }
    ctx->pc = 0x29B06Cu;
    // 0x29b06c: 0xc6200070
    ctx->pc = 0x29b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29b070:
    // 0x29b070: 0xe7a00000
    ctx->pc = 0x29b070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x29b074: 0xc6200074
    ctx->pc = 0x29b074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b078: 0xe7a00004
    ctx->pc = 0x29b078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x29b07c: 0xc6200078
    ctx->pc = 0x29b07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b080: 0xe7a00008
    ctx->pc = 0x29b080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x29b084: 0x8e050004
    ctx->pc = 0x29b084u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29b088: 0x200202d
    ctx->pc = 0x29b088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b08c: 0x24a50080
    ctx->pc = 0x29b08cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 128));
    // 0x29b090: 0x3a0302d
    ctx->pc = 0x29b090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b094: 0xc0a6b02
    ctx->pc = 0x29B094u;
    SET_GPR_U32(ctx, 31, 0x29B09Cu);
    ctx->pc = 0x29B098u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x29AC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterCalcTarget_0x29ac08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B09Cu; }
    }
    if (ctx->pc != 0x29B09Cu) { return; }
    ctx->pc = 0x29B09Cu;
    // 0x29b09c: 0x8e020b5c
    ctx->pc = 0x29b09cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2908)));
    // 0x29b0a0: 0x1040000a
    ctx->pc = 0x29B0A0u;
    {
        const bool branch_taken_0x29b0a0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x29B0A4u;
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x29b0a0) {
            ctx->pc = 0x29B0CCu;
            goto label_29b0cc;
        }
    }
    ctx->pc = 0x29B0A8u;
    // 0x29b0a8: 0xc6000b58
    ctx->pc = 0x29b0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b0ac: 0x4600a834
    ctx->pc = 0x29b0acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b0b0: 0x0
    ctx->pc = 0x29b0b0u;
    // NOP
    // 0x29b0b4: 0x45000006
    ctx->pc = 0x29B0B4u;
    {
        const bool branch_taken_0x29b0b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B0B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x29b0b4) {
            ctx->pc = 0x29B0D0u;
            goto label_29b0d0;
        }
    }
    ctx->pc = 0x29B0BCu;
    // 0x29b0bc: 0x46020034
    ctx->pc = 0x29b0bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b0c0: 0x0
    ctx->pc = 0x29b0c0u;
    // NOP
    // 0x29b0c4: 0x4503001c
    ctx->pc = 0x29B0C4u;
    {
        const bool branch_taken_0x29b0c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x29b0c4) {
            ctx->pc = 0x29B0C8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x29B138u;
            goto label_29b138;
        }
    }
    ctx->pc = 0x29B0CCu;
label_29b0cc:
    // 0x29b0cc: 0x3c020031
    ctx->pc = 0x29b0ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_29b0d0:
    // 0x29b0d0: 0xc441ffa4
    ctx->pc = 0x29b0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b0d4: 0xc62008c0
    ctx->pc = 0x29b0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b0d8: 0x46000834
    ctx->pc = 0x29b0d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b0dc: 0x0
    ctx->pc = 0x29b0dcu;
    // NOP
    // 0x29b0e0: 0x45000003
    ctx->pc = 0x29B0E0u;
    {
        const bool branch_taken_0x29b0e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B0E4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x29b0e0) {
            ctx->pc = 0x29B0F0u;
            goto label_29b0f0;
        }
    }
    ctx->pc = 0x29B0E8u;
    // 0x29b0e8: 0x46140002
    ctx->pc = 0x29b0e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x29b0ec: 0xe7a0001c
    ctx->pc = 0x29b0ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_29b0f0:
    // 0x29b0f0: 0x3c016258
    ctx->pc = 0x29b0f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)25176 << 16));
    // 0x29b0f4: 0x3421d727
    ctx->pc = 0x29b0f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55079));
    // 0x29b0f8: 0x44810000
    ctx->pc = 0x29b0f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x29b0fc: 0x46001034
    ctx->pc = 0x29b0fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29b100: 0x0
    ctx->pc = 0x29b100u;
    // NOP
    // 0x29b104: 0x4500000b
    ctx->pc = 0x29B104u;
    {
        const bool branch_taken_0x29b104 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29B108u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29b104) {
            ctx->pc = 0x29B134u;
            goto label_29b134;
        }
    }
    ctx->pc = 0x29B10Cu;
    // 0x29b10c: 0xafb20010
    ctx->pc = 0x29b10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x29b110: 0xc0a6ae2
    ctx->pc = 0x29B110u;
    SET_GPR_U32(ctx, 31, 0x29B118u);
    ctx->pc = 0x29B114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29AB88u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterPlayerAnger_0x29ab88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B118u; }
    }
    if (ctx->pc != 0x29B118u) { return; }
    ctx->pc = 0x29B118u;
    // 0x29b118: 0xe7a00020
    ctx->pc = 0x29b118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29b11c: 0xc7a1001c
    ctx->pc = 0x29b11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29b120: 0x46000842
    ctx->pc = 0x29b120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x29b124: 0xe7a1001c
    ctx->pc = 0x29b124u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x29b128: 0x200202d
    ctx->pc = 0x29b128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b12c: 0xc0a6ba6
    ctx->pc = 0x29B12Cu;
    SET_GPR_U32(ctx, 31, 0x29B134u);
    ctx->pc = 0x29B130u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x29AE98u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterInsertTarget_0x29ae98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29B134u; }
    }
    if (ctx->pc != 0x29B134u) { return; }
    ctx->pc = 0x29B134u;
label_29b134:
    // 0x29b134: 0x26520001
    ctx->pc = 0x29b134u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_29b138:
    // 0x29b138: 0x2a420004
    ctx->pc = 0x29b138u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x29b13c: 0x1440ffba
    ctx->pc = 0x29B13Cu;
    {
        const bool branch_taken_0x29b13c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29B140u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 11008));
        if (branch_taken_0x29b13c) {
            ctx->pc = 0x29B028u;
            goto label_29b028;
        }
    }
    ctx->pc = 0x29B144u;
    // 0x29b144: 0x86020136
    ctx->pc = 0x29b144u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 310)));
    // 0x29b148: 0x18400014
    ctx->pc = 0x29B148u;
    {
        const bool branch_taken_0x29b148 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29B14Cu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x29b148) {
            ctx->pc = 0x29B19Cu;
            goto label_29b19c;
        }
    }
    ctx->pc = 0x29B150u;
    // 0x29b150: 0x24040030
    ctx->pc = 0x29b150u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 48));
    // 0x29b154: 0x3c020036
    ctx->pc = 0x29b154u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x29b158: 0x2443d7e8
    ctx->pc = 0x29b158u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294957032));
    // 0x29b15c: 0x3c013f80
    ctx->pc = 0x29b15cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x29b160: 0x44810800
    ctx->pc = 0x29b160u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x29b164: 0x2442818
    ctx->pc = 0x29b164u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_29b168:
    // 0x29b168: 0xb01021
    ctx->pc = 0x29b168u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x29b16c: 0x8c420140
    ctx->pc = 0x29b16cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x29b170: 0x4400005
    ctx->pc = 0x29B170u;
    {
        const bool branch_taken_0x29b170 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x29B174u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
        if (branch_taken_0x29b170) {
            ctx->pc = 0x29B188u;
            goto label_29b188;
        }
    }
    ctx->pc = 0x29B178u;
    // 0x29b178: 0x431021
    ctx->pc = 0x29b178u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b17c: 0xc4400000
    ctx->pc = 0x29b17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29b180: 0x46010000
    ctx->pc = 0x29b180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29b184: 0xe4400000
    ctx->pc = 0x29b184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_29b188:
    // 0x29b188: 0x26520001
    ctx->pc = 0x29b188u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x29b18c: 0x86020136
    ctx->pc = 0x29b18cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 310)));
    // 0x29b190: 0x242102a
    ctx->pc = 0x29b190u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 2)));
    // 0x29b194: 0x1440fff4
    ctx->pc = 0x29B194u;
    {
        const bool branch_taken_0x29b194 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x29B198u;
        { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29b194) {
            ctx->pc = 0x29B168u;
            goto label_29b168;
        }
    }
    ctx->pc = 0x29B19Cu;
label_29b19c:
    // 0x29b19c: 0xdfbf0070
    ctx->pc = 0x29b19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29b1a0:
    // 0x29b1a0: 0xdfb20060
    ctx->pc = 0x29b1a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29b1a4: 0xdfb10050
    ctx->pc = 0x29b1a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29b1a8: 0xdfb00040
    ctx->pc = 0x29b1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b1ac: 0xc7b50088
    ctx->pc = 0x29b1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29b1b0: 0xc7b40080
    ctx->pc = 0x29b1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29b1b4: 0x3e00008
    ctx->pc = 0x29B1B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B1B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29B028u: goto label_29b028;
            case 0x29B070u: goto label_29b070;
            case 0x29B0CCu: goto label_29b0cc;
            case 0x29B0D0u: goto label_29b0d0;
            case 0x29B0F0u: goto label_29b0f0;
            case 0x29B134u: goto label_29b134;
            case 0x29B138u: goto label_29b138;
            case 0x29B168u: goto label_29b168;
            case 0x29B188u: goto label_29b188;
            case 0x29B19Cu: goto label_29b19c;
            case 0x29B1A0u: goto label_29b1a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29B1BCu;
}
