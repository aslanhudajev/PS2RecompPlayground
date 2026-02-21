#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StdCamStartUpdate
// Address: 0x215ae8 - 0x215fa4
void StdCamStartUpdate_0x215ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x215ae8u;

    // 0x215ae8: 0x27bdfdf0
    ctx->pc = 0x215ae8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x215aec: 0xffbf0200
    ctx->pc = 0x215aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 31));
    // 0x215af0: 0xffb101f0
    ctx->pc = 0x215af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 17));
    // 0x215af4: 0xffb001e0
    ctx->pc = 0x215af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 16));
    // 0x215af8: 0x3c020032
    ctx->pc = 0x215af8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x215afc: 0x3c100032
    ctx->pc = 0x215afcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x215b00: 0x8c43f784
    ctx->pc = 0x215b00u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965124)));
    // 0x215b04: 0x8e02f780
    ctx->pc = 0x215b04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294965120)));
    // 0x215b08: 0x1462008f
    ctx->pc = 0x215B08u;
    {
        const bool branch_taken_0x215b08 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x215B0Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x215b08) {
            ctx->pc = 0x215D48u;
            goto label_215d48;
        }
    }
    ctx->pc = 0x215B10u;
    // 0x215b10: 0xc084ce4
    ctx->pc = 0x215B10u;
    SET_GPR_U32(ctx, 31, 0x215B18u);
    ctx->pc = 0x215B14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x213390u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamReset_0x213390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B18u; }
    }
    if (ctx->pc != 0x215B18u) { return; }
    ctx->pc = 0x215B18u;
    // 0x215b18: 0x3c020034
    ctx->pc = 0x215b18u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x215b1c: 0x3a0202d
    ctx->pc = 0x215b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215b20: 0xc085354
    ctx->pc = 0x215B20u;
    SET_GPR_U32(ctx, 31, 0x215B28u);
    ctx->pc = 0x215B24u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4294937460)));
    ctx->pc = 0x214D50u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamInit_0x214d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B28u; }
    }
    if (ctx->pc != 0x215B28u) { return; }
    ctx->pc = 0x215B28u;
    // 0x215b28: 0xc0853c4
    ctx->pc = 0x215B28u;
    SET_GPR_U32(ctx, 31, 0x215B30u);
    ctx->pc = 0x215B2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x214F10u;
    {
        const uint32_t __entryPc = ctx->pc;
        CalcDestination_0x214f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215B30u; }
    }
    if (ctx->pc != 0x215B30u) { return; }
    ctx->pc = 0x215B30u;
    // 0x215b30: 0x3c020032
    ctx->pc = 0x215b30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x215b34: 0x8c43f77c
    ctx->pc = 0x215b34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x215b38: 0xc602f780
    ctx->pc = 0x215b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294965120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215b3c: 0x468010a0
    ctx->pc = 0x215b3cu;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x215b40: 0xc7a100ec
    ctx->pc = 0x215b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215b44: 0xc46000ec
    ctx->pc = 0x215b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215b48: 0x46000841
    ctx->pc = 0x215b48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x215b4c: 0x3c014049
    ctx->pc = 0x215b4cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x215b50: 0x34210fdb
    ctx->pc = 0x215b50u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215b54: 0x44810000
    ctx->pc = 0x215b54u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215b58: 0x46010034
    ctx->pc = 0x215b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215b5c: 0x0
    ctx->pc = 0x215b5cu;
    // NOP
    // 0x215b60: 0x45000006
    ctx->pc = 0x215B60u;
    {
        const bool branch_taken_0x215b60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215B64u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
        if (branch_taken_0x215b60) {
            ctx->pc = 0x215B7Cu;
            goto label_215b7c;
        }
    }
    ctx->pc = 0x215B68u;
    // 0x215b68: 0x3c0140c9
    ctx->pc = 0x215b68u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x215b6c: 0x34210fdb
    ctx->pc = 0x215b6cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215b70: 0x44810000
    ctx->pc = 0x215b70u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215b74: 0x10000014
    ctx->pc = 0x215B74u;
    {
        const bool branch_taken_0x215b74 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215B78u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x215b74) {
            ctx->pc = 0x215BC8u;
            goto label_215bc8;
        }
    }
    ctx->pc = 0x215B7Cu;
label_215b7c:
    // 0x215b7c: 0xc7a100ec
    ctx->pc = 0x215b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215b80: 0xc44000ec
    ctx->pc = 0x215b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215b84: 0x46000841
    ctx->pc = 0x215b84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x215b88: 0x3c01c049
    ctx->pc = 0x215b88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x215b8c: 0x34210fdb
    ctx->pc = 0x215b8cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215b90: 0x44810000
    ctx->pc = 0x215b90u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215b94: 0x46000836
    ctx->pc = 0x215b94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215b98: 0x0
    ctx->pc = 0x215b98u;
    // NOP
    // 0x215b9c: 0x45000006
    ctx->pc = 0x215B9Cu;
    {
        const bool branch_taken_0x215b9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215BA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x215b9c) {
            ctx->pc = 0x215BB8u;
            goto label_215bb8;
        }
    }
    ctx->pc = 0x215BA4u;
    // 0x215ba4: 0x3c0140c9
    ctx->pc = 0x215ba4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x215ba8: 0x34210fdb
    ctx->pc = 0x215ba8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215bac: 0x44810000
    ctx->pc = 0x215bacu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215bb0: 0x10000005
    ctx->pc = 0x215BB0u;
    {
        const bool branch_taken_0x215bb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215BB4u;
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x215bb0) {
            ctx->pc = 0x215BC8u;
            goto label_215bc8;
        }
    }
    ctx->pc = 0x215BB8u;
label_215bb8:
    // 0x215bb8: 0x8c42f77c
    ctx->pc = 0x215bb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x215bbc: 0xc7a100ec
    ctx->pc = 0x215bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215bc0: 0xc44000ec
    ctx->pc = 0x215bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215bc4: 0x46000841
    ctx->pc = 0x215bc4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_215bc8:
    // 0x215bc8: 0x0
    ctx->pc = 0x215bc8u;
    // NOP
    // 0x215bcc: 0x0
    ctx->pc = 0x215bccu;
    // NOP
    // 0x215bd0: 0x46020843
    ctx->pc = 0x215bd0u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x215bd4: 0xe46100f0
    ctx->pc = 0x215bd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 240), bits); }
    // 0x215bd8: 0x3c020032
    ctx->pc = 0x215bd8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x215bdc: 0x8c43f77c
    ctx->pc = 0x215bdcu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x215be0: 0x3c020032
    ctx->pc = 0x215be0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x215be4: 0xc442f780
    ctx->pc = 0x215be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294965120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215be8: 0x468010a0
    ctx->pc = 0x215be8u;
    ctx->f[2] = FPU_CVT_S_W(*(int32_t*)&ctx->f[2]);
    // 0x215bec: 0xc7a10104
    ctx->pc = 0x215becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215bf0: 0xc4600104
    ctx->pc = 0x215bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215bf4: 0x46000841
    ctx->pc = 0x215bf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x215bf8: 0x3c014049
    ctx->pc = 0x215bf8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x215bfc: 0x34210fdb
    ctx->pc = 0x215bfcu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215c00: 0x44810000
    ctx->pc = 0x215c00u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215c04: 0x46010034
    ctx->pc = 0x215c04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215c08: 0x0
    ctx->pc = 0x215c08u;
    // NOP
    // 0x215c0c: 0x45000006
    ctx->pc = 0x215C0Cu;
    {
        const bool branch_taken_0x215c0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215C10u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x215c0c) {
            ctx->pc = 0x215C28u;
            goto label_215c28;
        }
    }
    ctx->pc = 0x215C14u;
    // 0x215c14: 0x3c0140c9
    ctx->pc = 0x215c14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x215c18: 0x34210fdb
    ctx->pc = 0x215c18u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215c1c: 0x44810000
    ctx->pc = 0x215c1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215c20: 0x10000015
    ctx->pc = 0x215C20u;
    {
        const bool branch_taken_0x215c20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215C24u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x215c20) {
            ctx->pc = 0x215C78u;
            goto label_215c78;
        }
    }
    ctx->pc = 0x215C28u;
label_215c28:
    // 0x215c28: 0x8c42f77c
    ctx->pc = 0x215c28u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x215c2c: 0xc7a10104
    ctx->pc = 0x215c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215c30: 0xc4400104
    ctx->pc = 0x215c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215c34: 0x46000841
    ctx->pc = 0x215c34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x215c38: 0x3c01c049
    ctx->pc = 0x215c38u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x215c3c: 0x34210fdb
    ctx->pc = 0x215c3cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215c40: 0x44810000
    ctx->pc = 0x215c40u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215c44: 0x46000836
    ctx->pc = 0x215c44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215c48: 0x0
    ctx->pc = 0x215c48u;
    // NOP
    // 0x215c4c: 0x45000006
    ctx->pc = 0x215C4Cu;
    {
        const bool branch_taken_0x215c4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215C50u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x215c4c) {
            ctx->pc = 0x215C68u;
            goto label_215c68;
        }
    }
    ctx->pc = 0x215C54u;
    // 0x215c54: 0x3c0140c9
    ctx->pc = 0x215c54u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x215c58: 0x34210fdb
    ctx->pc = 0x215c58u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215c5c: 0x44810000
    ctx->pc = 0x215c5cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215c60: 0x10000005
    ctx->pc = 0x215C60u;
    {
        const bool branch_taken_0x215c60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215C64u;
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x215c60) {
            ctx->pc = 0x215C78u;
            goto label_215c78;
        }
    }
    ctx->pc = 0x215C68u;
label_215c68:
    // 0x215c68: 0x8c42f77c
    ctx->pc = 0x215c68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x215c6c: 0xc7a10104
    ctx->pc = 0x215c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215c70: 0xc4400104
    ctx->pc = 0x215c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215c74: 0x46000841
    ctx->pc = 0x215c74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_215c78:
    // 0x215c78: 0x0
    ctx->pc = 0x215c78u;
    // NOP
    // 0x215c7c: 0x0
    ctx->pc = 0x215c7cu;
    // NOP
    // 0x215c80: 0x46020843
    ctx->pc = 0x215c80u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x215c84: 0xe4610108
    ctx->pc = 0x215c84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 264), bits); }
    // 0x215c88: 0x3c020032
    ctx->pc = 0x215c88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x215c8c: 0x8c42f77c
    ctx->pc = 0x215c8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x215c90: 0xc7a000f4
    ctx->pc = 0x215c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215c94: 0xc44100f4
    ctx->pc = 0x215c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215c98: 0x46010001
    ctx->pc = 0x215c98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x215c9c: 0x3c030032
    ctx->pc = 0x215c9cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
    // 0x215ca0: 0xc461f780
    ctx->pc = 0x215ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215ca4: 0x46800860
    ctx->pc = 0x215ca4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x215ca8: 0x0
    ctx->pc = 0x215ca8u;
    // NOP
    // 0x215cac: 0x0
    ctx->pc = 0x215cacu;
    // NOP
    // 0x215cb0: 0x46010003
    ctx->pc = 0x215cb0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x215cb4: 0xe44000f8
    ctx->pc = 0x215cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
    // 0x215cb8: 0xc7a200a4
    ctx->pc = 0x215cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215cbc: 0xc44000a4
    ctx->pc = 0x215cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215cc0: 0x46001081
    ctx->pc = 0x215cc0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x215cc4: 0xe44200bc
    ctx->pc = 0x215cc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x215cc8: 0xc7a300a8
    ctx->pc = 0x215cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x215ccc: 0xc44000a8
    ctx->pc = 0x215cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215cd0: 0x460018c1
    ctx->pc = 0x215cd0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x215cd4: 0xe44300c0
    ctx->pc = 0x215cd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x215cd8: 0xc7a400ac
    ctx->pc = 0x215cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x215cdc: 0xc44000ac
    ctx->pc = 0x215cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215ce0: 0x46002101
    ctx->pc = 0x215ce0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x215ce4: 0xe44400c4
    ctx->pc = 0x215ce4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x215ce8: 0xc460f780
    ctx->pc = 0x215ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215cec: 0x46800020
    ctx->pc = 0x215cecu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x215cf0: 0x3c013f80
    ctx->pc = 0x215cf0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x215cf4: 0x44810800
    ctx->pc = 0x215cf4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x215cf8: 0x0
    ctx->pc = 0x215cf8u;
    // NOP
    // 0x215cfc: 0x0
    ctx->pc = 0x215cfcu;
    // NOP
    // 0x215d00: 0x46000803
    ctx->pc = 0x215d00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x215d04: 0x46020002
    ctx->pc = 0x215d04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x215d08: 0xe44000bc
    ctx->pc = 0x215d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x215d0c: 0xc460f780
    ctx->pc = 0x215d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215d10: 0x46800020
    ctx->pc = 0x215d10u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x215d14: 0x0
    ctx->pc = 0x215d14u;
    // NOP
    // 0x215d18: 0x0
    ctx->pc = 0x215d18u;
    // NOP
    // 0x215d1c: 0x46000803
    ctx->pc = 0x215d1cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x215d20: 0x46030002
    ctx->pc = 0x215d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x215d24: 0xe44000c0
    ctx->pc = 0x215d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 192), bits); }
    // 0x215d28: 0xc460f780
    ctx->pc = 0x215d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294965120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215d2c: 0x46800020
    ctx->pc = 0x215d2cu;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x215d30: 0x0
    ctx->pc = 0x215d30u;
    // NOP
    // 0x215d34: 0x0
    ctx->pc = 0x215d34u;
    // NOP
    // 0x215d38: 0x46000843
    ctx->pc = 0x215d38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x215d3c: 0x46040842
    ctx->pc = 0x215d3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x215d40: 0xe44100c4
    ctx->pc = 0x215d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 196), bits); }
    // 0x215d44: 0x3c020032
    ctx->pc = 0x215d44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_215d48:
    // 0x215d48: 0x8c43f77c
    ctx->pc = 0x215d48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x215d4c: 0xc46100ec
    ctx->pc = 0x215d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215d50: 0xc46000f0
    ctx->pc = 0x215d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215d54: 0x46000840
    ctx->pc = 0x215d54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215d58: 0x3c014049
    ctx->pc = 0x215d58u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x215d5c: 0x34210fdb
    ctx->pc = 0x215d5cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215d60: 0x44810000
    ctx->pc = 0x215d60u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215d64: 0x46010034
    ctx->pc = 0x215d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215d68: 0x0
    ctx->pc = 0x215d68u;
    // NOP
    // 0x215d6c: 0x45000006
    ctx->pc = 0x215D6Cu;
    {
        const bool branch_taken_0x215d6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215D70u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x215d6c) {
            ctx->pc = 0x215D88u;
            goto label_215d88;
        }
    }
    ctx->pc = 0x215D74u;
    // 0x215d74: 0x3c0140c9
    ctx->pc = 0x215d74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x215d78: 0x34210fdb
    ctx->pc = 0x215d78u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215d7c: 0x44810000
    ctx->pc = 0x215d7cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215d80: 0x10000015
    ctx->pc = 0x215D80u;
    {
        const bool branch_taken_0x215d80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215D84u;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x215d80) {
            ctx->pc = 0x215DD8u;
            goto label_215dd8;
        }
    }
    ctx->pc = 0x215D88u;
label_215d88:
    // 0x215d88: 0x8c42f77c
    ctx->pc = 0x215d88u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x215d8c: 0xc44100ec
    ctx->pc = 0x215d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215d90: 0xc44000f0
    ctx->pc = 0x215d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215d94: 0x46000840
    ctx->pc = 0x215d94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215d98: 0x3c01c049
    ctx->pc = 0x215d98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x215d9c: 0x34210fdb
    ctx->pc = 0x215d9cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215da0: 0x44810000
    ctx->pc = 0x215da0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215da4: 0x46000836
    ctx->pc = 0x215da4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215da8: 0x0
    ctx->pc = 0x215da8u;
    // NOP
    // 0x215dac: 0x45000006
    ctx->pc = 0x215DACu;
    {
        const bool branch_taken_0x215dac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215DB0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x215dac) {
            ctx->pc = 0x215DC8u;
            goto label_215dc8;
        }
    }
    ctx->pc = 0x215DB4u;
    // 0x215db4: 0x3c0140c9
    ctx->pc = 0x215db4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x215db8: 0x34210fdb
    ctx->pc = 0x215db8u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215dbc: 0x44810000
    ctx->pc = 0x215dbcu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215dc0: 0x10000005
    ctx->pc = 0x215DC0u;
    {
        const bool branch_taken_0x215dc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215DC4u;
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x215dc0) {
            ctx->pc = 0x215DD8u;
            goto label_215dd8;
        }
    }
    ctx->pc = 0x215DC8u;
label_215dc8:
    // 0x215dc8: 0x8c42f77c
    ctx->pc = 0x215dc8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x215dcc: 0xc44100ec
    ctx->pc = 0x215dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215dd0: 0xc44000f0
    ctx->pc = 0x215dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215dd4: 0x46000840
    ctx->pc = 0x215dd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_215dd8:
    // 0x215dd8: 0xe46100ec
    ctx->pc = 0x215dd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 236), bits); }
    // 0x215ddc: 0x3c020032
    ctx->pc = 0x215ddcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x215de0: 0x8c43f77c
    ctx->pc = 0x215de0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x215de4: 0xc4610104
    ctx->pc = 0x215de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215de8: 0xc4600108
    ctx->pc = 0x215de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215dec: 0x46000840
    ctx->pc = 0x215decu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215df0: 0x3c014049
    ctx->pc = 0x215df0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16457 << 16));
    // 0x215df4: 0x34210fdb
    ctx->pc = 0x215df4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215df8: 0x44810000
    ctx->pc = 0x215df8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215dfc: 0x46010034
    ctx->pc = 0x215dfcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215e00: 0x0
    ctx->pc = 0x215e00u;
    // NOP
    // 0x215e04: 0x45000006
    ctx->pc = 0x215E04u;
    {
        const bool branch_taken_0x215e04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215E08u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
        if (branch_taken_0x215e04) {
            ctx->pc = 0x215E20u;
            goto label_215e20;
        }
    }
    ctx->pc = 0x215E0Cu;
    // 0x215e0c: 0x3c0140c9
    ctx->pc = 0x215e0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x215e10: 0x34210fdb
    ctx->pc = 0x215e10u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215e14: 0x44810000
    ctx->pc = 0x215e14u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215e18: 0x10000014
    ctx->pc = 0x215E18u;
    {
        const bool branch_taken_0x215e18 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215E1Cu;
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x215e18) {
            ctx->pc = 0x215E6Cu;
            goto label_215e6c;
        }
    }
    ctx->pc = 0x215E20u;
label_215e20:
    // 0x215e20: 0xc4410104
    ctx->pc = 0x215e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215e24: 0xc4400108
    ctx->pc = 0x215e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215e28: 0x46000840
    ctx->pc = 0x215e28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215e2c: 0x3c01c049
    ctx->pc = 0x215e2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)49225 << 16));
    // 0x215e30: 0x34210fdb
    ctx->pc = 0x215e30u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215e34: 0x44810000
    ctx->pc = 0x215e34u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215e38: 0x46000836
    ctx->pc = 0x215e38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215e3c: 0x0
    ctx->pc = 0x215e3cu;
    // NOP
    // 0x215e40: 0x45000006
    ctx->pc = 0x215E40u;
    {
        const bool branch_taken_0x215e40 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215E44u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x215e40) {
            ctx->pc = 0x215E5Cu;
            goto label_215e5c;
        }
    }
    ctx->pc = 0x215E48u;
    // 0x215e48: 0x3c0140c9
    ctx->pc = 0x215e48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16585 << 16));
    // 0x215e4c: 0x34210fdb
    ctx->pc = 0x215e4cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4059));
    // 0x215e50: 0x44810000
    ctx->pc = 0x215e50u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x215e54: 0x10000005
    ctx->pc = 0x215E54u;
    {
        const bool branch_taken_0x215e54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215E58u;
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        if (branch_taken_0x215e54) {
            ctx->pc = 0x215E6Cu;
            goto label_215e6c;
        }
    }
    ctx->pc = 0x215E5Cu;
label_215e5c:
    // 0x215e5c: 0x8c42f77c
    ctx->pc = 0x215e5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x215e60: 0xc4410104
    ctx->pc = 0x215e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215e64: 0xc4400108
    ctx->pc = 0x215e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215e68: 0x46000840
    ctx->pc = 0x215e68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_215e6c:
    // 0x215e6c: 0xe4610104
    ctx->pc = 0x215e6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 260), bits); }
    // 0x215e70: 0x3c020032
    ctx->pc = 0x215e70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x215e74: 0x8c44f77c
    ctx->pc = 0x215e74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294965116)));
    // 0x215e78: 0xc48000f4
    ctx->pc = 0x215e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215e7c: 0xc48100f8
    ctx->pc = 0x215e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215e80: 0x46010000
    ctx->pc = 0x215e80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x215e84: 0xe48000f4
    ctx->pc = 0x215e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
    // 0x215e88: 0xc48200a4
    ctx->pc = 0x215e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215e8c: 0xc48000bc
    ctx->pc = 0x215e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215e90: 0x46001080
    ctx->pc = 0x215e90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x215e94: 0xe48200a4
    ctx->pc = 0x215e94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x215e98: 0xc48000a8
    ctx->pc = 0x215e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215e9c: 0xc48100c0
    ctx->pc = 0x215e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215ea0: 0x46010000
    ctx->pc = 0x215ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x215ea4: 0xe48000a8
    ctx->pc = 0x215ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x215ea8: 0xc48000ac
    ctx->pc = 0x215ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215eac: 0xc48100c4
    ctx->pc = 0x215eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215eb0: 0x46010000
    ctx->pc = 0x215eb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x215eb4: 0xe48000ac
    ctx->pc = 0x215eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x215eb8: 0x8c8301a4
    ctx->pc = 0x215eb8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x215ebc: 0x24630001
    ctx->pc = 0x215ebcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x215ec0: 0x3c020032
    ctx->pc = 0x215ec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x215ec4: 0x8c42f778
    ctx->pc = 0x215ec4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965112)));
    // 0x215ec8: 0x62001a
    ctx->pc = 0x215ec8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x215ecc: 0x1810
    ctx->pc = 0x215eccu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x215ed0: 0x50400001
    ctx->pc = 0x215ED0u;
    {
        const bool branch_taken_0x215ed0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x215ed0) {
            ctx->pc = 0x215ED4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x215ED8u;
            goto label_215ed8;
        }
    }
    ctx->pc = 0x215ED8u;
label_215ed8:
    // 0x215ed8: 0xac8301a4
    ctx->pc = 0x215ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 420), GPR_U32(ctx, 3));
    // 0x215edc: 0x2405000c
    ctx->pc = 0x215edcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 12));
    // 0x215ee0: 0x651018
    ctx->pc = 0x215ee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x215ee4: 0x441821
    ctx->pc = 0x215ee4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x215ee8: 0xe4620114
    ctx->pc = 0x215ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 276), bits); }
    // 0x215eec: 0x8c8201a4
    ctx->pc = 0x215eecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x215ef0: 0x451818
    ctx->pc = 0x215ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x215ef4: 0x641021
    ctx->pc = 0x215ef4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x215ef8: 0xc48000a8
    ctx->pc = 0x215ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215efc: 0xe4400118
    ctx->pc = 0x215efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 280), bits); }
    // 0x215f00: 0x8c8201a4
    ctx->pc = 0x215f00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x215f04: 0x451818
    ctx->pc = 0x215f04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x215f08: 0x641021
    ctx->pc = 0x215f08u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x215f0c: 0xc48000ac
    ctx->pc = 0x215f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215f10: 0xe440011c
    ctx->pc = 0x215f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x215f14: 0x8c8201a4
    ctx->pc = 0x215f14u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x215f18: 0x21080
    ctx->pc = 0x215f18u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x215f1c: 0x821021
    ctx->pc = 0x215f1cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x215f20: 0xc48000f4
    ctx->pc = 0x215f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215f24: 0xc08504a
    ctx->pc = 0x215F24u;
    SET_GPR_U32(ctx, 31, 0x215F2Cu);
    ctx->pc = 0x215F28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x214128u;
    {
        const uint32_t __entryPc = ctx->pc;
        CamUpdate_0x214128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F2Cu; }
    }
    if (ctx->pc != 0x215F2Cu) { return; }
    ctx->pc = 0x215F2Cu;
    // 0x215f2c: 0x3c020032
    ctx->pc = 0x215f2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x215f30: 0x8c42f784
    ctx->pc = 0x215f30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294965124)));
    // 0x215f34: 0x1c400013
    ctx->pc = 0x215F34u;
    {
        const bool branch_taken_0x215f34 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x215F38u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x215f34) {
            ctx->pc = 0x215F84u;
            goto label_215f84;
        }
    }
    ctx->pc = 0x215F3Cu;
    // 0x215f3c: 0x802d
    ctx->pc = 0x215f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215f40: 0x3c110032
    ctx->pc = 0x215f40u;
    SET_GPR_U32(ctx, 17, ((uint32_t)50 << 16));
    // 0x215f44: 0x0
    ctx->pc = 0x215f44u;
    // NOP
label_215f48:
    // 0x215f48: 0xc08582a
    ctx->pc = 0x215F48u;
    SET_GPR_U32(ctx, 31, 0x215F50u);
    ctx->pc = 0x215F4Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 4294965116)));
    ctx->pc = 0x2160A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateCam_0x2160a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F50u; }
    }
    if (ctx->pc != 0x215F50u) { return; }
    ctx->pc = 0x215F50u;
    // 0x215f50: 0xc0ab452
    ctx->pc = 0x215F50u;
    SET_GPR_U32(ctx, 31, 0x215F58u);
    ctx->pc = 0x215F54u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2AD148u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbUpdateMatricies_0x2ad148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215F58u; }
    }
    if (ctx->pc != 0x215F58u) { return; }
    ctx->pc = 0x215F58u;
    // 0x215f58: 0x2a020009
    ctx->pc = 0x215f58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 9));
    // 0x215f5c: 0x1440fffa
    ctx->pc = 0x215F5Cu;
    {
        const bool branch_taken_0x215f5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x215F60u;
        SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
        if (branch_taken_0x215f5c) {
            ctx->pc = 0x215F48u;
            goto label_215f48;
        }
    }
    ctx->pc = 0x215F64u;
    // 0x215f64: 0x8c62f784
    ctx->pc = 0x215f64u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965124)));
    // 0x215f68: 0x2442ffff
    ctx->pc = 0x215f68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x215f6c: 0xac62f784
    ctx->pc = 0x215f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965124), GPR_U32(ctx, 2));
    // 0x215f70: 0x3c020032
    ctx->pc = 0x215f70u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x215f74: 0xac40080c
    ctx->pc = 0x215f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2060), GPR_U32(ctx, 0));
    // 0x215f78: 0x3c020032
    ctx->pc = 0x215f78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x215f7c: 0xac400808
    ctx->pc = 0x215f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2056), GPR_U32(ctx, 0));
    // 0x215f80: 0x3c030032
    ctx->pc = 0x215f80u;
    SET_GPR_U32(ctx, 3, ((uint32_t)50 << 16));
label_215f84:
    // 0x215f84: 0x8c62f784
    ctx->pc = 0x215f84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294965124)));
    // 0x215f88: 0x2442ffff
    ctx->pc = 0x215f88u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x215f8c: 0xac62f784
    ctx->pc = 0x215f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965124), GPR_U32(ctx, 2));
    // 0x215f90: 0xdfbf0200
    ctx->pc = 0x215f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x215f94: 0xdfb101f0
    ctx->pc = 0x215f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x215f98: 0xdfb001e0
    ctx->pc = 0x215f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x215f9c: 0x3e00008
    ctx->pc = 0x215F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215FA0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215B7Cu: goto label_215b7c;
            case 0x215BB8u: goto label_215bb8;
            case 0x215BC8u: goto label_215bc8;
            case 0x215C28u: goto label_215c28;
            case 0x215C68u: goto label_215c68;
            case 0x215C78u: goto label_215c78;
            case 0x215D48u: goto label_215d48;
            case 0x215D88u: goto label_215d88;
            case 0x215DC8u: goto label_215dc8;
            case 0x215DD8u: goto label_215dd8;
            case 0x215E20u: goto label_215e20;
            case 0x215E5Cu: goto label_215e5c;
            case 0x215E6Cu: goto label_215e6c;
            case 0x215ED8u: goto label_215ed8;
            case 0x215F48u: goto label_215f48;
            case 0x215F84u: goto label_215f84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215FA4u;
}
