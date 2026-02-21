#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: init_game_cam
// Address: 0x26fe08 - 0x27051c
void init_game_cam_0x26fe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x26fe08u;

    // 0x26fe08: 0x27bdfee0
    ctx->pc = 0x26fe08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x26fe0c: 0xffbf0110
    ctx->pc = 0x26fe0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x26fe10: 0xffb40100
    ctx->pc = 0x26fe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x26fe14: 0xffb300f0
    ctx->pc = 0x26fe14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 19));
    // 0x26fe18: 0xffb200e0
    ctx->pc = 0x26fe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
    // 0x26fe1c: 0xffb100d0
    ctx->pc = 0x26fe1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 17));
    // 0x26fe20: 0xffb000c0
    ctx->pc = 0x26fe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x26fe24: 0x80a02d
    ctx->pc = 0x26fe24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe28: 0x3c020034
    ctx->pc = 0x26fe28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26fe2c: 0x8c42e7c8
    ctx->pc = 0x26fe2cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x26fe30: 0x8c510060
    ctx->pc = 0x26fe30u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x26fe34: 0x3c020034
    ctx->pc = 0x26fe34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26fe38: 0x2403ffff
    ctx->pc = 0x26fe38u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26fe3c: 0xac43f944
    ctx->pc = 0x26fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965572), GPR_U32(ctx, 3));
    // 0x26fe40: 0x3c020034
    ctx->pc = 0x26fe40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26fe44: 0xac43f948
    ctx->pc = 0x26fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965576), GPR_U32(ctx, 3));
    // 0x26fe48: 0x3c020034
    ctx->pc = 0x26fe48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26fe4c: 0xac43cdb8
    ctx->pc = 0x26fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954424), GPR_U32(ctx, 3));
    // 0x26fe50: 0x902d
    ctx->pc = 0x26fe50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe54: 0x3c020032
    ctx->pc = 0x26fe54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26fe58: 0x24501bc0
    ctx->pc = 0x26fe58u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x26fe5c: 0x24130001
    ctx->pc = 0x26fe5cu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_26fe60:
    // 0x26fe60: 0x8e0200fc
    ctx->pc = 0x26fe60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x26fe64: 0x54530005
    ctx->pc = 0x26FE64u;
    {
        const bool branch_taken_0x26fe64 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x26fe64) {
            ctx->pc = 0x26FE68u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x26FE7Cu;
            goto label_26fe7c;
        }
    }
    ctx->pc = 0x26FE6Cu;
    // 0x26fe6c: 0x200202d
    ctx->pc = 0x26fe6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe70: 0xc08ac14
    ctx->pc = 0x26FE70u;
    SET_GPR_U32(ctx, 31, 0x26FE78u);
    ctx->pc = 0x26FE74u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x22B050u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdatePlayerWorldMat_0x22b050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FE78u; }
    }
    if (ctx->pc != 0x26FE78u) { return; }
    ctx->pc = 0x26FE78u;
    // 0x26fe78: 0x26520001
    ctx->pc = 0x26fe78u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_26fe7c:
    // 0x26fe7c: 0x2a420004
    ctx->pc = 0x26fe7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x26fe80: 0x1440fff7
    ctx->pc = 0x26FE80u;
    {
        const bool branch_taken_0x26fe80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26FE84u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 11008));
        if (branch_taken_0x26fe80) {
            ctx->pc = 0x26FE60u;
            goto label_26fe60;
        }
    }
    ctx->pc = 0x26FE88u;
    // 0x26fe88: 0x3c020033
    ctx->pc = 0x26fe88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x26fe8c: 0x86230034
    ctx->pc = 0x26fe8cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x26fe90: 0xac433c00
    ctx->pc = 0x26fe90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15360), GPR_U32(ctx, 3));
    // 0x26fe94: 0x82220024
    ctx->pc = 0x26fe94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x26fe98: 0x14400026
    ctx->pc = 0x26FE98u;
    {
        const bool branch_taken_0x26fe98 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26FE9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x26fe98) {
            ctx->pc = 0x26FF34u;
            goto label_26ff34;
        }
    }
    ctx->pc = 0x26FEA0u;
    // 0x26fea0: 0x3c014100
    ctx->pc = 0x26fea0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16640 << 16));
    // 0x26fea4: 0x44810800
    ctx->pc = 0x26fea4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26fea8: 0xe7a10050
    ctx->pc = 0x26fea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26feac: 0xafa00054
    ctx->pc = 0x26feacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x26feb0: 0xe7a10058
    ctx->pc = 0x26feb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26feb4: 0x3c020032
    ctx->pc = 0x26feb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26feb8: 0x2442f9f8
    ctx->pc = 0x26feb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294965752));
    // 0x26febc: 0xc4400018
    ctx->pc = 0x26febcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fec0: 0x46010000
    ctx->pc = 0x26fec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26fec4: 0xe620000c
    ctx->pc = 0x26fec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x26fec8: 0xc440001c
    ctx->pc = 0x26fec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fecc: 0xc7a10054
    ctx->pc = 0x26feccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fed0: 0x46010000
    ctx->pc = 0x26fed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26fed4: 0xe6200010
    ctx->pc = 0x26fed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x26fed8: 0xc4400020
    ctx->pc = 0x26fed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fedc: 0xc7a10058
    ctx->pc = 0x26fedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fee0: 0x46010000
    ctx->pc = 0x26fee0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26fee4: 0xe6200014
    ctx->pc = 0x26fee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x26fee8: 0x3c01c100
    ctx->pc = 0x26fee8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49408 << 16));
    // 0x26feec: 0x44810800
    ctx->pc = 0x26feecu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x26fef0: 0xe7a10050
    ctx->pc = 0x26fef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26fef4: 0x3c014080
    ctx->pc = 0x26fef4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16512 << 16));
    // 0x26fef8: 0x44810000
    ctx->pc = 0x26fef8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x26fefc: 0xe7a00054
    ctx->pc = 0x26fefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26ff00: 0xe7a10058
    ctx->pc = 0x26ff00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26ff04: 0xc4400024
    ctx->pc = 0x26ff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ff08: 0x46010000
    ctx->pc = 0x26ff08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ff0c: 0xe6200018
    ctx->pc = 0x26ff0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x26ff10: 0xc4400028
    ctx->pc = 0x26ff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ff14: 0xc7a10054
    ctx->pc = 0x26ff14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ff18: 0x46010000
    ctx->pc = 0x26ff18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ff1c: 0xe620001c
    ctx->pc = 0x26ff1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x26ff20: 0xc440002c
    ctx->pc = 0x26ff20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ff24: 0xc7a10058
    ctx->pc = 0x26ff24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ff28: 0x46010000
    ctx->pc = 0x26ff28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x26ff2c: 0xe6200020
    ctx->pc = 0x26ff2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x26ff30: 0x3c020034
    ctx->pc = 0x26ff30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_26ff34:
    // 0x26ff34: 0x2443f9e0
    ctx->pc = 0x26ff34u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965728));
    // 0x26ff38: 0xc620000c
    ctx->pc = 0x26ff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ff3c: 0xe440f9e0
    ctx->pc = 0x26ff3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965728), bits); }
    // 0x26ff40: 0xc6200010
    ctx->pc = 0x26ff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ff44: 0xe4600004
    ctx->pc = 0x26ff44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x26ff48: 0xc6200014
    ctx->pc = 0x26ff48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ff4c: 0xe4600008
    ctx->pc = 0x26ff4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x26ff50: 0x3c020034
    ctx->pc = 0x26ff50u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ff54: 0x2443f9f0
    ctx->pc = 0x26ff54u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294965744));
    // 0x26ff58: 0xc6200018
    ctx->pc = 0x26ff58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ff5c: 0xe440f9f0
    ctx->pc = 0x26ff5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294965744), bits); }
    // 0x26ff60: 0xc620001c
    ctx->pc = 0x26ff60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ff64: 0xe4600004
    ctx->pc = 0x26ff64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x26ff68: 0xc6200020
    ctx->pc = 0x26ff68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ff6c: 0xe4600008
    ctx->pc = 0x26ff6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x26ff70: 0x3c03003c
    ctx->pc = 0x26ff70u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x26ff74: 0x24020002
    ctx->pc = 0x26ff74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x26ff78: 0xac62391c
    ctx->pc = 0x26ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14620), GPR_U32(ctx, 2));
    // 0x26ff7c: 0x902d
    ctx->pc = 0x26ff7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff80: 0x3c020034
    ctx->pc = 0x26ff80u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ff84: 0x2451eb60
    ctx->pc = 0x26ff84u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x26ff88: 0x202d
    ctx->pc = 0x26ff88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff8c: 0x24050003
    ctx->pc = 0x26ff8cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x26ff90: 0xc099c34
    ctx->pc = 0x26FF90u;
    SET_GPR_U32(ctx, 31, 0x26FF98u);
    ctx->pc = 0x26FF94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FF98u; }
    }
    if (ctx->pc != 0x26FF98u) { return; }
    ctx->pc = 0x26FF98u;
    // 0x26ff98: 0x24020003
    ctx->pc = 0x26ff98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x26ff9c: 0xae2200d4
    ctx->pc = 0x26ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x26ffa0: 0xc09aba6
    ctx->pc = 0x26FFA0u;
    SET_GPR_U32(ctx, 31, 0x26FFA8u);
    ctx->pc = 0x26FFA4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x26AE98u;
    {
        const uint32_t __entryPc = ctx->pc;
        CameraNewPos_0x26ae98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26FFA8u; }
    }
    if (ctx->pc != 0x26FFA8u) { return; }
    ctx->pc = 0x26FFA8u;
    // 0x26ffa8: 0x3c030034
    ctx->pc = 0x26ffa8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26ffac: 0x2402ffff
    ctx->pc = 0x26ffacu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26ffb0: 0xac62f930
    ctx->pc = 0x26ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965552), GPR_U32(ctx, 2));
    // 0x26ffb4: 0x3c02003c
    ctx->pc = 0x26ffb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x26ffb8: 0xac4039c0
    ctx->pc = 0x26ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14784), GPR_U32(ctx, 0));
    // 0x26ffbc: 0x3c020032
    ctx->pc = 0x26ffbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x26ffc0: 0xac400808
    ctx->pc = 0x26ffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2056), GPR_U32(ctx, 0));
    // 0x26ffc4: 0xae200090
    ctx->pc = 0x26ffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x26ffc8: 0xae200094
    ctx->pc = 0x26ffc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x26ffcc: 0xae200098
    ctx->pc = 0x26ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x26ffd0: 0xae2000a0
    ctx->pc = 0x26ffd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x26ffd4: 0xae2000a4
    ctx->pc = 0x26ffd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x26ffd8: 0xae2000a8
    ctx->pc = 0x26ffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    // 0x26ffdc: 0x3c020034
    ctx->pc = 0x26ffdcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ffe0: 0xac40f9cc
    ctx->pc = 0x26ffe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965708), GPR_U32(ctx, 0));
    // 0x26ffe4: 0x3c020034
    ctx->pc = 0x26ffe4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x26ffe8: 0x8c42f8fc
    ctx->pc = 0x26ffe8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965500)));
    // 0x26ffec: 0x14400010
    ctx->pc = 0x26FFECu;
    {
        const bool branch_taken_0x26ffec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x26FFF0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x26ffec) {
            ctx->pc = 0x270030u;
            goto label_270030;
        }
    }
    ctx->pc = 0x26FFF4u;
    // 0x26fff4: 0x3c020033
    ctx->pc = 0x26fff4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x26fff8: 0x2443c7c8
    ctx->pc = 0x26fff8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294952904));
    // 0x26fffc: 0xc442c7c8
    ctx->pc = 0x26fffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270000: 0xe6220140
    ctx->pc = 0x270000u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
    // 0x270004: 0xc4610004
    ctx->pc = 0x270004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270008: 0xe6210144
    ctx->pc = 0x270008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x27000c: 0xc4600008
    ctx->pc = 0x27000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270010: 0xe6200148
    ctx->pc = 0x270010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x270014: 0xe6220170
    ctx->pc = 0x270014u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
    // 0x270018: 0xe6210174
    ctx->pc = 0x270018u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 372), bits); }
    // 0x27001c: 0xe6200178
    ctx->pc = 0x27001cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x270020: 0xe6220180
    ctx->pc = 0x270020u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x270024: 0xe6210184
    ctx->pc = 0x270024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
    // 0x270028: 0x10000003
    ctx->pc = 0x270028u;
    {
        const bool branch_taken_0x270028 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x27002Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
        if (branch_taken_0x270028) {
            ctx->pc = 0x270038u;
            goto label_270038;
        }
    }
    ctx->pc = 0x270030u;
label_270030:
    // 0x270030: 0xc09a106
    ctx->pc = 0x270030u;
    SET_GPR_U32(ctx, 31, 0x270038u);
    ctx->pc = 0x270034u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x268418u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_attn_pos_0x268418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270038u; }
    }
    if (ctx->pc != 0x270038u) { return; }
    ctx->pc = 0x270038u;
label_270038:
    // 0x270038: 0x3c100034
    ctx->pc = 0x270038u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x27003c: 0x3c030034
    ctx->pc = 0x27003cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x270040: 0x2463e9c0
    ctx->pc = 0x270040u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294961600));
    // 0x270044: 0x3c020034
    ctx->pc = 0x270044u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270048: 0x8c42f8f0
    ctx->pc = 0x270048u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965488)));
    // 0x27004c: 0x21080
    ctx->pc = 0x27004cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x270050: 0x431021
    ctx->pc = 0x270050u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x270054: 0xc4400000
    ctx->pc = 0x270054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270058: 0xe600f8f4
    ctx->pc = 0x270058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294965492), bits); }
    // 0x27005c: 0x3c020034
    ctx->pc = 0x27005cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270060: 0x8c42f914
    ctx->pc = 0x270060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965524)));
    // 0x270064: 0x1040000e
    ctx->pc = 0x270064u;
    {
        const bool branch_taken_0x270064 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x270068u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x270064) {
            ctx->pc = 0x2700A0u;
            goto label_2700a0;
        }
    }
    ctx->pc = 0x27006Cu;
    // 0x27006c: 0x8c428b74
    ctx->pc = 0x27006cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937460)));
    // 0x270070: 0xa4400002
    ctx->pc = 0x270070u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x270074: 0x3c013f00
    ctx->pc = 0x270074u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x270078: 0x44816000
    ctx->pc = 0x270078u;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x27007c: 0xc09bb2e
    ctx->pc = 0x27007Cu;
    SET_GPR_U32(ctx, 31, 0x270084u);
    ctx->pc = 0x270080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26ECB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        receive_yaw_0x26ecb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270084u; }
    }
    if (ctx->pc != 0x270084u) { return; }
    ctx->pc = 0x270084u;
    // 0x270084: 0x3c03003c
    ctx->pc = 0x270084u;
    SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
    // 0x270088: 0x3c020034
    ctx->pc = 0x270088u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27008c: 0xc440f8f8
    ctx->pc = 0x27008cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270090: 0xe46038f0
    ctx->pc = 0x270090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 14576), bits); }
    // 0x270094: 0xe62000b0
    ctx->pc = 0x270094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x270098: 0xc600f8f4
    ctx->pc = 0x270098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294965492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27009c: 0xe62000b4
    ctx->pc = 0x27009cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
label_2700a0:
    // 0x2700a0: 0x240202d
    ctx->pc = 0x2700a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2700a4: 0xc09ab02
    ctx->pc = 0x2700A4u;
    SET_GPR_U32(ctx, 31, 0x2700ACu);
    ctx->pc = 0x2700A8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x26AC08u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_rotation_for_multiplayer_0x26ac08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700ACu; }
    }
    if (ctx->pc != 0x2700ACu) { return; }
    ctx->pc = 0x2700ACu;
    // 0x2700ac: 0xc09a972
    ctx->pc = 0x2700ACu;
    SET_GPR_U32(ctx, 31, 0x2700B4u);
    ctx->pc = 0x2700B0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26A5C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_cam_wpos_0x26a5c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700B4u; }
    }
    if (ctx->pc != 0x2700B4u) { return; }
    ctx->pc = 0x2700B4u;
    // 0x2700b4: 0x3c02003c
    ctx->pc = 0x2700b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x2700b8: 0x8c4238d4
    ctx->pc = 0x2700b8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 14548)));
    // 0x2700bc: 0x10400004
    ctx->pc = 0x2700BCu;
    {
        const bool branch_taken_0x2700bc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2700C0u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 112));
        if (branch_taken_0x2700bc) {
            ctx->pc = 0x2700D0u;
            goto label_2700d0;
        }
    }
    ctx->pc = 0x2700C4u;
    // 0x2700c4: 0x26240140
    ctx->pc = 0x2700c4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 320));
    // 0x2700c8: 0xc099c08
    ctx->pc = 0x2700C8u;
    SET_GPR_U32(ctx, 31, 0x2700D0u);
    ctx->pc = 0x2700CCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x267020u;
    {
        const uint32_t __entryPc = ctx->pc;
        fix_radius_0x267020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2700D0u; }
    }
    if (ctx->pc != 0x2700D0u) { return; }
    ctx->pc = 0x2700D0u;
label_2700d0:
    // 0x2700d0: 0xc6200070
    ctx->pc = 0x2700d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2700d4: 0xe6200190
    ctx->pc = 0x2700d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 400), bits); }
    // 0x2700d8: 0xc6200074
    ctx->pc = 0x2700d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2700dc: 0xe6200194
    ctx->pc = 0x2700dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 404), bits); }
    // 0x2700e0: 0xc6200078
    ctx->pc = 0x2700e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2700e4: 0xe6200198
    ctx->pc = 0x2700e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 408), bits); }
    // 0x2700e8: 0xc6200140
    ctx->pc = 0x2700e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2700ec: 0xe6200170
    ctx->pc = 0x2700ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 368), bits); }
    // 0x2700f0: 0xc6200144
    ctx->pc = 0x2700f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2700f4: 0xe6200174
    ctx->pc = 0x2700f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 372), bits); }
    // 0x2700f8: 0xc6200148
    ctx->pc = 0x2700f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2700fc: 0xe6200178
    ctx->pc = 0x2700fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 376), bits); }
    // 0x270100: 0x240202d
    ctx->pc = 0x270100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270104: 0xc09a760
    ctx->pc = 0x270104u;
    SET_GPR_U32(ctx, 31, 0x27010Cu);
    ctx->pc = 0x270108u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27010Cu; }
    }
    if (ctx->pc != 0x27010Cu) { return; }
    ctx->pc = 0x27010Cu;
    // 0x27010c: 0x24020001
    ctx->pc = 0x27010cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x270110: 0xae220000
    ctx->pc = 0x270110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x270114: 0x24120001
    ctx->pc = 0x270114u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x270118: 0x3c100034
    ctx->pc = 0x270118u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x27011c: 0x2610eb60
    ctx->pc = 0x27011cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294962016));
    // 0x270120: 0x261101a0
    ctx->pc = 0x270120u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 416));
    // 0x270124: 0x24040001
    ctx->pc = 0x270124u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x270128: 0x24050004
    ctx->pc = 0x270128u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4));
    // 0x27012c: 0xc099c34
    ctx->pc = 0x27012Cu;
    SET_GPR_U32(ctx, 31, 0x270134u);
    ctx->pc = 0x270130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270134u; }
    }
    if (ctx->pc != 0x270134u) { return; }
    ctx->pc = 0x270134u;
    // 0x270134: 0xae2000d4
    ctx->pc = 0x270134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
    // 0x270138: 0xc09ac5a
    ctx->pc = 0x270138u;
    SET_GPR_U32(ctx, 31, 0x270140u);
    ctx->pc = 0x27013Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x26B168u;
    {
        const uint32_t __entryPc = ctx->pc;
        NextPlayer_0x26b168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270140u; }
    }
    if (ctx->pc != 0x270140u) { return; }
    ctx->pc = 0x270140u;
    // 0x270140: 0xae220100
    ctx->pc = 0x270140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 2));
    // 0x270144: 0xae1201a0
    ctx->pc = 0x270144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 18));
    // 0x270148: 0x24120002
    ctx->pc = 0x270148u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 2));
    // 0x27014c: 0x3c020031
    ctx->pc = 0x27014cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x270150: 0x8c430018
    ctx->pc = 0x270150u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x270154: 0x34028006
    ctx->pc = 0x270154u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32774));
    // 0x270158: 0x1062000a
    ctx->pc = 0x270158u;
    {
        const bool branch_taken_0x270158 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x27015Cu;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 832));
        if (branch_taken_0x270158) {
            ctx->pc = 0x270184u;
            goto label_270184;
        }
    }
    ctx->pc = 0x270160u;
    // 0x270160: 0x34028003
    ctx->pc = 0x270160u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32771));
    // 0x270164: 0x50620008
    ctx->pc = 0x270164u;
    {
        const bool branch_taken_0x270164 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x270164) {
            ctx->pc = 0x270168u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x270188u;
            goto label_270188;
        }
    }
    ctx->pc = 0x27016Cu;
    // 0x27016c: 0x56800006
    ctx->pc = 0x27016Cu;
    {
        const bool branch_taken_0x27016c = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x27016c) {
            ctx->pc = 0x270170u;
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x270188u;
            goto label_270188;
        }
    }
    ctx->pc = 0x270174u;
    // 0x270174: 0x3c020034
    ctx->pc = 0x270174u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x270178: 0x8c428b74
    ctx->pc = 0x270178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937460)));
    // 0x27017c: 0x14400005
    ctx->pc = 0x27017Cu;
    {
        const bool branch_taken_0x27017c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x270180u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x27017c) {
            ctx->pc = 0x270194u;
            goto label_270194;
        }
    }
    ctx->pc = 0x270184u;
label_270184:
    // 0x270184: 0xae200000
    ctx->pc = 0x270184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_270188:
    // 0x270188: 0x3c020034
    ctx->pc = 0x270188u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27018c: 0x1000008d
    ctx->pc = 0x27018Cu;
    {
        const bool branch_taken_0x27018c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x270190u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294964512), GPR_U32(ctx, 0));
        if (branch_taken_0x27018c) {
            ctx->pc = 0x2703C4u;
            goto label_2703c4;
        }
    }
    ctx->pc = 0x270194u;
label_270194:
    // 0x270194: 0x8c428b74
    ctx->pc = 0x270194u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294937460)));
    // 0x270198: 0xc4400010
    ctx->pc = 0x270198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27019c: 0xe6200070
    ctx->pc = 0x27019cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x2701a0: 0xc4400014
    ctx->pc = 0x2701a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2701a4: 0xe6200074
    ctx->pc = 0x2701a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x2701a8: 0xc4400018
    ctx->pc = 0x2701a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2701ac: 0xe6200078
    ctx->pc = 0x2701acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x2701b0: 0xc4410020
    ctx->pc = 0x2701b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2701b4: 0xe62100b0
    ctx->pc = 0x2701b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x2701b8: 0xc4420024
    ctx->pc = 0x2701b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2701bc: 0xe62200b4
    ctx->pc = 0x2701bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x2701c0: 0xc4400028
    ctx->pc = 0x2701c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2701c4: 0xe62000b8
    ctx->pc = 0x2701c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
    // 0x2701c8: 0x46000847
    ctx->pc = 0x2701c8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2701cc: 0xe62100b0
    ctx->pc = 0x2701ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x2701d0: 0x3c014049
    ctx->pc = 0x2701d0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x2701d4: 0x34210fdb
    ctx->pc = 0x2701d4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2701d8: 0x44810000
    ctx->pc = 0x2701d8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2701dc: 0x46001080
    ctx->pc = 0x2701dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2701e0: 0x46020034
    ctx->pc = 0x2701e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2701e4: 0x0
    ctx->pc = 0x2701e4u;
    // NOP
    // 0x2701e8: 0x45000006
    ctx->pc = 0x2701E8u;
    {
        const bool branch_taken_0x2701e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2701ECu;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
        if (branch_taken_0x2701e8) {
            ctx->pc = 0x270204u;
            goto label_270204;
        }
    }
    ctx->pc = 0x2701F0u;
    // 0x2701f0: 0x3c0140c9
    ctx->pc = 0x2701f0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x2701f4: 0x34210fdb
    ctx->pc = 0x2701f4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x2701f8: 0x44810000
    ctx->pc = 0x2701f8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2701fc: 0x1000000d
    ctx->pc = 0x2701FCu;
    {
        const bool branch_taken_0x2701fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x270200u;
        ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x2701fc) {
            ctx->pc = 0x270234u;
            goto label_270234;
        }
    }
    ctx->pc = 0x270204u;
label_270204:
    // 0x270204: 0xc62200b4
    ctx->pc = 0x270204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270208: 0x3c01c049
    ctx->pc = 0x270208u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x27020c: 0x34210fdb
    ctx->pc = 0x27020cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x270210: 0x44810000
    ctx->pc = 0x270210u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x270214: 0x46001036
    ctx->pc = 0x270214u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270218: 0x0
    ctx->pc = 0x270218u;
    // NOP
    // 0x27021c: 0x45020006
    ctx->pc = 0x27021Cu;
    {
        const bool branch_taken_0x27021c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27021c) {
            ctx->pc = 0x270220u;
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
            ctx->pc = 0x270238u;
            goto label_270238;
        }
    }
    ctx->pc = 0x270224u;
    // 0x270224: 0x3c0140c9
    ctx->pc = 0x270224u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x270228: 0x34210fdb
    ctx->pc = 0x270228u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x27022c: 0x44810000
    ctx->pc = 0x27022cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x270230: 0x46001080
    ctx->pc = 0x270230u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_270234:
    // 0x270234: 0xe62200b4
    ctx->pc = 0x270234u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
label_270238:
    // 0x270238: 0x27a40070
    ctx->pc = 0x270238u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 112));
    // 0x27023c: 0xc0b5ae8
    ctx->pc = 0x27023Cu;
    SET_GPR_U32(ctx, 31, 0x270244u);
    ctx->pc = 0x270240u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 176));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270244u; }
    }
    if (ctx->pc != 0x270244u) { return; }
    ctx->pc = 0x270244u;
    // 0x270244: 0x3c020033
    ctx->pc = 0x270244u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x270248: 0x2443c7c8
    ctx->pc = 0x270248u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294952904));
    // 0x27024c: 0xc6210070
    ctx->pc = 0x27024cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270250: 0xc440c7c8
    ctx->pc = 0x270250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270254: 0x46000b01
    ctx->pc = 0x270254u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x270258: 0xe7ac00b0
    ctx->pc = 0x270258u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x27025c: 0xc6220074
    ctx->pc = 0x27025cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270260: 0xc4600004
    ctx->pc = 0x270260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270264: 0x46001081
    ctx->pc = 0x270264u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x270268: 0xe7a200b4
    ctx->pc = 0x270268u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x27026c: 0xc6210078
    ctx->pc = 0x27026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270270: 0xc4600008
    ctx->pc = 0x270270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270274: 0x46000841
    ctx->pc = 0x270274u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x270278: 0xe7a100b8
    ctx->pc = 0x270278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x27027c: 0x460c6002
    ctx->pc = 0x27027cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x270280: 0x46021082
    ctx->pc = 0x270280u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x270284: 0x46020000
    ctx->pc = 0x270284u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x270288: 0x46010842
    ctx->pc = 0x270288u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x27028c: 0x46010000
    ctx->pc = 0x27028cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270290: 0x0
    ctx->pc = 0x270290u;
    // NOP
    // 0x270294: 0x0
    ctx->pc = 0x270294u;
    // NOP
    // 0x270298: 0x46000004
    ctx->pc = 0x270298u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x27029c: 0x46000032
    ctx->pc = 0x27029cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2702a0: 0x0
    ctx->pc = 0x2702a0u;
    // NOP
    // 0x2702a4: 0x45030006
    ctx->pc = 0x2702A4u;
    {
        const bool branch_taken_0x2702a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2702a4) {
            ctx->pc = 0x2702A8u;
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
            ctx->pc = 0x2702C0u;
            goto label_2702c0;
        }
    }
    ctx->pc = 0x2702ACu;
    // 0x2702ac: 0x460c6302
    ctx->pc = 0x2702acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x2702b0: 0x46026300
    ctx->pc = 0x2702b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x2702b4: 0xc0ba284
    ctx->pc = 0x2702B4u;
    SET_GPR_U32(ctx, 31, 0x2702BCu);
    ctx->pc = 0x2702B8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2702BCu; }
    }
    if (ctx->pc != 0x2702BCu) { return; }
    ctx->pc = 0x2702BCu;
    // 0x2702bc: 0xe62000d0
    ctx->pc = 0x2702bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
label_2702c0:
    // 0x2702c0: 0xafa00040
    ctx->pc = 0x2702c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2702c4: 0xafa00044
    ctx->pc = 0x2702c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2702c8: 0xc62000d0
    ctx->pc = 0x2702c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2702cc: 0xe7a00048
    ctx->pc = 0x2702ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2702d0: 0x27a40040
    ctx->pc = 0x2702d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x2702d4: 0x27a50060
    ctx->pc = 0x2702d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x2702d8: 0xc0b57a2
    ctx->pc = 0x2702D8u;
    SET_GPR_U32(ctx, 31, 0x2702E0u);
    ctx->pc = 0x2702DCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 112));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2702E0u; }
    }
    if (ctx->pc != 0x2702E0u) { return; }
    ctx->pc = 0x2702E0u;
    // 0x2702e0: 0xc6200070
    ctx->pc = 0x2702e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2702e4: 0xc7a10060
    ctx->pc = 0x2702e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2702e8: 0x46010000
    ctx->pc = 0x2702e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2702ec: 0xe6200140
    ctx->pc = 0x2702ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
    // 0x2702f0: 0xc6200074
    ctx->pc = 0x2702f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2702f4: 0xc7a10064
    ctx->pc = 0x2702f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2702f8: 0x46010000
    ctx->pc = 0x2702f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2702fc: 0xe6200144
    ctx->pc = 0x2702fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x270300: 0xc6200078
    ctx->pc = 0x270300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270304: 0xc7a10068
    ctx->pc = 0x270304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270308: 0x46010000
    ctx->pc = 0x270308u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27030c: 0xe6200148
    ctx->pc = 0x27030cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x270310: 0xc62000b4
    ctx->pc = 0x270310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270314: 0x3c014049
    ctx->pc = 0x270314u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x270318: 0x34210fdb
    ctx->pc = 0x270318u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x27031c: 0x44810800
    ctx->pc = 0x27031cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x270320: 0x46010080
    ctx->pc = 0x270320u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270324: 0x46020834
    ctx->pc = 0x270324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270328: 0x0
    ctx->pc = 0x270328u;
    // NOP
    // 0x27032c: 0x45000006
    ctx->pc = 0x27032Cu;
    {
        const bool branch_taken_0x27032c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270330u;
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
        if (branch_taken_0x27032c) {
            ctx->pc = 0x270348u;
            goto label_270348;
        }
    }
    ctx->pc = 0x270334u;
    // 0x270334: 0x3c0140c9
    ctx->pc = 0x270334u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x270338: 0x34210fdb
    ctx->pc = 0x270338u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x27033c: 0x44810000
    ctx->pc = 0x27033cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x270340: 0x1000000d
    ctx->pc = 0x270340u;
    {
        const bool branch_taken_0x270340 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x270344u;
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        if (branch_taken_0x270340) {
            ctx->pc = 0x270378u;
            goto label_270378;
        }
    }
    ctx->pc = 0x270348u;
label_270348:
    // 0x270348: 0xc62100b4
    ctx->pc = 0x270348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27034c: 0x3c01c049
    ctx->pc = 0x27034cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x270350: 0x34210fdb
    ctx->pc = 0x270350u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x270354: 0x44810000
    ctx->pc = 0x270354u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x270358: 0x46000836
    ctx->pc = 0x270358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27035c: 0x0
    ctx->pc = 0x27035cu;
    // NOP
    // 0x270360: 0x45020005
    ctx->pc = 0x270360u;
    {
        const bool branch_taken_0x270360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x270360) {
            ctx->pc = 0x270364u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x270378u;
            goto label_270378;
        }
    }
    ctx->pc = 0x270368u;
    // 0x270368: 0x3c0140c9
    ctx->pc = 0x270368u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x27036c: 0x34210fdb
    ctx->pc = 0x27036cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x270370: 0x44810000
    ctx->pc = 0x270370u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x270374: 0x46000800
    ctx->pc = 0x270374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_270378:
    // 0x270378: 0xe62000b4
    ctx->pc = 0x270378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x27037c: 0x240202d
    ctx->pc = 0x27037cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270380: 0x24050002
    ctx->pc = 0x270380u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x270384: 0xc099c34
    ctx->pc = 0x270384u;
    SET_GPR_U32(ctx, 31, 0x27038Cu);
    ctx->pc = 0x270388u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27038Cu; }
    }
    if (ctx->pc != 0x27038Cu) { return; }
    ctx->pc = 0x27038Cu;
    // 0x27038c: 0xae2000d4
    ctx->pc = 0x27038cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
    // 0x270390: 0x240202d
    ctx->pc = 0x270390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270394: 0xc09a760
    ctx->pc = 0x270394u;
    SET_GPR_U32(ctx, 31, 0x27039Cu);
    ctx->pc = 0x270398u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 320));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27039Cu; }
    }
    if (ctx->pc != 0x27039Cu) { return; }
    ctx->pc = 0x27039Cu;
    // 0x27039c: 0x3c030032
    ctx->pc = 0x27039cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x2703a0: 0x2402005b
    ctx->pc = 0x2703a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 91));
    // 0x2703a4: 0xac620808
    ctx->pc = 0x2703a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2056), GPR_U32(ctx, 2));
    // 0x2703a8: 0x3c020032
    ctx->pc = 0x2703a8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2703ac: 0x24100001
    ctx->pc = 0x2703acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2703b0: 0xc09adc4
    ctx->pc = 0x2703B0u;
    SET_GPR_U32(ctx, 31, 0x2703B8u);
    ctx->pc = 0x2703B4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2060), GPR_U32(ctx, 16));
    ctx->pc = 0x26B710u;
    {
        const uint32_t __entryPc = ctx->pc;
        init_stage_info_0x26b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2703B8u; }
    }
    if (ctx->pc != 0x2703B8u) { return; }
    ctx->pc = 0x2703B8u;
    // 0x2703b8: 0x3c020034
    ctx->pc = 0x2703b8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2703bc: 0xac52f520
    ctx->pc = 0x2703bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964512), GPR_U32(ctx, 18));
    // 0x2703c0: 0xae300000
    ctx->pc = 0x2703c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_2703c4:
    // 0x2703c4: 0x3c100034
    ctx->pc = 0x2703c4u;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x2703c8: 0x2610eb60
    ctx->pc = 0x2703c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294962016));
    // 0x2703cc: 0x261104e0
    ctx->pc = 0x2703ccu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 1248));
    // 0x2703d0: 0x24040003
    ctx->pc = 0x2703d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2703d4: 0x24050005
    ctx->pc = 0x2703d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 5));
    // 0x2703d8: 0xc099c34
    ctx->pc = 0x2703D8u;
    SET_GPR_U32(ctx, 31, 0x2703E0u);
    ctx->pc = 0x2703DCu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2670D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        set_camera_mode_0x2670d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2703E0u; }
    }
    if (ctx->pc != 0x2703E0u) { return; }
    ctx->pc = 0x2703E0u;
    // 0x2703e0: 0xae2000d4
    ctx->pc = 0x2703e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
    // 0x2703e4: 0xae200090
    ctx->pc = 0x2703e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 0));
    // 0x2703e8: 0xae200094
    ctx->pc = 0x2703e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    // 0x2703ec: 0xae200098
    ctx->pc = 0x2703ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
    // 0x2703f0: 0xae2000a0
    ctx->pc = 0x2703f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x2703f4: 0xae2000a4
    ctx->pc = 0x2703f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
    // 0x2703f8: 0xae2000a8
    ctx->pc = 0x2703f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    // 0x2703fc: 0xc6000140
    ctx->pc = 0x2703fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270400: 0xe6200140
    ctx->pc = 0x270400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
    // 0x270404: 0xc6000144
    ctx->pc = 0x270404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270408: 0xe6200144
    ctx->pc = 0x270408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
    // 0x27040c: 0xc6000148
    ctx->pc = 0x27040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270410: 0xe6200148
    ctx->pc = 0x270410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 328), bits); }
    // 0x270414: 0x3c0142a0
    ctx->pc = 0x270414u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17056 << 16));
    // 0x270418: 0x44810000
    ctx->pc = 0x270418u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27041c: 0xe62000d0
    ctx->pc = 0x27041cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 208), bits); }
    // 0x270420: 0x3c013f91
    ctx->pc = 0x270420u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16273 << 16));
    // 0x270424: 0x3421361e
    ctx->pc = 0x270424u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 13854));
    // 0x270428: 0x44810000
    ctx->pc = 0x270428u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x27042c: 0xe62000b0
    ctx->pc = 0x27042cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x270430: 0xae2000b4
    ctx->pc = 0x270430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x270434: 0xae2000b8
    ctx->pc = 0x270434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
    // 0x270438: 0x3a0202d
    ctx->pc = 0x270438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27043c: 0xc0b5ae8
    ctx->pc = 0x27043Cu;
    SET_GPR_U32(ctx, 31, 0x270444u);
    ctx->pc = 0x270440u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 1424));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270444u; }
    }
    if (ctx->pc != 0x270444u) { return; }
    ctx->pc = 0x270444u;
    // 0x270444: 0xafa00040
    ctx->pc = 0x270444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x270448: 0xafa00044
    ctx->pc = 0x270448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x27044c: 0xc62000d0
    ctx->pc = 0x27044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270450: 0xe7a00048
    ctx->pc = 0x270450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x270454: 0x27a40040
    ctx->pc = 0x270454u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 29), 64));
    // 0x270458: 0x27a50060
    ctx->pc = 0x270458u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 96));
    // 0x27045c: 0xc0b57a2
    ctx->pc = 0x27045Cu;
    SET_GPR_U32(ctx, 31, 0x270464u);
    ctx->pc = 0x270460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D5E88u;
    {
        const uint32_t __entryPc = ctx->pc;
        WorldVector_0x2d5e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270464u; }
    }
    if (ctx->pc != 0x270464u) { return; }
    ctx->pc = 0x270464u;
    // 0x270464: 0xc6200140
    ctx->pc = 0x270464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270468: 0xc7a10060
    ctx->pc = 0x270468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27046c: 0x46010000
    ctx->pc = 0x27046cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270470: 0xe6200070
    ctx->pc = 0x270470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x270474: 0xc6200144
    ctx->pc = 0x270474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270478: 0xc7a10064
    ctx->pc = 0x270478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27047c: 0x46010000
    ctx->pc = 0x27047cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270480: 0xe6200074
    ctx->pc = 0x270480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
    // 0x270484: 0xc6200148
    ctx->pc = 0x270484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270488: 0xc7a10068
    ctx->pc = 0x270488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27048c: 0x46010000
    ctx->pc = 0x27048cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x270490: 0xe6200078
    ctx->pc = 0x270490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x270494: 0x24040003
    ctx->pc = 0x270494u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x270498: 0xc09a760
    ctx->pc = 0x270498u;
    SET_GPR_U32(ctx, 31, 0x2704A0u);
    ctx->pc = 0x27049Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 1568));
    ctx->pc = 0x269D80u;
    {
        const uint32_t __entryPc = ctx->pc;
        cam_orient_to_0x269d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2704A0u; }
    }
    if (ctx->pc != 0x2704A0u) { return; }
    ctx->pc = 0x2704A0u;
    // 0x2704a0: 0x24020001
    ctx->pc = 0x2704a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2704a4: 0xae0204e0
    ctx->pc = 0x2704a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1248), GPR_U32(ctx, 2));
    // 0x2704a8: 0x902d
    ctx->pc = 0x2704a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2704ac: 0x241301a0
    ctx->pc = 0x2704acu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 416));
    // 0x2704b0: 0x3c020034
    ctx->pc = 0x2704b0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x2704b4: 0x2450eb60
    ctx->pc = 0x2704b4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294962016));
label_2704b8:
    // 0x2704b8: 0x2531018
    ctx->pc = 0x2704b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2704bc: 0x508821
    ctx->pc = 0x2704bcu;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2704c0: 0x240202d
    ctx->pc = 0x2704c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2704c4: 0xc099c48
    ctx->pc = 0x2704C4u;
    SET_GPR_U32(ctx, 31, 0x2704CCu);
    ctx->pc = 0x2704C8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x267120u;
    {
        const uint32_t __entryPc = ctx->pc;
        ProcCamera_0x267120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2704CCu; }
    }
    if (ctx->pc != 0x2704CCu) { return; }
    ctx->pc = 0x2704CCu;
    // 0x2704cc: 0xc6200040
    ctx->pc = 0x2704ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2704d0: 0xe6200050
    ctx->pc = 0x2704d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x2704d4: 0xc6200044
    ctx->pc = 0x2704d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2704d8: 0xe6200054
    ctx->pc = 0x2704d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x2704dc: 0xc6200048
    ctx->pc = 0x2704dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2704e0: 0xe6200058
    ctx->pc = 0x2704e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 88), bits); }
    // 0x2704e4: 0xae200060
    ctx->pc = 0x2704e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x2704e8: 0xae200064
    ctx->pc = 0x2704e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 0));
    // 0x2704ec: 0x26520001
    ctx->pc = 0x2704ecu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
    // 0x2704f0: 0x2a420004
    ctx->pc = 0x2704f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x2704f4: 0x1440fff0
    ctx->pc = 0x2704F4u;
    {
        const bool branch_taken_0x2704f4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2704F8u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        if (branch_taken_0x2704f4) {
            ctx->pc = 0x2704B8u;
            goto label_2704b8;
        }
    }
    ctx->pc = 0x2704FCu;
    // 0x2704fc: 0xdfbf0110
    ctx->pc = 0x2704fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x270500: 0xdfb40100
    ctx->pc = 0x270500u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x270504: 0xdfb300f0
    ctx->pc = 0x270504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x270508: 0xdfb200e0
    ctx->pc = 0x270508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27050c: 0xdfb100d0
    ctx->pc = 0x27050cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x270510: 0xdfb000c0
    ctx->pc = 0x270510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x270514: 0x3e00008
    ctx->pc = 0x270514u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270518u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26FE60u: goto label_26fe60;
            case 0x26FE7Cu: goto label_26fe7c;
            case 0x26FF34u: goto label_26ff34;
            case 0x270030u: goto label_270030;
            case 0x270038u: goto label_270038;
            case 0x2700A0u: goto label_2700a0;
            case 0x2700D0u: goto label_2700d0;
            case 0x270184u: goto label_270184;
            case 0x270188u: goto label_270188;
            case 0x270194u: goto label_270194;
            case 0x270204u: goto label_270204;
            case 0x270234u: goto label_270234;
            case 0x270238u: goto label_270238;
            case 0x2702C0u: goto label_2702c0;
            case 0x270348u: goto label_270348;
            case 0x270378u: goto label_270378;
            case 0x2703C4u: goto label_2703c4;
            case 0x2704B8u: goto label_2704b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27051Cu;
}
