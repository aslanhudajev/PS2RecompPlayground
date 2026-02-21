#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: PlayerGetTarget
// Address: 0x2469e8 - 0x2470c4
void PlayerGetTarget_0x2469e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2469e8u;

    // 0x2469e8: 0x27bdfef0
    ctx->pc = 0x2469e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2469ec: 0xffbf00e0
    ctx->pc = 0x2469ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
    // 0x2469f0: 0xffbe00d0
    ctx->pc = 0x2469f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2469f4: 0xffb700c0
    ctx->pc = 0x2469f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
    // 0x2469f8: 0xffb600b0
    ctx->pc = 0x2469f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x2469fc: 0xffb500a0
    ctx->pc = 0x2469fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x246a00: 0xffb40090
    ctx->pc = 0x246a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x246a04: 0xffb30080
    ctx->pc = 0x246a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x246a08: 0xffb20070
    ctx->pc = 0x246a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x246a0c: 0xffb10060
    ctx->pc = 0x246a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x246a10: 0xffb00050
    ctx->pc = 0x246a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x246a14: 0xe7b60100
    ctx->pc = 0x246a14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x246a18: 0xe7b500f8
    ctx->pc = 0x246a18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x246a1c: 0xe7b400f0
    ctx->pc = 0x246a1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x246a20: 0x80a82d
    ctx->pc = 0x246a20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246a24: 0xa0902d
    ctx->pc = 0x246a24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246a28: 0xc0a02d
    ctx->pc = 0x246a28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246a2c: 0xafa8003c
    ctx->pc = 0x246a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 8));
    // 0x246a30: 0xafa90040
    ctx->pc = 0x246a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    // 0x246a34: 0x8d020000
    ctx->pc = 0x246a34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x246a38: 0xafa20030
    ctx->pc = 0x246a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x246a3c: 0x120102d
    ctx->pc = 0x246a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246a40: 0x10400004
    ctx->pc = 0x246A40u;
    {
        const bool branch_taken_0x246a40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x246A44u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x246a40) {
            ctx->pc = 0x246A54u;
            goto label_246a54;
        }
    }
    ctx->pc = 0x246A48u;
    // 0x246a48: 0x8c420000
    ctx->pc = 0x246a48u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246a4c: 0x10000002
    ctx->pc = 0x246A4Cu;
    {
        const bool branch_taken_0x246a4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x246A50u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        if (branch_taken_0x246a4c) {
            ctx->pc = 0x246A58u;
            goto label_246a58;
        }
    }
    ctx->pc = 0x246A54u;
label_246a54:
    // 0x246a54: 0xafa00038
    ctx->pc = 0x246a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_246a58:
    // 0x246a58: 0x3c0141f0
    ctx->pc = 0x246a58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16880 << 16));
    // 0x246a5c: 0x4481a800
    ctx->pc = 0x246a5cu;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x246a60: 0x3c020036
    ctx->pc = 0x246a60u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x246a64: 0x8c42d930
    ctx->pc = 0x246a64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x246a68: 0x10400004
    ctx->pc = 0x246A68u;
    {
        const bool branch_taken_0x246a68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x246A6Cu;
        ctx->f[22] = FPU_MOV_S(ctx->f[21]);
        if (branch_taken_0x246a68) {
            ctx->pc = 0x246A7Cu;
            goto label_246a7c;
        }
    }
    ctx->pc = 0x246A70u;
    // 0x246a70: 0x3c014348
    ctx->pc = 0x246a70u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17224 << 16));
    // 0x246a74: 0x4481a800
    ctx->pc = 0x246a74u;
    *(uint32_t*)&ctx->f[21] = GPR_U32(ctx, 1);
    // 0x246a78: 0x4600ad86
    ctx->pc = 0x246a78u;
    ctx->f[22] = FPU_MOV_S(ctx->f[21]);
label_246a7c:
    // 0x246a7c: 0x3402ffff
    ctx->pc = 0x246a7cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x246a80: 0x8fa40030
    ctx->pc = 0x246a80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246a84: 0x44102a
    ctx->pc = 0x246a84u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x246a88: 0x10400016
    ctx->pc = 0x246A88u;
    {
        const bool branch_taken_0x246a88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x246A8Cu;
        SET_GPR_U32(ctx, 4, AND32(GPR_U32(ctx, 4), 65535));
        if (branch_taken_0x246a88) {
            ctx->pc = 0x246AE4u;
            goto label_246ae4;
        }
    }
    ctx->pc = 0x246A90u;
    // 0x246a90: 0x24020b70
    ctx->pc = 0x246a90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2928));
    // 0x246a94: 0x822018
    ctx->pc = 0x246a94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x246a98: 0x3c020035
    ctx->pc = 0x246a98u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x246a9c: 0x24421dc0
    ctx->pc = 0x246a9cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7616));
    // 0x246aa0: 0x822021
    ctx->pc = 0x246aa0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x246aa4: 0xc4800060
    ctx->pc = 0x246aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246aa8: 0xe7a00020
    ctx->pc = 0x246aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x246aac: 0xc4800064
    ctx->pc = 0x246aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246ab0: 0xe7a00024
    ctx->pc = 0x246ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x246ab4: 0xc4800068
    ctx->pc = 0x246ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246ab8: 0xe7a00028
    ctx->pc = 0x246ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x246abc: 0x240282d
    ctx->pc = 0x246abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246ac0: 0x280302d
    ctx->pc = 0x246ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246ac4: 0x3c013f34
    ctx->pc = 0x246ac4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
    // 0x246ac8: 0x3421fdf4
    ctx->pc = 0x246ac8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
    // 0x246acc: 0x44816000
    ctx->pc = 0x246accu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x246ad0: 0x44806800
    ctx->pc = 0x246ad0u;
    *(uint32_t*)&ctx->f[13] = GPR_U32(ctx, 0);
    // 0x246ad4: 0xc0a667a
    ctx->pc = 0x246AD4u;
    SET_GPR_U32(ctx, 31, 0x246ADCu);
    ctx->pc = 0x246AD8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2999E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetTargetSub_0x2999e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246ADCu; }
    }
    if (ctx->pc != 0x246ADCu) { return; }
    ctx->pc = 0x246ADCu;
    // 0x246adc: 0x10000038
    ctx->pc = 0x246ADCu;
    {
        const bool branch_taken_0x246adc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x246AE0u;
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        if (branch_taken_0x246adc) {
            ctx->pc = 0x246BC0u;
            goto label_246bc0;
        }
    }
    ctx->pc = 0x246AE4u;
label_246ae4:
    // 0x246ae4: 0x8fa40030
    ctx->pc = 0x246ae4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246ae8: 0x4800035
    ctx->pc = 0x246AE8u;
    {
        const bool branch_taken_0x246ae8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x246AECu;
        SET_GPR_U32(ctx, 3, ((uint32_t)51 << 16));
        if (branch_taken_0x246ae8) {
            ctx->pc = 0x246BC0u;
            goto label_246bc0;
        }
    }
    ctx->pc = 0x246AF0u;
    // 0x246af0: 0x2463dfd0
    ctx->pc = 0x246af0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294959056));
    // 0x246af4: 0x240203b0
    ctx->pc = 0x246af4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 944));
    // 0x246af8: 0x821018
    ctx->pc = 0x246af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x246afc: 0x438021
    ctx->pc = 0x246afcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x246b00: 0x8e030000
    ctx->pc = 0x246b00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246b04: 0x2402001f
    ctx->pc = 0x246b04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 31));
    // 0x246b08: 0x1062002d
    ctx->pc = 0x246B08u;
    {
        const bool branch_taken_0x246b08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x246b08) {
            ctx->pc = 0x246BC0u;
            goto label_246bc0;
        }
    }
    ctx->pc = 0x246B10u;
    // 0x246b10: 0xc6010060
    ctx->pc = 0x246b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246b14: 0xe7a10020
    ctx->pc = 0x246b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x246b18: 0xc6020064
    ctx->pc = 0x246b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x246b1c: 0xe7a20024
    ctx->pc = 0x246b1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x246b20: 0xc6030068
    ctx->pc = 0x246b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x246b24: 0xe7a30028
    ctx->pc = 0x246b24u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x246b28: 0xc6400000
    ctx->pc = 0x246b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246b2c: 0x46000841
    ctx->pc = 0x246b2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x246b30: 0xe6210000
    ctx->pc = 0x246b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x246b34: 0xc6400004
    ctx->pc = 0x246b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246b38: 0x46001081
    ctx->pc = 0x246b38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x246b3c: 0xe6220004
    ctx->pc = 0x246b3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x246b40: 0xc6400008
    ctx->pc = 0x246b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246b44: 0x460018c1
    ctx->pc = 0x246b44u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x246b48: 0xe6230008
    ctx->pc = 0x246b48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x246b4c: 0xc0b58a4
    ctx->pc = 0x246B4Cu;
    SET_GPR_U32(ctx, 31, 0x246B54u);
    ctx->pc = 0x246B50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246B54u; }
    }
    if (ctx->pc != 0x246B54u) { return; }
    ctx->pc = 0x246B54u;
    // 0x246b54: 0xc601024c
    ctx->pc = 0x246b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246b58: 0x46010541
    ctx->pc = 0x246b58u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246b5c: 0x44800000
    ctx->pc = 0x246b5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x246b60: 0x46150034
    ctx->pc = 0x246b60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246b64: 0x0
    ctx->pc = 0x246b64u;
    // NOP
    // 0x246b68: 0x45010004
    ctx->pc = 0x246B68u;
    {
        const bool branch_taken_0x246b68 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x246B6Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
        if (branch_taken_0x246b68) {
            ctx->pc = 0x246B7Cu;
            goto label_246b7c;
        }
    }
    ctx->pc = 0x246B70u;
    // 0x246b70: 0x8e030000
    ctx->pc = 0x246b70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246b74: 0x14620012
    ctx->pc = 0x246B74u;
    {
        const bool branch_taken_0x246b74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x246b74) {
            ctx->pc = 0x246BC0u;
            goto label_246bc0;
        }
    }
    ctx->pc = 0x246B7Cu;
label_246b7c:
    // 0x246b7c: 0x3c013f00
    ctx->pc = 0x246b7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x246b80: 0x4481a000
    ctx->pc = 0x246b80u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x246b84: 0xc6210000
    ctx->pc = 0x246b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246b88: 0xc6800000
    ctx->pc = 0x246b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246b8c: 0x46000882
    ctx->pc = 0x246b8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x246b90: 0xc6200004
    ctx->pc = 0x246b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246b94: 0xc6810004
    ctx->pc = 0x246b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246b98: 0x46010002
    ctx->pc = 0x246b98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x246b9c: 0x46001080
    ctx->pc = 0x246b9cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x246ba0: 0xc6200008
    ctx->pc = 0x246ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246ba4: 0xc6810008
    ctx->pc = 0x246ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246ba8: 0x46010002
    ctx->pc = 0x246ba8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x246bac: 0x46001080
    ctx->pc = 0x246bacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x246bb0: 0x46141034
    ctx->pc = 0x246bb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246bb4: 0x0
    ctx->pc = 0x246bb4u;
    // NOP
    // 0x246bb8: 0x45030001
    ctx->pc = 0x246BB8u;
    {
        const bool branch_taken_0x246bb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246bb8) {
            ctx->pc = 0x246BBCu;
            ctx->f[21] = FPU_MOV_S(ctx->f[22]);
            ctx->pc = 0x246BC0u;
            goto label_246bc0;
        }
    }
    ctx->pc = 0x246BC0u;
label_246bc0:
    // 0x246bc0: 0x4615b036
    ctx->pc = 0x246bc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246bc4: 0x0
    ctx->pc = 0x246bc4u;
    // NOP
    // 0x246bc8: 0x4500002d
    ctx->pc = 0x246BC8u;
    {
        const bool branch_taken_0x246bc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246BCCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        if (branch_taken_0x246bc8) {
            ctx->pc = 0x246C80u;
            goto label_246c80;
        }
    }
    ctx->pc = 0x246BD0u;
    // 0x246bd0: 0x1060002b
    ctx->pc = 0x246BD0u;
    {
        const bool branch_taken_0x246bd0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x246bd0) {
            ctx->pc = 0x246C80u;
            goto label_246c80;
        }
    }
    ctx->pc = 0x246BD8u;
    // 0x246bd8: 0x806200e3
    ctx->pc = 0x246bd8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 227)));
    // 0x246bdc: 0x4400028
    ctx->pc = 0x246BDCu;
    {
        const bool branch_taken_0x246bdc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x246BE0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x246bdc) {
            ctx->pc = 0x246C80u;
            goto label_246c80;
        }
    }
    ctx->pc = 0x246BE4u;
    // 0x246be4: 0xc4600060
    ctx->pc = 0x246be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246be8: 0xc6410000
    ctx->pc = 0x246be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246bec: 0x46010001
    ctx->pc = 0x246becu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246bf0: 0xe6200000
    ctx->pc = 0x246bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x246bf4: 0xc4400064
    ctx->pc = 0x246bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246bf8: 0xc6410004
    ctx->pc = 0x246bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246bfc: 0x46010001
    ctx->pc = 0x246bfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246c00: 0xe6200004
    ctx->pc = 0x246c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x246c04: 0x8fa20038
    ctx->pc = 0x246c04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x246c08: 0xc4400068
    ctx->pc = 0x246c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246c0c: 0xc6410008
    ctx->pc = 0x246c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246c10: 0x46010001
    ctx->pc = 0x246c10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246c14: 0xe6200008
    ctx->pc = 0x246c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x246c18: 0xc0b58fc
    ctx->pc = 0x246C18u;
    SET_GPR_U32(ctx, 31, 0x246C20u);
    ctx->pc = 0x246C1Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D63F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector2D_0x2d63f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246C20u; }
    }
    if (ctx->pc != 0x246C20u) { return; }
    ctx->pc = 0x246C20u;
    // 0x246c20: 0x8fa20038
    ctx->pc = 0x246c20u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x246c24: 0x8c420000
    ctx->pc = 0x246c24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246c28: 0xc441000c
    ctx->pc = 0x246c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246c2c: 0x46010541
    ctx->pc = 0x246c2cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246c30: 0xc6210000
    ctx->pc = 0x246c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246c34: 0xc6800000
    ctx->pc = 0x246c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246c38: 0x46000882
    ctx->pc = 0x246c38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x246c3c: 0xc6200004
    ctx->pc = 0x246c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246c40: 0xc6810004
    ctx->pc = 0x246c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246c44: 0x46010002
    ctx->pc = 0x246c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x246c48: 0x46001080
    ctx->pc = 0x246c48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x246c4c: 0xc6200008
    ctx->pc = 0x246c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246c50: 0xc6810008
    ctx->pc = 0x246c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246c54: 0x46010002
    ctx->pc = 0x246c54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x246c58: 0x46001080
    ctx->pc = 0x246c58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x246c5c: 0x3c013f34
    ctx->pc = 0x246c5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
    // 0x246c60: 0x3421fdf4
    ctx->pc = 0x246c60u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
    // 0x246c64: 0x4481a000
    ctx->pc = 0x246c64u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x246c68: 0x46141034
    ctx->pc = 0x246c68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246c6c: 0x0
    ctx->pc = 0x246c6cu;
    // NOP
    // 0x246c70: 0x45030001
    ctx->pc = 0x246C70u;
    {
        const bool branch_taken_0x246c70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246c70) {
            ctx->pc = 0x246C74u;
            ctx->f[21] = FPU_MOV_S(ctx->f[22]);
            ctx->pc = 0x246C78u;
            goto label_246c78;
        }
    }
    ctx->pc = 0x246C78u;
label_246c78:
    // 0x246c78: 0x4615b036
    ctx->pc = 0x246c78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246c7c: 0x0
    ctx->pc = 0x246c7cu;
    // NOP
label_246c80:
    // 0x246c80: 0x45000047
    ctx->pc = 0x246C80u;
    {
        const bool branch_taken_0x246c80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246C84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x246c80) {
            ctx->pc = 0x246DA0u;
            goto label_246da0;
        }
    }
    ctx->pc = 0x246C88u;
    // 0x246c88: 0x8c42f46c
    ctx->pc = 0x246c88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294964332)));
    // 0x246c8c: 0x3c013f00
    ctx->pc = 0x246c8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x246c90: 0x4481a000
    ctx->pc = 0x246c90u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x246c94: 0x18400004
    ctx->pc = 0x246C94u;
    {
        const bool branch_taken_0x246c94 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x246C98u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x246c94) {
            ctx->pc = 0x246CA8u;
            goto label_246ca8;
        }
    }
    ctx->pc = 0x246C9Cu;
    // 0x246c9c: 0x3c013f34
    ctx->pc = 0x246c9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
    // 0x246ca0: 0x3421fdf4
    ctx->pc = 0x246ca0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
    // 0x246ca4: 0x4481a000
    ctx->pc = 0x246ca4u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
label_246ca8:
    // 0x246ca8: 0x240202d
    ctx->pc = 0x246ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246cac: 0x280282d
    ctx->pc = 0x246cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246cb0: 0x4600a306
    ctx->pc = 0x246cb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x246cb4: 0x4600b346
    ctx->pc = 0x246cb4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x246cb8: 0x220302d
    ctx->pc = 0x246cb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246cbc: 0x46000064
    ctx->pc = 0x246cbcu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x246cc0: 0x44080800
    ctx->pc = 0x246cc0u;
    SET_GPR_U32(ctx, 8, *(uint32_t*)&ctx->f[1]);
    // 0x246cc4: 0xc0910ba
    ctx->pc = 0x246CC4u;
    SET_GPR_U32(ctx, 31, 0x246CCCu);
    ctx->pc = 0x246CC8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 48));
    ctx->pc = 0x2442E8u;
    {
        const uint32_t __entryPc = ctx->pc;
        closest_enemy_0x2442e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246CCCu; }
    }
    if (ctx->pc != 0x246CCCu) { return; }
    ctx->pc = 0x246CCCu;
    // 0x246ccc: 0x46000546
    ctx->pc = 0x246cccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x246cd0: 0x240202d
    ctx->pc = 0x246cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246cd4: 0x280282d
    ctx->pc = 0x246cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246cd8: 0x4600a306
    ctx->pc = 0x246cd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x246cdc: 0x4600b346
    ctx->pc = 0x246cdcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x246ce0: 0x27a60010
    ctx->pc = 0x246ce0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x246ce4: 0xc0a6762
    ctx->pc = 0x246CE4u;
    SET_GPR_U32(ctx, 31, 0x246CECu);
    ctx->pc = 0x246CE8u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 52));
    ctx->pc = 0x299D88u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterGetTarget_0x299d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246CECu; }
    }
    if (ctx->pc != 0x246CECu) { return; }
    ctx->pc = 0x246CECu;
    // 0x246cec: 0x40802d
    ctx->pc = 0x246cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246cf0: 0x12000017
    ctx->pc = 0x246CF0u;
    {
        const bool branch_taken_0x246cf0 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x246CF4u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x246cf0) {
            ctx->pc = 0x246D50u;
            goto label_246d50;
        }
    }
    ctx->pc = 0x246CF8u;
    // 0x246cf8: 0x46150034
    ctx->pc = 0x246cf8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246cfc: 0x0
    ctx->pc = 0x246cfcu;
    // NOP
    // 0x246d00: 0x45000014
    ctx->pc = 0x246D00u;
    {
        const bool branch_taken_0x246d00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246D04u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x246d00) {
            ctx->pc = 0x246D54u;
            goto label_246d54;
        }
    }
    ctx->pc = 0x246D08u;
    // 0x246d08: 0x8e020004
    ctx->pc = 0x246d08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x246d0c: 0x14400006
    ctx->pc = 0x246D0Cu;
    {
        const bool branch_taken_0x246d0c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x246D10u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        if (branch_taken_0x246d0c) {
            ctx->pc = 0x246D28u;
            goto label_246d28;
        }
    }
    ctx->pc = 0x246D14u;
    // 0x246d14: 0x3c04003b
    ctx->pc = 0x246d14u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x246d18: 0x24848080
    ctx->pc = 0x246d18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294934656));
    // 0x246d1c: 0xc0b49a6
    ctx->pc = 0x246D1Cu;
    SET_GPR_U32(ctx, 31, 0x246D24u);
    ctx->pc = 0x246D20u;
    SET_GPR_U32(ctx, 5, ((uint32_t)128 << 16));
    ctx->pc = 0x2D2698u;
    {
        const uint32_t __entryPc = ctx->pc;
        FatalErrorC_0x2d2698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D24u; }
    }
    if (ctx->pc != 0x246D24u) { return; }
    ctx->pc = 0x246D24u;
    // 0x246d24: 0xc7b50034
    ctx->pc = 0x246d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_246d28:
    // 0x246d28: 0xc7a00010
    ctx->pc = 0x246d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246d2c: 0xe6200000
    ctx->pc = 0x246d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x246d30: 0xc7a00014
    ctx->pc = 0x246d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246d34: 0xe6200004
    ctx->pc = 0x246d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x246d38: 0xc7a00018
    ctx->pc = 0x246d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246d3c: 0xe6200008
    ctx->pc = 0x246d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x246d40: 0x86020000
    ctx->pc = 0x246d40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x246d44: 0x3c030001
    ctx->pc = 0x246d44u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x246d48: 0x431025
    ctx->pc = 0x246d48u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x246d4c: 0xafa20030
    ctx->pc = 0x246d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_246d50:
    // 0x246d50: 0x240202d
    ctx->pc = 0x246d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_246d54:
    // 0x246d54: 0x280282d
    ctx->pc = 0x246d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246d58: 0x4600a306
    ctx->pc = 0x246d58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x246d5c: 0x4600b346
    ctx->pc = 0x246d5cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x246d60: 0x27a60010
    ctx->pc = 0x246d60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 16));
    // 0x246d64: 0xc096e90
    ctx->pc = 0x246D64u;
    SET_GPR_U32(ctx, 31, 0x246D6Cu);
    ctx->pc = 0x246D68u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 56));
    ctx->pc = 0x25BA40u;
    {
        const uint32_t __entryPc = ctx->pc;
        closest_generator_0x25ba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D6Cu; }
    }
    if (ctx->pc != 0x246D6Cu) { return; }
    ctx->pc = 0x246D6Cu;
    // 0x246d6c: 0x46150034
    ctx->pc = 0x246d6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246d70: 0x0
    ctx->pc = 0x246d70u;
    // NOP
    // 0x246d74: 0x4500000a
    ctx->pc = 0x246D74u;
    {
        const bool branch_taken_0x246d74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246D78u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        if (branch_taken_0x246d74) {
            ctx->pc = 0x246DA0u;
            goto label_246da0;
        }
    }
    ctx->pc = 0x246D7Cu;
    // 0x246d7c: 0x46000546
    ctx->pc = 0x246d7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x246d80: 0xc7a00010
    ctx->pc = 0x246d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246d84: 0xe6200000
    ctx->pc = 0x246d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x246d88: 0xc7a00014
    ctx->pc = 0x246d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246d8c: 0xe6200004
    ctx->pc = 0x246d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x246d90: 0xc7a00018
    ctx->pc = 0x246d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246d94: 0xe6200008
    ctx->pc = 0x246d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x246d98: 0x2402ffff
    ctx->pc = 0x246d98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x246d9c: 0xafa20030
    ctx->pc = 0x246d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_246da0:
    // 0x246da0: 0x3c020032
    ctx->pc = 0x246da0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x246da4: 0x8c43f474
    ctx->pc = 0x246da4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294964340)));
    // 0x246da8: 0x24020002
    ctx->pc = 0x246da8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x246dac: 0x5462003e
    ctx->pc = 0x246DACu;
    {
        const bool branch_taken_0x246dac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x246dac) {
            ctx->pc = 0x246DB0u;
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x246EA8u;
            goto label_246ea8;
        }
    }
    ctx->pc = 0x246DB4u;
    // 0x246db4: 0x4615b036
    ctx->pc = 0x246db4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246db8: 0x0
    ctx->pc = 0x246db8u;
    // NOP
    // 0x246dbc: 0x45000039
    ctx->pc = 0x246DBCu;
    {
        const bool branch_taken_0x246dbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246DC0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x246dbc) {
            ctx->pc = 0x246EA4u;
            goto label_246ea4;
        }
    }
    ctx->pc = 0x246DC4u;
    // 0x246dc4: 0x982d
    ctx->pc = 0x246dc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246dc8: 0x241e2b00
    ctx->pc = 0x246dc8u;
    SET_GPR_S32(ctx, 30, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x246dcc: 0x24571bc0
    ctx->pc = 0x246dccu;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x246dd0: 0x24160001
    ctx->pc = 0x246dd0u;
    SET_GPR_S32(ctx, 22, ADD32(GPR_U32(ctx, 0), 1));
    // 0x246dd4: 0x27e1018
    ctx->pc = 0x246dd4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_246dd8:
    // 0x246dd8: 0x578021
    ctx->pc = 0x246dd8u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x246ddc: 0x5215002e
    ctx->pc = 0x246DDCu;
    {
        const bool branch_taken_0x246ddc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 21));
        if (branch_taken_0x246ddc) {
            ctx->pc = 0x246DE0u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x246E98u;
            goto label_246e98;
        }
    }
    ctx->pc = 0x246DE4u;
    // 0x246de4: 0x8e0200fc
    ctx->pc = 0x246de4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 252)));
    // 0x246de8: 0x5456002b
    ctx->pc = 0x246DE8u;
    {
        const bool branch_taken_0x246de8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 22));
        if (branch_taken_0x246de8) {
            ctx->pc = 0x246DECu;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x246E98u;
            goto label_246e98;
        }
    }
    ctx->pc = 0x246DF0u;
    // 0x246df0: 0xc6000050
    ctx->pc = 0x246df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246df4: 0xc6410000
    ctx->pc = 0x246df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246df8: 0x46010001
    ctx->pc = 0x246df8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246dfc: 0xe6200000
    ctx->pc = 0x246dfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x246e00: 0xc6000054
    ctx->pc = 0x246e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246e04: 0xc6410004
    ctx->pc = 0x246e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246e08: 0x46010001
    ctx->pc = 0x246e08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246e0c: 0xe6200004
    ctx->pc = 0x246e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x246e10: 0xc6000058
    ctx->pc = 0x246e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246e14: 0xc6410008
    ctx->pc = 0x246e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246e18: 0x46010001
    ctx->pc = 0x246e18u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246e1c: 0xe6200008
    ctx->pc = 0x246e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x246e20: 0xc0b58a4
    ctx->pc = 0x246E20u;
    SET_GPR_U32(ctx, 31, 0x246E28u);
    ctx->pc = 0x246E24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246E28u; }
    }
    if (ctx->pc != 0x246E28u) { return; }
    ctx->pc = 0x246E28u;
    // 0x246e28: 0xe7a00034
    ctx->pc = 0x246e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x246e2c: 0xc6220000
    ctx->pc = 0x246e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x246e30: 0xc6800000
    ctx->pc = 0x246e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246e34: 0x46001082
    ctx->pc = 0x246e34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x246e38: 0xc6200004
    ctx->pc = 0x246e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246e3c: 0xc6810004
    ctx->pc = 0x246e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246e40: 0x46010002
    ctx->pc = 0x246e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x246e44: 0x46001080
    ctx->pc = 0x246e44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x246e48: 0xc6200008
    ctx->pc = 0x246e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246e4c: 0xc6810008
    ctx->pc = 0x246e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246e50: 0x46010002
    ctx->pc = 0x246e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x246e54: 0x46001080
    ctx->pc = 0x246e54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x246e58: 0x3c013f34
    ctx->pc = 0x246e58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16180 << 16));
    // 0x246e5c: 0x3421fdf4
    ctx->pc = 0x246e5cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 65012));
    // 0x246e60: 0x4481a000
    ctx->pc = 0x246e60u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 1);
    // 0x246e64: 0x46141034
    ctx->pc = 0x246e64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246e68: 0x0
    ctx->pc = 0x246e68u;
    // NOP
    // 0x246e6c: 0x4503000a
    ctx->pc = 0x246E6Cu;
    {
        const bool branch_taken_0x246e6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x246e6c) {
            ctx->pc = 0x246E70u;
            SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
            ctx->pc = 0x246E98u;
            goto label_246e98;
        }
    }
    ctx->pc = 0x246E74u;
    // 0x246e74: 0xc7a00034
    ctx->pc = 0x246e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246e78: 0xc6010828
    ctx->pc = 0x246e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246e7c: 0x46010001
    ctx->pc = 0x246e7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246e80: 0x4600a836
    ctx->pc = 0x246e80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246e84: 0x0
    ctx->pc = 0x246e84u;
    // NOP
    // 0x246e88: 0x45010002
    ctx->pc = 0x246E88u;
    {
        const bool branch_taken_0x246e88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x246E8Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        if (branch_taken_0x246e88) {
            ctx->pc = 0x246E94u;
            goto label_246e94;
        }
    }
    ctx->pc = 0x246E90u;
    // 0x246e90: 0x46000546
    ctx->pc = 0x246e90u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_246e94:
    // 0x246e94: 0x26730001
    ctx->pc = 0x246e94u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 1));
label_246e98:
    // 0x246e98: 0x2a620004
    ctx->pc = 0x246e98u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 19), 4));
    // 0x246e9c: 0x1440ffce
    ctx->pc = 0x246E9Cu;
    {
        const bool branch_taken_0x246e9c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x246EA0u;
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x246e9c) {
            ctx->pc = 0x246DD8u;
            goto label_246dd8;
        }
    }
    ctx->pc = 0x246EA4u;
label_246ea4:
    // 0x246ea4: 0x182d
    ctx->pc = 0x246ea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246ea8:
    // 0x246ea8: 0x1060000a
    ctx->pc = 0x246EA8u;
    {
        const bool branch_taken_0x246ea8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x246EACu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x246ea8) {
            ctx->pc = 0x246ED4u;
            goto label_246ed4;
        }
    }
    ctx->pc = 0x246EB0u;
    // 0x246eb0: 0x4430034
    ctx->pc = 0x246EB0u;
    {
        const bool branch_taken_0x246eb0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x246eb0) {
            ctx->pc = 0x246EB4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 2176)));
            ctx->pc = 0x246F84u;
            goto label_246f84;
        }
    }
    ctx->pc = 0x246EB8u;
    // 0x246eb8: 0x3c020036
    ctx->pc = 0x246eb8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x246ebc: 0x8c42d930
    ctx->pc = 0x246ebcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    // 0x246ec0: 0x84420000
    ctx->pc = 0x246ec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246ec4: 0x3c030001
    ctx->pc = 0x246ec4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)1 << 16));
    // 0x246ec8: 0x431025
    ctx->pc = 0x246ec8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x246ecc: 0x10000029
    ctx->pc = 0x246ECCu;
    {
        const bool branch_taken_0x246ecc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x246ED0u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        if (branch_taken_0x246ecc) {
            ctx->pc = 0x246F74u;
            goto label_246f74;
        }
    }
    ctx->pc = 0x246ED4u;
label_246ed4:
    // 0x246ed4: 0x4615b036
    ctx->pc = 0x246ed4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246ed8: 0x0
    ctx->pc = 0x246ed8u;
    // NOP
    // 0x246edc: 0x45000025
    ctx->pc = 0x246EDCu;
    {
        const bool branch_taken_0x246edc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246EE0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x246edc) {
            ctx->pc = 0x246F74u;
            goto label_246f74;
        }
    }
    ctx->pc = 0x246EE4u;
    // 0x246ee4: 0xafa20030
    ctx->pc = 0x246ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x246ee8: 0xc64c0000
    ctx->pc = 0x246ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x246eec: 0xc6a00070
    ctx->pc = 0x246eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246ef0: 0x46006301
    ctx->pc = 0x246ef0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x246ef4: 0xe7ac0000
    ctx->pc = 0x246ef4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x246ef8: 0xc6400004
    ctx->pc = 0x246ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246efc: 0xc6a10074
    ctx->pc = 0x246efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246f00: 0x46010001
    ctx->pc = 0x246f00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246f04: 0xe7a00004
    ctx->pc = 0x246f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x246f08: 0xc64d0008
    ctx->pc = 0x246f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x246f0c: 0xc6a00078
    ctx->pc = 0x246f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246f10: 0x46006b41
    ctx->pc = 0x246f10u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x246f14: 0xc0b5c34
    ctx->pc = 0x246F14u;
    SET_GPR_U32(ctx, 31, 0x246F1Cu);
    ctx->pc = 0x246F18u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F1Cu; }
    }
    if (ctx->pc != 0x246F1Cu) { return; }
    ctx->pc = 0x246F1Cu;
    // 0x246f1c: 0x46000046
    ctx->pc = 0x246f1cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x246f20: 0x3c013d4c
    ctx->pc = 0x246f20u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15692 << 16));
    // 0x246f24: 0x3421cccd
    ctx->pc = 0x246f24u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x246f28: 0x44810000
    ctx->pc = 0x246f28u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x246f2c: 0x46000834
    ctx->pc = 0x246f2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x246f30: 0x0
    ctx->pc = 0x246f30u;
    // NOP
    // 0x246f34: 0x45000003
    ctx->pc = 0x246F34u;
    {
        const bool branch_taken_0x246f34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x246F38u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x246f34) {
            ctx->pc = 0x246F44u;
            goto label_246f44;
        }
    }
    ctx->pc = 0x246F3Cu;
    // 0x246f3c: 0x10000005
    ctx->pc = 0x246F3Cu;
    {
        const bool branch_taken_0x246f3c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x246F40u;
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        if (branch_taken_0x246f3c) {
            ctx->pc = 0x246F54u;
            goto label_246f54;
        }
    }
    ctx->pc = 0x246F44u;
label_246f44:
    // 0x246f44: 0x0
    ctx->pc = 0x246f44u;
    // NOP
    // 0x246f48: 0x0
    ctx->pc = 0x246f48u;
    // NOP
    // 0x246f4c: 0x46010003
    ctx->pc = 0x246f4cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x246f50: 0xe6200004
    ctx->pc = 0x246f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_246f54:
    // 0x246f54: 0xc0b9e4a
    ctx->pc = 0x246F54u;
    SET_GPR_U32(ctx, 31, 0x246F5Cu);
    ctx->pc = 0x246F58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7928u;
    {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x2e7928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F5Cu; }
    }
    if (ctx->pc != 0x246F5Cu) { return; }
    ctx->pc = 0x246F5Cu;
    // 0x246f5c: 0xe6200000
    ctx->pc = 0x246f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x246f60: 0xc0b9dce
    ctx->pc = 0x246F60u;
    SET_GPR_U32(ctx, 31, 0x246F68u);
    ctx->pc = 0x246F64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x2E7738u;
    {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x2e7738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F68u; }
    }
    if (ctx->pc != 0x246F68u) { return; }
    ctx->pc = 0x246F68u;
    // 0x246f68: 0xe6200008
    ctx->pc = 0x246f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x246f6c: 0xc0b58a4
    ctx->pc = 0x246F6Cu;
    SET_GPR_U32(ctx, 31, 0x246F74u);
    ctx->pc = 0x246F70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F74u; }
    }
    if (ctx->pc != 0x246F74u) { return; }
    ctx->pc = 0x246F74u;
label_246f74:
    // 0x246f74: 0x8fa20030
    ctx->pc = 0x246f74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x246f78: 0x4400039
    ctx->pc = 0x246F78u;
    {
        const bool branch_taken_0x246f78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x246F7Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        if (branch_taken_0x246f78) {
            ctx->pc = 0x247060u;
            goto label_247060;
        }
    }
    ctx->pc = 0x246F80u;
    // 0x246f80: 0x8ea20880
    ctx->pc = 0x246f80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 21), 2176)));
label_246f84:
    // 0x246f84: 0x50400036
    ctx->pc = 0x246F84u;
    {
        const bool branch_taken_0x246f84 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x246f84) {
            ctx->pc = 0x246F88u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
            ctx->pc = 0x247060u;
            goto label_247060;
        }
    }
    ctx->pc = 0x246F8Cu;
    // 0x246f8c: 0x8c420000
    ctx->pc = 0x246f8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246f90: 0x8c430000
    ctx->pc = 0x246f90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246f94: 0x24020007
    ctx->pc = 0x246f94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
    // 0x246f98: 0x14620031
    ctx->pc = 0x246F98u;
    {
        const bool branch_taken_0x246f98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x246F9Cu;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
        if (branch_taken_0x246f98) {
            ctx->pc = 0x247060u;
            goto label_247060;
        }
    }
    ctx->pc = 0x246FA0u;
    // 0x246fa0: 0xc7a00020
    ctx->pc = 0x246fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246fa4: 0xc6410000
    ctx->pc = 0x246fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246fa8: 0x46010001
    ctx->pc = 0x246fa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246fac: 0xe7a00010
    ctx->pc = 0x246facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x246fb0: 0xc7a00024
    ctx->pc = 0x246fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246fb4: 0xc6410004
    ctx->pc = 0x246fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246fb8: 0x46010001
    ctx->pc = 0x246fb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246fbc: 0xe7a00014
    ctx->pc = 0x246fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x246fc0: 0xc7a00028
    ctx->pc = 0x246fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246fc4: 0xc6410008
    ctx->pc = 0x246fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246fc8: 0x46010001
    ctx->pc = 0x246fc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x246fcc: 0xe7a00018
    ctx->pc = 0x246fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x246fd0: 0x27b00010
    ctx->pc = 0x246fd0u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 29), 16));
    // 0x246fd4: 0xc0b58a4
    ctx->pc = 0x246FD4u;
    SET_GPR_U32(ctx, 31, 0x246FDCu);
    ctx->pc = 0x246FD8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D6290u;
    {
        const uint32_t __entryPc = ctx->pc;
        NormalVector_0x2d6290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FDCu; }
    }
    if (ctx->pc != 0x246FDCu) { return; }
    ctx->pc = 0x246FDCu;
    // 0x246fdc: 0xc6ac0828
    ctx->pc = 0x246fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x246fe0: 0x460c6080
    ctx->pc = 0x246fe0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x246fe4: 0xc7a00010
    ctx->pc = 0x246fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246fe8: 0x46001002
    ctx->pc = 0x246fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x246fec: 0xc6410000
    ctx->pc = 0x246fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x246ff0: 0x46010000
    ctx->pc = 0x246ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x246ff4: 0xe7a00010
    ctx->pc = 0x246ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x246ff8: 0xc7a00014
    ctx->pc = 0x246ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x246ffc: 0x46001002
    ctx->pc = 0x246ffcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x247000: 0xc6410004
    ctx->pc = 0x247000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x247004: 0x46010000
    ctx->pc = 0x247004u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x247008: 0xe7a00014
    ctx->pc = 0x247008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x24700c: 0xc7a00018
    ctx->pc = 0x24700cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247010: 0x46001082
    ctx->pc = 0x247010u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x247014: 0xc6400008
    ctx->pc = 0x247014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x247018: 0x46001080
    ctx->pc = 0x247018u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x24701c: 0xe7a20018
    ctx->pc = 0x24701cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x247020: 0x8ea40880
    ctx->pc = 0x247020u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 21), 2176)));
    // 0x247024: 0x240282d
    ctx->pc = 0x247024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247028: 0x200302d
    ctx->pc = 0x247028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24702c: 0x382d
    ctx->pc = 0x24702cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247030: 0xc095e6c
    ctx->pc = 0x247030u;
    SET_GPR_U32(ctx, 31, 0x247038u);
    ctx->pc = 0x247034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2092)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2579B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ItemCollSub_0x2579b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247038u; }
    }
    if (ctx->pc != 0x247038u) { return; }
    ctx->pc = 0x247038u;
    // 0x247038: 0xe7a00034
    ctx->pc = 0x247038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x24703c: 0x46000046
    ctx->pc = 0x24703cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x247040: 0x44800000
    ctx->pc = 0x247040u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x247044: 0x46010036
    ctx->pc = 0x247044u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x247048: 0x0
    ctx->pc = 0x247048u;
    // NOP
    // 0x24704c: 0x45000003
    ctx->pc = 0x24704Cu;
    {
        const bool branch_taken_0x24704c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x247050u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x24704c) {
            ctx->pc = 0x24705Cu;
            goto label_24705c;
        }
    }
    ctx->pc = 0x247054u;
    // 0x247054: 0xafa20030
    ctx->pc = 0x247054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x247058: 0x4600b546
    ctx->pc = 0x247058u;
    ctx->f[21] = FPU_MOV_S(ctx->f[22]);
label_24705c:
    // 0x24705c: 0x8fa2003c
    ctx->pc = 0x24705cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_247060:
    // 0x247060: 0x10400003
    ctx->pc = 0x247060u;
    {
        const bool branch_taken_0x247060 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x247064u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x247060) {
            ctx->pc = 0x247070u;
            goto label_247070;
        }
    }
    ctx->pc = 0x247068u;
    // 0x247068: 0x8fa3003c
    ctx->pc = 0x247068u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x24706c: 0xac620000
    ctx->pc = 0x24706cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_247070:
    // 0x247070: 0x8fa20040
    ctx->pc = 0x247070u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247074: 0x10400003
    ctx->pc = 0x247074u;
    {
        const bool branch_taken_0x247074 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x247078u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 56)));
        if (branch_taken_0x247074) {
            ctx->pc = 0x247084u;
            goto label_247084;
        }
    }
    ctx->pc = 0x24707Cu;
    // 0x24707c: 0x8fa30040
    ctx->pc = 0x24707cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x247080: 0xac620000
    ctx->pc = 0x247080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_247084:
    // 0x247084: 0x4600a806
    ctx->pc = 0x247084u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x247088: 0xdfbf00e0
    ctx->pc = 0x247088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x24708c: 0xdfbe00d0
    ctx->pc = 0x24708cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x247090: 0xdfb700c0
    ctx->pc = 0x247090u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x247094: 0xdfb600b0
    ctx->pc = 0x247094u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x247098: 0xdfb500a0
    ctx->pc = 0x247098u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24709c: 0xdfb40090
    ctx->pc = 0x24709cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2470a0: 0xdfb30080
    ctx->pc = 0x2470a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2470a4: 0xdfb20070
    ctx->pc = 0x2470a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2470a8: 0xdfb10060
    ctx->pc = 0x2470a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2470ac: 0xdfb00050
    ctx->pc = 0x2470acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2470b0: 0xc7b60100
    ctx->pc = 0x2470b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2470b4: 0xc7b500f8
    ctx->pc = 0x2470b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2470b8: 0xc7b400f0
    ctx->pc = 0x2470b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2470bc: 0x3e00008
    ctx->pc = 0x2470BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2470C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x246A54u: goto label_246a54;
            case 0x246A58u: goto label_246a58;
            case 0x246A7Cu: goto label_246a7c;
            case 0x246AE4u: goto label_246ae4;
            case 0x246B7Cu: goto label_246b7c;
            case 0x246BC0u: goto label_246bc0;
            case 0x246C78u: goto label_246c78;
            case 0x246C80u: goto label_246c80;
            case 0x246CA8u: goto label_246ca8;
            case 0x246D28u: goto label_246d28;
            case 0x246D50u: goto label_246d50;
            case 0x246D54u: goto label_246d54;
            case 0x246DA0u: goto label_246da0;
            case 0x246DD8u: goto label_246dd8;
            case 0x246E94u: goto label_246e94;
            case 0x246E98u: goto label_246e98;
            case 0x246EA4u: goto label_246ea4;
            case 0x246EA8u: goto label_246ea8;
            case 0x246ED4u: goto label_246ed4;
            case 0x246F44u: goto label_246f44;
            case 0x246F54u: goto label_246f54;
            case 0x246F74u: goto label_246f74;
            case 0x246F84u: goto label_246f84;
            case 0x24705Cu: goto label_24705c;
            case 0x247060u: goto label_247060;
            case 0x247070u: goto label_247070;
            case 0x247084u: goto label_247084;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2470C4u;
}
