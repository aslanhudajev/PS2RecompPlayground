#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: calc_good_wiz_attn
// Address: 0x2659f8 - 0x265b84
void calc_good_wiz_attn_0x2659f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2659f8u;

    // 0x2659f8: 0x27bdffc0
    ctx->pc = 0x2659f8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2659fc: 0xffbf0030
    ctx->pc = 0x2659fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x265a00: 0xffb00020
    ctx->pc = 0x265a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x265a04: 0x14a0000d
    ctx->pc = 0x265A04u;
    {
        const bool branch_taken_0x265a04 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x265A08u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x265a04) {
            ctx->pc = 0x265A3Cu;
            goto label_265a3c;
        }
    }
    ctx->pc = 0x265A0Cu;
    // 0x265a0c: 0x3c02003c
    ctx->pc = 0x265a0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x265a10: 0x8c4438cc
    ctx->pc = 0x265a10u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 14540)));
    // 0x265a14: 0x4800009
    ctx->pc = 0x265A14u;
    {
        const bool branch_taken_0x265a14 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x265A18u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x265a14) {
            ctx->pc = 0x265A3Cu;
            goto label_265a3c;
        }
    }
    ctx->pc = 0x265A1Cu;
    // 0x265a1c: 0x24631bc0
    ctx->pc = 0x265a1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7104));
    // 0x265a20: 0x24022b00
    ctx->pc = 0x265a20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x265a24: 0x821018
    ctx->pc = 0x265a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x265a28: 0x431021
    ctx->pc = 0x265a28u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x265a2c: 0x8c4300fc
    ctx->pc = 0x265a2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x265a30: 0x24020001
    ctx->pc = 0x265a30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x265a34: 0x1062001a
    ctx->pc = 0x265A34u;
    {
        const bool branch_taken_0x265a34 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x265A38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x265a34) {
            ctx->pc = 0x265AA0u;
            goto label_265aa0;
        }
    }
    ctx->pc = 0x265A3Cu;
label_265a3c:
    // 0x265a3c: 0x282d
    ctx->pc = 0x265a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265a40: 0x3c08003c
    ctx->pc = 0x265a40u;
    SET_GPR_U32(ctx, 8, ((uint32_t)60 << 16));
    // 0x265a44: 0x3c020032
    ctx->pc = 0x265a44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x265a48: 0x24491bc0
    ctx->pc = 0x265a48u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x265a4c: 0x24072b00
    ctx->pc = 0x265a4cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x265a50: 0x24060001
    ctx->pc = 0x265a50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
    // 0x265a54: 0x0
    ctx->pc = 0x265a54u;
    // NOP
label_265a58:
    // 0x265a58: 0x28a20004
    ctx->pc = 0x265a58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4));
    // 0x265a5c: 0x1040000d
    ctx->pc = 0x265A5Cu;
    {
        const bool branch_taken_0x265a5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x265A60u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x265a5c) {
            ctx->pc = 0x265A94u;
            goto label_265a94;
        }
    }
    ctx->pc = 0x265A64u;
    // 0x265a64: 0x8c6238cc
    ctx->pc = 0x265a64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 14540)));
    // 0x265a68: 0x24420001
    ctx->pc = 0x265a68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x265a6c: 0xac6238cc
    ctx->pc = 0x265a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14540), GPR_U32(ctx, 2));
    // 0x265a70: 0x28420004
    ctx->pc = 0x265a70u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 4));
    // 0x265a74: 0x50400001
    ctx->pc = 0x265A74u;
    {
        const bool branch_taken_0x265a74 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x265a74) {
            ctx->pc = 0x265A78u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 14540), GPR_U32(ctx, 0));
            ctx->pc = 0x265A7Cu;
            goto label_265a7c;
        }
    }
    ctx->pc = 0x265A7Cu;
label_265a7c:
    // 0x265a7c: 0x8d0438cc
    ctx->pc = 0x265a7cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 8), 14540)));
    // 0x265a80: 0x871818
    ctx->pc = 0x265a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x265a84: 0x691021
    ctx->pc = 0x265a84u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x265a88: 0x8c4200fc
    ctx->pc = 0x265a88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x265a8c: 0x5446fff2
    ctx->pc = 0x265A8Cu;
    {
        const bool branch_taken_0x265a8c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 6));
        if (branch_taken_0x265a8c) {
            ctx->pc = 0x265A90u;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x265A58u;
            goto label_265a58;
        }
    }
    ctx->pc = 0x265A94u;
label_265a94:
    // 0x265a94: 0x24020004
    ctx->pc = 0x265a94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x265a98: 0x10a20036
    ctx->pc = 0x265A98u;
    {
        const bool branch_taken_0x265a98 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 2));
        ctx->pc = 0x265A9Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
        if (branch_taken_0x265a98) {
            ctx->pc = 0x265B74u;
            goto label_265b74;
        }
    }
    ctx->pc = 0x265AA0u;
label_265aa0:
    // 0x265aa0: 0x8c4438cc
    ctx->pc = 0x265aa0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 14540)));
    // 0x265aa4: 0x3c020032
    ctx->pc = 0x265aa4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x265aa8: 0x24421bc0
    ctx->pc = 0x265aa8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7104));
    // 0x265aac: 0x24032b00
    ctx->pc = 0x265aacu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x265ab0: 0x831818
    ctx->pc = 0x265ab0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x265ab4: 0x621821
    ctx->pc = 0x265ab4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x265ab8: 0x3c020034
    ctx->pc = 0x265ab8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x265abc: 0x2442e950
    ctx->pc = 0x265abcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294961488));
    // 0x265ac0: 0xc46c0050
    ctx->pc = 0x265ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x265ac4: 0xc4400030
    ctx->pc = 0x265ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265ac8: 0x46006301
    ctx->pc = 0x265ac8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x265acc: 0xe7ac0000
    ctx->pc = 0x265accu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x265ad0: 0xc4600054
    ctx->pc = 0x265ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265ad4: 0xc4410034
    ctx->pc = 0x265ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265ad8: 0x46010001
    ctx->pc = 0x265ad8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x265adc: 0xe7a00004
    ctx->pc = 0x265adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x265ae0: 0xc46d0058
    ctx->pc = 0x265ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x265ae4: 0xc4400038
    ctx->pc = 0x265ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265ae8: 0x46006b41
    ctx->pc = 0x265ae8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x265aec: 0xc0ba04a
    ctx->pc = 0x265AECu;
    SET_GPR_U32(ctx, 31, 0x265AF4u);
    ctx->pc = 0x265AF0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265AF4u; }
    }
    if (ctx->pc != 0x265AF4u) { return; }
    ctx->pc = 0x265AF4u;
    // 0x265af4: 0x3c02003c
    ctx->pc = 0x265af4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x265af8: 0xc44138c8
    ctx->pc = 0x265af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265afc: 0x16000011
    ctx->pc = 0x265AFCu;
    {
        const bool branch_taken_0x265afc = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x265B00u;
        ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        if (branch_taken_0x265afc) {
            ctx->pc = 0x265B44u;
            goto label_265b44;
        }
    }
    ctx->pc = 0x265B04u;
    // 0x265b04: 0x3c020031
    ctx->pc = 0x265b04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x265b08: 0xc441ffa8
    ctx->pc = 0x265b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x265b0c: 0x3c013fc9
    ctx->pc = 0x265b0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16329 << 16));
    // 0x265b10: 0x34210fdb
    ctx->pc = 0x265b10u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x265b14: 0x44810000
    ctx->pc = 0x265b14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x265b18: 0x46000842
    ctx->pc = 0x265b18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x265b1c: 0x46020834
    ctx->pc = 0x265b1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265b20: 0x0
    ctx->pc = 0x265b20u;
    // NOP
    // 0x265b24: 0x45030001
    ctx->pc = 0x265B24u;
    {
        const bool branch_taken_0x265b24 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x265b24) {
            ctx->pc = 0x265B28u;
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x265B2Cu;
            goto label_265b2c;
        }
    }
    ctx->pc = 0x265B2Cu;
label_265b2c:
    // 0x265b2c: 0x46000847
    ctx->pc = 0x265b2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x265b30: 0x46011034
    ctx->pc = 0x265b30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x265b34: 0x0
    ctx->pc = 0x265b34u;
    // NOP
    // 0x265b38: 0x45030001
    ctx->pc = 0x265B38u;
    {
        const bool branch_taken_0x265b38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x265b38) {
            ctx->pc = 0x265B3Cu;
            ctx->f[2] = FPU_MOV_S(ctx->f[1]);
            ctx->pc = 0x265B40u;
            goto label_265b40;
        }
    }
    ctx->pc = 0x265B40u;
label_265b40:
    // 0x265b40: 0x3c02003c
    ctx->pc = 0x265b40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_265b44:
    // 0x265b44: 0xc44038c8
    ctx->pc = 0x265b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 14536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x265b48: 0x46001000
    ctx->pc = 0x265b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x265b4c: 0xe44038c8
    ctx->pc = 0x265b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 14536), bits); }
    // 0x265b50: 0xafa00010
    ctx->pc = 0x265b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x265b54: 0xe7a00014
    ctx->pc = 0x265b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x265b58: 0xafa00018
    ctx->pc = 0x265b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x265b5c: 0x3c100034
    ctx->pc = 0x265b5cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)52 << 16));
    // 0x265b60: 0x2604e950
    ctx->pc = 0x265b60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294961488));
    // 0x265b64: 0xc0b5a4e
    ctx->pc = 0x265B64u;
    SET_GPR_U32(ctx, 31, 0x265B6Cu);
    ctx->pc = 0x265B68u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 16));
    ctx->pc = 0x2D6938u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreatePYRMatrix_0x2d6938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B6Cu; }
    }
    if (ctx->pc != 0x265B6Cu) { return; }
    ctx->pc = 0x265B6Cu;
    // 0x265b6c: 0xc080ce2
    ctx->pc = 0x265B6Cu;
    SET_GPR_U32(ctx, 31, 0x265B74u);
    ctx->pc = 0x265B70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4294961488));
    ctx->pc = 0x203388u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjWorldMat_0x203388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x265B74u; }
    }
    if (ctx->pc != 0x265B74u) { return; }
    ctx->pc = 0x265B74u;
label_265b74:
    // 0x265b74: 0xdfbf0030
    ctx->pc = 0x265b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x265b78: 0xdfb00020
    ctx->pc = 0x265b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x265b7c: 0x3e00008
    ctx->pc = 0x265B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x265B80u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x265A3Cu: goto label_265a3c;
            case 0x265A58u: goto label_265a58;
            case 0x265A7Cu: goto label_265a7c;
            case 0x265A94u: goto label_265a94;
            case 0x265AA0u: goto label_265aa0;
            case 0x265B2Cu: goto label_265b2c;
            case 0x265B40u: goto label_265b40;
            case 0x265B44u: goto label_265b44;
            case 0x265B74u: goto label_265b74;
            default: break;
        }
        return;
    }
    ctx->pc = 0x265B84u;
}
