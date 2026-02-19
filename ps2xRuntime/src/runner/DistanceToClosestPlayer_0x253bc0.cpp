#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DistanceToClosestPlayer
// Address: 0x253bc0 - 0x253d74
void DistanceToClosestPlayer_0x253bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x253bc0u;

    // 0x253bc0: 0x27bdff90
    ctx->pc = 0x253bc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x253bc4: 0xffbf0050
    ctx->pc = 0x253bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x253bc8: 0xffb30040
    ctx->pc = 0x253bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x253bcc: 0xffb20030
    ctx->pc = 0x253bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x253bd0: 0xffb10020
    ctx->pc = 0x253bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x253bd4: 0xffb00010
    ctx->pc = 0x253bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x253bd8: 0xe7b40060
    ctx->pc = 0x253bd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x253bdc: 0x3c01447a
    ctx->pc = 0x253bdcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17530 << 16));
    // 0x253be0: 0x4481a000
    ctx->pc = 0x253be0u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x253be4: 0x3c020031
    ctx->pc = 0x253be4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x253be8: 0x8c430018
    ctx->pc = 0x253be8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x253bec: 0x34028008
    ctx->pc = 0x253becu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 32776));
    // 0x253bf0: 0x1462002f
    ctx->pc = 0x253BF0u;
    {
        const bool branch_taken_0x253bf0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x253BF4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x253bf0) {
            ctx->pc = 0x253CB0u;
            goto label_253cb0;
        }
    }
    ctx->pc = 0x253BF8u;
    // 0x253bf8: 0x3c020034
    ctx->pc = 0x253bf8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x253bfc: 0x2442eb60
    ctx->pc = 0x253bfcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x253c00: 0xc4410040
    ctx->pc = 0x253c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253c04: 0xc6200000
    ctx->pc = 0x253c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253c08: 0x46000b01
    ctx->pc = 0x253c08u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253c0c: 0xe7ac0000
    ctx->pc = 0x253c0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x253c10: 0xc4420044
    ctx->pc = 0x253c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253c14: 0xc6200004
    ctx->pc = 0x253c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253c18: 0x46001081
    ctx->pc = 0x253c18u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x253c1c: 0xe7a20004
    ctx->pc = 0x253c1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x253c20: 0xc4410048
    ctx->pc = 0x253c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253c24: 0xc6200008
    ctx->pc = 0x253c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253c28: 0x46000841
    ctx->pc = 0x253c28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253c2c: 0xe7a10008
    ctx->pc = 0x253c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x253c30: 0x460c6002
    ctx->pc = 0x253c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x253c34: 0x46021082
    ctx->pc = 0x253c34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x253c38: 0x46020000
    ctx->pc = 0x253c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x253c3c: 0x46010842
    ctx->pc = 0x253c3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x253c40: 0x46010000
    ctx->pc = 0x253c40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x253c44: 0x0
    ctx->pc = 0x253c44u;
    // NOP
    // 0x253c48: 0x0
    ctx->pc = 0x253c48u;
    // NOP
    // 0x253c4c: 0x460000c4
    ctx->pc = 0x253c4cu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x253c50: 0x46031832
    ctx->pc = 0x253c50u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253c54: 0x45010006
    ctx->pc = 0x253C54u;
    {
        const bool branch_taken_0x253c54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253c54) {
            ctx->pc = 0x253C70u;
            goto label_253c70;
        }
    }
    ctx->pc = 0x253C5Cu;
    // 0x253c5c: 0x460c6302
    ctx->pc = 0x253c5cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x253c60: 0x46026300
    ctx->pc = 0x253c60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
    // 0x253c64: 0xc0ba284
    ctx->pc = 0x253C64u;
    SET_GPR_U32(ctx, 31, 0x253C6Cu);
    ctx->pc = 0x253C68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253C6Cu; }
    }
    if (ctx->pc != 0x253C6Cu) { return; }
    ctx->pc = 0x253C6Cu;
    // 0x253c6c: 0x460000c6
    ctx->pc = 0x253c6cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_253c70:
    // 0x253c70: 0x3c0142c8
    ctx->pc = 0x253c70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x253c74: 0x44810000
    ctx->pc = 0x253c74u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x253c78: 0x46001834
    ctx->pc = 0x253c78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253c7c: 0x0
    ctx->pc = 0x253c7cu;
    // NOP
    // 0x253c80: 0x45000034
    ctx->pc = 0x253C80u;
    {
        const bool branch_taken_0x253c80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x253C84u;
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x253c80) {
            ctx->pc = 0x253D54u;
            goto label_253d54;
        }
    }
    ctx->pc = 0x253C88u;
    // 0x253c88: 0x3c014000
    ctx->pc = 0x253c88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16384 << 16));
    // 0x253c8c: 0x44816000
    ctx->pc = 0x253c8cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x253c90: 0xc0b1084
    ctx->pc = 0x253C90u;
    SET_GPR_U32(ctx, 31, 0x253C98u);
    ctx->pc = 0x253C94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C4210u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBWorldSphereVisible_0x2c4210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253C98u; }
    }
    if (ctx->pc != 0x253C98u) { return; }
    ctx->pc = 0x253C98u;
    // 0x253c98: 0x1040002e
    ctx->pc = 0x253C98u;
    {
        const bool branch_taken_0x253c98 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x253C9Cu;
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x253c98) {
            ctx->pc = 0x253D54u;
            goto label_253d54;
        }
    }
    ctx->pc = 0x253CA0u;
    // 0x253ca0: 0x3c014120
    ctx->pc = 0x253ca0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x253ca4: 0x4481a000
    ctx->pc = 0x253ca4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x253ca8: 0x1000002a
    ctx->pc = 0x253CA8u;
    {
        const bool branch_taken_0x253ca8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x253CACu;
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        if (branch_taken_0x253ca8) {
            ctx->pc = 0x253D54u;
            goto label_253d54;
        }
    }
    ctx->pc = 0x253CB0u;
label_253cb0:
    // 0x253cb0: 0x902d
    ctx->pc = 0x253cb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253cb4: 0x3c020032
    ctx->pc = 0x253cb4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x253cb8: 0x24501bc0
    ctx->pc = 0x253cb8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x253cbc: 0x24130001
    ctx->pc = 0x253cbcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 1));
label_253cc0:
    // 0x253cc0: 0x8e0200fc
    ctx->pc = 0x253cc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x253cc4: 0x5453001f
    ctx->pc = 0x253CC4u;
    {
        const bool branch_taken_0x253cc4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 19));
        if (branch_taken_0x253cc4) {
            ctx->pc = 0x253CC8u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x253D44u;
            goto label_253d44;
        }
    }
    ctx->pc = 0x253CCCu;
    // 0x253ccc: 0xc6030050
    ctx->pc = 0x253cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x253cd0: 0xc6200000
    ctx->pc = 0x253cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253cd4: 0x460018c1
    ctx->pc = 0x253cd4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x253cd8: 0xe7a30000
    ctx->pc = 0x253cd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x253cdc: 0xc6020054
    ctx->pc = 0x253cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x253ce0: 0xc6200004
    ctx->pc = 0x253ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253ce4: 0x46001081
    ctx->pc = 0x253ce4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x253ce8: 0xe7a20004
    ctx->pc = 0x253ce8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x253cec: 0xc6000058
    ctx->pc = 0x253cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253cf0: 0xc6210008
    ctx->pc = 0x253cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253cf4: 0x46010001
    ctx->pc = 0x253cf4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x253cf8: 0xe7a00008
    ctx->pc = 0x253cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x253cfc: 0x460318c2
    ctx->pc = 0x253cfcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x253d00: 0x46021082
    ctx->pc = 0x253d00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x253d04: 0x460218c0
    ctx->pc = 0x253d04u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x253d08: 0x46000002
    ctx->pc = 0x253d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x253d0c: 0x46001b00
    ctx->pc = 0x253d0cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x253d10: 0x0
    ctx->pc = 0x253d10u;
    // NOP
    // 0x253d14: 0x0
    ctx->pc = 0x253d14u;
    // NOP
    // 0x253d18: 0x460c0004
    ctx->pc = 0x253d18u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x253d1c: 0x46000032
    ctx->pc = 0x253d1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253d20: 0x45010003
    ctx->pc = 0x253D20u;
    {
        const bool branch_taken_0x253d20 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253d20) {
            ctx->pc = 0x253D30u;
            goto label_253d30;
        }
    }
    ctx->pc = 0x253D28u;
    // 0x253d28: 0xc0ba284
    ctx->pc = 0x253D28u;
    SET_GPR_U32(ctx, 31, 0x253D30u);
    ctx->pc = 0x2E8A10u;
    {
        const uint32_t __entryPc = ctx->pc;
        sqrtf_0x2e8a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x253D30u; }
    }
    if (ctx->pc != 0x253D30u) { return; }
    ctx->pc = 0x253D30u;
label_253d30:
    // 0x253d30: 0x46140034
    ctx->pc = 0x253d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253d34: 0x0
    ctx->pc = 0x253d34u;
    // NOP
    // 0x253d38: 0x45030001
    ctx->pc = 0x253D38u;
    {
        const bool branch_taken_0x253d38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253d38) {
            ctx->pc = 0x253D3Cu;
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->pc = 0x253D40u;
            goto label_253d40;
        }
    }
    ctx->pc = 0x253D40u;
label_253d40:
    // 0x253d40: 0x26520001
    ctx->pc = 0x253d40u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_253d44:
    // 0x253d44: 0x2a420004
    ctx->pc = 0x253d44u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 18), 4));
    // 0x253d48: 0x1440ffdd
    ctx->pc = 0x253D48u;
    {
        const bool branch_taken_0x253d48 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x253D4Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 11008));
        if (branch_taken_0x253d48) {
            ctx->pc = 0x253CC0u;
            goto label_253cc0;
        }
    }
    ctx->pc = 0x253D50u;
    // 0x253d50: 0x4600a006
    ctx->pc = 0x253d50u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_253d54:
    // 0x253d54: 0xdfbf0050
    ctx->pc = 0x253d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253d58: 0xdfb30040
    ctx->pc = 0x253d58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253d5c: 0xdfb20030
    ctx->pc = 0x253d5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253d60: 0xdfb10020
    ctx->pc = 0x253d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253d64: 0xdfb00010
    ctx->pc = 0x253d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253d68: 0xc7b40060
    ctx->pc = 0x253d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x253d6c: 0x3e00008
    ctx->pc = 0x253D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253D70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x253C70u: goto label_253c70;
            case 0x253CB0u: goto label_253cb0;
            case 0x253CC0u: goto label_253cc0;
            case 0x253D30u: goto label_253d30;
            case 0x253D40u: goto label_253d40;
            case 0x253D44u: goto label_253d44;
            case 0x253D54u: goto label_253d54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x253D74u;
}
