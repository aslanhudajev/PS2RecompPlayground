#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: AddExp
// Address: 0x2349a8 - 0x234be8
void AddExp_0x2349a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2349a8u;

label_2349a8:
    // 0x2349a8: 0x27bdffa0
    ctx->pc = 0x2349a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2349ac: 0xffbf0050
    ctx->pc = 0x2349acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2349b0: 0xffb40040
    ctx->pc = 0x2349b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2349b4: 0xffb30030
    ctx->pc = 0x2349b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2349b8: 0xffb20020
    ctx->pc = 0x2349b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2349bc: 0xffb10010
    ctx->pc = 0x2349bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2349c0: 0xffb00000
    ctx->pc = 0x2349c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2349c4: 0x80902d
    ctx->pc = 0x2349c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2349c8: 0xc0982d
    ctx->pc = 0x2349c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2349cc: 0x24032b00
    ctx->pc = 0x2349ccu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x2349d0: 0x2431818
    ctx->pc = 0x2349d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2349d4: 0x3c020032
    ctx->pc = 0x2349d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x2349d8: 0x24421bc0
    ctx->pc = 0x2349d8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x2349dc: 0x628021
    ctx->pc = 0x2349dcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2349e0: 0x2402fffe
    ctx->pc = 0x2349e0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2349e4: 0x16620012
    ctx->pc = 0x2349E4u;
    {
        const bool branch_taken_0x2349e4 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2349E8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2349e4) {
            ctx->pc = 0x234A30u;
            goto label_234a30;
        }
    }
    ctx->pc = 0x2349ECu;
    // 0x2349ec: 0x6210004
    ctx->pc = 0x2349ECu;
    {
        const bool branch_taken_0x2349ec = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2349F0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 99));
        if (branch_taken_0x2349ec) {
            ctx->pc = 0x234A00u;
            goto label_234a00;
        }
    }
    ctx->pc = 0x2349F4u;
    // 0x2349f4: 0x8e032ac0
    ctx->pc = 0x2349f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    // 0x2349f8: 0x10620073
    ctx->pc = 0x2349F8u;
    {
        const bool branch_taken_0x2349f8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2349FCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2349f8) {
            ctx->pc = 0x234BC8u;
            goto label_234bc8;
        }
    }
    ctx->pc = 0x234A00u;
label_234a00:
    // 0x234a00: 0xc08d1f2
    ctx->pc = 0x234A00u;
    SET_GPR_U32(ctx, 31, 0x234A08u);
    ctx->pc = 0x234A04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 10944)));
    ctx->pc = 0x2347C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LevelDeltaExp_0x2347c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234A08u; }
    }
    if (ctx->pc != 0x234A08u) { return; }
    ctx->pc = 0x234A08u;
    // 0x234a08: 0x44820000
    ctx->pc = 0x234a08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x234a0c: 0x46800020
    ctx->pc = 0x234a0cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x234a10: 0x3c013c23
    ctx->pc = 0x234a10u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15395 << 16));
    // 0x234a14: 0x3421d70a
    ctx->pc = 0x234a14u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 55050));
    // 0x234a18: 0x44810800
    ctx->pc = 0x234a18u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x234a1c: 0x46010002
    ctx->pc = 0x234a1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x234a20: 0x46000064
    ctx->pc = 0x234a20u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x234a24: 0x44020800
    ctx->pc = 0x234a24u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x234a28: 0x1000002b
    ctx->pc = 0x234A28u;
    {
        const bool branch_taken_0x234a28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x234A2Cu;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x234a28) {
            ctx->pc = 0x234AD8u;
            goto label_234ad8;
        }
    }
    ctx->pc = 0x234A30u;
label_234a30:
    // 0x234a30: 0x3c020034
    ctx->pc = 0x234a30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x234a34: 0x8c42e7c8
    ctx->pc = 0x234a34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x234a38: 0xc441009c
    ctx->pc = 0x234a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234a3c: 0x44800000
    ctx->pc = 0x234a3cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x234a40: 0x46010034
    ctx->pc = 0x234a40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234a44: 0x0
    ctx->pc = 0x234a44u;
    // NOP
    // 0x234a48: 0x45000012
    ctx->pc = 0x234A48u;
    {
        const bool branch_taken_0x234a48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x234A4Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        if (branch_taken_0x234a48) {
            ctx->pc = 0x234A94u;
            goto label_234a94;
        }
    }
    ctx->pc = 0x234A50u;
    // 0x234a50: 0xc6002ac0
    ctx->pc = 0x234a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 10944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234a54: 0x46800020
    ctx->pc = 0x234a54u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x234a58: 0x46000834
    ctx->pc = 0x234a58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234a5c: 0x4500000d
    ctx->pc = 0x234A5Cu;
    {
        const bool branch_taken_0x234a5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x234a5c) {
            ctx->pc = 0x234A94u;
            goto label_234a94;
        }
    }
    ctx->pc = 0x234A64u;
    // 0x234a64: 0x46010001
    ctx->pc = 0x234a64u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x234a68: 0x3c013dcc
    ctx->pc = 0x234a68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x234a6c: 0x3421cccd
    ctx->pc = 0x234a6cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x234a70: 0x44810800
    ctx->pc = 0x234a70u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x234a74: 0x46010002
    ctx->pc = 0x234a74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x234a78: 0x3c013f80
    ctx->pc = 0x234a78u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x234a7c: 0x44810800
    ctx->pc = 0x234a7cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x234a80: 0x46010000
    ctx->pc = 0x234a80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x234a84: 0x0
    ctx->pc = 0x234a84u;
    // NOP
    // 0x234a88: 0x0
    ctx->pc = 0x234a88u;
    // NOP
    // 0x234a8c: 0x46000843
    ctx->pc = 0x234a8cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x234a90: 0x46011082
    ctx->pc = 0x234a90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_234a94:
    // 0x234a94: 0x44910000
    ctx->pc = 0x234a94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x234a98: 0x46800020
    ctx->pc = 0x234a98u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x234a9c: 0x46020002
    ctx->pc = 0x234a9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x234aa0: 0x46000064
    ctx->pc = 0x234aa0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x234aa4: 0x44110800
    ctx->pc = 0x234aa4u;
    SET_GPR_U32(ctx, 17, *(uint32_t*)&ctx->f[1]);
    // 0x234aa8: 0x3c020031
    ctx->pc = 0x234aa8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x234aac: 0xdc420e28
    ctx->pc = 0x234aacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x234ab0: 0x30420010
    ctx->pc = 0x234ab0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x234ab4: 0x10400009
    ctx->pc = 0x234AB4u;
    {
        const bool branch_taken_0x234ab4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x234AB8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x234ab4) {
            ctx->pc = 0x234ADCu;
            goto label_234adc;
        }
    }
    ctx->pc = 0x234ABCu;
    // 0x234abc: 0x44910000
    ctx->pc = 0x234abcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x234ac0: 0x46800020
    ctx->pc = 0x234ac0u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x234ac4: 0x3c0140a0
    ctx->pc = 0x234ac4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16544 << 16));
    // 0x234ac8: 0x44810800
    ctx->pc = 0x234ac8u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x234acc: 0x46010002
    ctx->pc = 0x234accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x234ad0: 0x46000064
    ctx->pc = 0x234ad0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x234ad4: 0x44110800
    ctx->pc = 0x234ad4u;
    SET_GPR_U32(ctx, 17, *(uint32_t*)&ctx->f[1]);
label_234ad8:
    // 0x234ad8: 0x200202d
    ctx->pc = 0x234ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234adc:
    // 0x234adc: 0xc08d220
    ctx->pc = 0x234ADCu;
    SET_GPR_U32(ctx, 31, 0x234AE4u);
    ctx->pc = 0x234AE0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x234880u;
    {
        const uint32_t __entryPc = ctx->pc;
        ModifyExp_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234AE4u; }
    }
    if (ctx->pc != 0x234AE4u) { return; }
    ctx->pc = 0x234AE4u;
    // 0x234ae4: 0x40a02d
    ctx->pc = 0x234ae4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234ae8: 0x24020001
    ctx->pc = 0x234ae8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x234aec: 0x16620015
    ctx->pc = 0x234AECu;
    {
        const bool branch_taken_0x234aec = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        if (branch_taken_0x234aec) {
            ctx->pc = 0x234B44u;
            goto label_234b44;
        }
    }
    ctx->pc = 0x234AF4u;
    // 0x234af4: 0x8e0208c8
    ctx->pc = 0x234af4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2248)));
    // 0x234af8: 0x2842000b
    ctx->pc = 0x234af8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 11));
    // 0x234afc: 0x5040000b
    ctx->pc = 0x234AFCu;
    {
        const bool branch_taken_0x234afc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x234afc) {
            ctx->pc = 0x234B00u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x234B2Cu;
            goto label_234b2c;
        }
    }
    ctx->pc = 0x234B04u;
    // 0x234b04: 0x44910000
    ctx->pc = 0x234b04u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 17);
    // 0x234b08: 0x46800020
    ctx->pc = 0x234b08u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x234b0c: 0x3c013ccc
    ctx->pc = 0x234b0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15564 << 16));
    // 0x234b10: 0x3421cccd
    ctx->pc = 0x234b10u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x234b14: 0x44810800
    ctx->pc = 0x234b14u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x234b18: 0x46010002
    ctx->pc = 0x234b18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x234b1c: 0xc6010800
    ctx->pc = 0x234b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234b20: 0x46010000
    ctx->pc = 0x234b20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x234b24: 0xe6000800
    ctx->pc = 0x234b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2048), bits); }
    // 0x234b28: 0xc6000800
    ctx->pc = 0x234b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_234b2c:
    // 0x234b2c: 0x3c0142c8
    ctx->pc = 0x234b2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x234b30: 0x44810800
    ctx->pc = 0x234b30u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x234b34: 0x46000834
    ctx->pc = 0x234b34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234b38: 0x0
    ctx->pc = 0x234b38u;
    // NOP
    // 0x234b3c: 0x45030001
    ctx->pc = 0x234B3Cu;
    {
        const bool branch_taken_0x234b3c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x234b3c) {
            ctx->pc = 0x234B40u;
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2048), bits); }
            ctx->pc = 0x234B44u;
            goto label_234b44;
        }
    }
    ctx->pc = 0x234B44u;
label_234b44:
    // 0x234b44: 0x12800017
    ctx->pc = 0x234B44u;
    {
        const bool branch_taken_0x234b44 = (GPR_U32(ctx, 20) == GPR_U32(ctx, 0));
        if (branch_taken_0x234b44) {
            ctx->pc = 0x234BA4u;
            goto label_234ba4;
        }
    }
    ctx->pc = 0x234B4Cu;
    // 0x234b4c: 0x6210005
    ctx->pc = 0x234B4Cu;
    {
        const bool branch_taken_0x234b4c = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x234B50u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x234b4c) {
            ctx->pc = 0x234B64u;
            goto label_234b64;
        }
    }
    ctx->pc = 0x234B54u;
    // 0x234b54: 0xc09836c
    ctx->pc = 0x234B54u;
    SET_GPR_U32(ctx, 31, 0x234B5Cu);
    ctx->pc = 0x234B58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x260DB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioGainedLevel_0x260db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B5Cu; }
    }
    if (ctx->pc != 0x234B5Cu) { return; }
    ctx->pc = 0x234B5Cu;
    // 0x234b5c: 0x10000011
    ctx->pc = 0x234B5Cu;
    {
        const bool branch_taken_0x234b5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x234b5c) {
            ctx->pc = 0x234BA4u;
            goto label_234ba4;
        }
    }
    ctx->pc = 0x234B64u;
label_234b64:
    // 0x234b64: 0x1a20000f
    ctx->pc = 0x234B64u;
    {
        const bool branch_taken_0x234b64 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x234B68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x234b64) {
            ctx->pc = 0x234BA4u;
            goto label_234ba4;
        }
    }
    ctx->pc = 0x234B6Cu;
    // 0x234b6c: 0x240282d
    ctx->pc = 0x234b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234b70: 0xc0a3a1c
    ctx->pc = 0x234B70u;
    SET_GPR_U32(ctx, 31, 0x234B78u);
    ctx->pc = 0x234B74u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B78u; }
    }
    if (ctx->pc != 0x234B78u) { return; }
    ctx->pc = 0x234B78u;
    // 0x234b78: 0x202d
    ctx->pc = 0x234b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234b7c: 0xc09fbae
    ctx->pc = 0x234B7Cu;
    SET_GPR_U32(ctx, 31, 0x234B84u);
    ctx->pc = 0x234B80u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->pc = 0x27EEB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        StartLevelUpFX_0x27eeb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B84u; }
    }
    if (ctx->pc != 0x234B84u) { return; }
    ctx->pc = 0x234B84u;
    // 0x234b84: 0x40202d
    ctx->pc = 0x234b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x234b88: 0xc09f732
    ctx->pc = 0x234B88u;
    SET_GPR_U32(ctx, 31, 0x234B90u);
    ctx->pc = 0x234B8Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    ctx->pc = 0x27DCC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        SfxSetParent_0x27dcc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x234B90u; }
    }
    if (ctx->pc != 0x234B90u) { return; }
    ctx->pc = 0x234B90u;
    // 0x234b90: 0xc6001a10
    ctx->pc = 0x234b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234b94: 0x3c0142c8
    ctx->pc = 0x234b94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17096 << 16));
    // 0x234b98: 0x44810800
    ctx->pc = 0x234b98u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x234b9c: 0x46010000
    ctx->pc = 0x234b9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x234ba0: 0xe6001a10
    ctx->pc = 0x234ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6672), bits); }
label_234ba4:
    // 0x234ba4: 0x6600008
    ctx->pc = 0x234BA4u;
    {
        const bool branch_taken_0x234ba4 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x234BA8u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x234ba4) {
            ctx->pc = 0x234BC8u;
            goto label_234bc8;
        }
    }
    ctx->pc = 0x234BACu;
    // 0x234bac: 0x8e030690
    ctx->pc = 0x234bacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1680)));
    // 0x234bb0: 0x10600005
    ctx->pc = 0x234BB0u;
    {
        const bool branch_taken_0x234bb0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x234BB4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x234bb0) {
            ctx->pc = 0x234BC8u;
            goto label_234bc8;
        }
    }
    ctx->pc = 0x234BB8u;
    // 0x234bb8: 0x8c640000
    ctx->pc = 0x234bb8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x234bbc: 0xc08d26a
    ctx->pc = 0x234BBCu;
    SET_GPR_U32(ctx, 31, 0x234BC4u);
    ctx->pc = 0x234BC0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x2349A8u;
    goto label_2349a8;
    ctx->pc = 0x234BC4u;
label_234bc4:
    // 0x234bc4: 0x280102d
    ctx->pc = 0x234bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_234bc8:
    // 0x234bc8: 0xdfbf0050
    ctx->pc = 0x234bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x234bcc: 0xdfb40040
    ctx->pc = 0x234bccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x234bd0: 0xdfb30030
    ctx->pc = 0x234bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x234bd4: 0xdfb20020
    ctx->pc = 0x234bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x234bd8: 0xdfb10010
    ctx->pc = 0x234bd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x234bdc: 0xdfb00000
    ctx->pc = 0x234bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x234be0: 0x3e00008
    ctx->pc = 0x234BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234BE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2349A8u: goto label_2349a8;
            case 0x234A00u: goto label_234a00;
            case 0x234A30u: goto label_234a30;
            case 0x234A94u: goto label_234a94;
            case 0x234AD8u: goto label_234ad8;
            case 0x234ADCu: goto label_234adc;
            case 0x234B2Cu: goto label_234b2c;
            case 0x234B44u: goto label_234b44;
            case 0x234B64u: goto label_234b64;
            case 0x234BA4u: goto label_234ba4;
            case 0x234BC4u: goto label_234bc4;
            case 0x234BC8u: goto label_234bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x234BE8u;
}
