#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrlPre__18KomonoTrnRigidTaskFv
// Address: 0x21dbb0 - 0x21df50
void ctrlPre__18KomonoTrnRigidTaskFv_0x21dbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrlPre__18KomonoTrnRigidTaskFv");


    ctx->pc = 0x21dbb0u;

    // 0x21dbb0: 0x27bdff60
    ctx->pc = 0x21dbb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x21dbb4: 0x7fbf0090
    ctx->pc = 0x21dbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 31));
    // 0x21dbb8: 0x7fb70080
    ctx->pc = 0x21dbb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x21dbbc: 0x7fb60070
    ctx->pc = 0x21dbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x21dbc0: 0x7fb50060
    ctx->pc = 0x21dbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x21dbc4: 0x7fb40050
    ctx->pc = 0x21dbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x21dbc8: 0x7fb30040
    ctx->pc = 0x21dbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x21dbcc: 0x7fb20030
    ctx->pc = 0x21dbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x21dbd0: 0x7fb10020
    ctx->pc = 0x21dbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21dbd4: 0x7fb00010
    ctx->pc = 0x21dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21dbd8: 0xe7b60008
    ctx->pc = 0x21dbd8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x21dbdc: 0xe7b50004
    ctx->pc = 0x21dbdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21dbe0: 0xe7b40000
    ctx->pc = 0x21dbe0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21dbe4: 0x8c830170
    ctx->pc = 0x21dbe4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 368)));
    // 0x21dbe8: 0x1c60002f
    ctx->pc = 0x21DBE8u;
    {
        const bool branch_taken_0x21dbe8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x21DBECu;
        SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21dbe8) {
            ctx->pc = 0x21DCA8u;
            goto label_21dca8;
        }
    }
    ctx->pc = 0x21DBF0u;
    // 0x21dbf0: 0x3c033dcc
    ctx->pc = 0x21dbf0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15820 << 16));
    // 0x21dbf4: 0x3463cccd
    ctx->pc = 0x21dbf4u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x21dbf8: 0x44831800
    ctx->pc = 0x21dbf8u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 3);
    // 0x21dbfc: 0x70002628
    ctx->pc = 0x21dbfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21dc00: 0x3c033da3
    ctx->pc = 0x21dc00u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15779 << 16));
    // 0x21dc04: 0x3463d70a
    ctx->pc = 0x21dc04u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 55050));
    // 0x21dc08: 0x44830800
    ctx->pc = 0x21dc08u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x21dc0c: 0x10000022
    ctx->pc = 0x21DC0Cu;
    {
        const bool branch_taken_0x21dc0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DC10u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 464));
        if (branch_taken_0x21dc0c) {
            ctx->pc = 0x21DC98u;
            goto label_21dc98;
        }
    }
    ctx->pc = 0x21DC14u;
label_21dc14:
    // 0x21dc14: 0xc4a20004
    ctx->pc = 0x21dc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21dc18: 0xc6c0017c
    ctx->pc = 0x21dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dc1c: 0x46001036
    ctx->pc = 0x21dc1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21dc20: 0x0
    ctx->pc = 0x21dc20u;
    // NOP
    // 0x21dc24: 0x4500000a
    ctx->pc = 0x21DC24u;
    {
        const bool branch_taken_0x21dc24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21dc24) {
            ctx->pc = 0x21DC50u;
            goto label_21dc50;
        }
    }
    ctx->pc = 0x21DC2Cu;
    // 0x21dc2c: 0xc4a00018
    ctx->pc = 0x21dc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dc30: 0x46030002
    ctx->pc = 0x21dc30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21dc34: 0xe4a00018
    ctx->pc = 0x21dc34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x21dc38: 0xc4a0001c
    ctx->pc = 0x21dc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dc3c: 0x46030002
    ctx->pc = 0x21dc3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21dc40: 0xe4a0001c
    ctx->pc = 0x21dc40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x21dc44: 0xc4a00020
    ctx->pc = 0x21dc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dc48: 0x46030002
    ctx->pc = 0x21dc48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x21dc4c: 0xe4a00020
    ctx->pc = 0x21dc4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_21dc50:
    // 0x21dc50: 0xc4a20018
    ctx->pc = 0x21dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21dc54: 0xc4a00000
    ctx->pc = 0x21dc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dc58: 0x24840001
    ctx->pc = 0x21dc58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x21dc5c: 0x46020000
    ctx->pc = 0x21dc5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x21dc60: 0xe4a00000
    ctx->pc = 0x21dc60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x21dc64: 0xc4a2001c
    ctx->pc = 0x21dc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21dc68: 0xc4a00004
    ctx->pc = 0x21dc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dc6c: 0x46020000
    ctx->pc = 0x21dc6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x21dc70: 0xe4a00004
    ctx->pc = 0x21dc70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21dc74: 0xc4a20020
    ctx->pc = 0x21dc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21dc78: 0xc4a00008
    ctx->pc = 0x21dc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dc7c: 0x46020000
    ctx->pc = 0x21dc7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x21dc80: 0xe4a00008
    ctx->pc = 0x21dc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x21dc84: 0xc4a00004
    ctx->pc = 0x21dc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dc88: 0x46010001
    ctx->pc = 0x21dc88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21dc8c: 0xe4a00004
    ctx->pc = 0x21dc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21dc90: 0x24a50128
    ctx->pc = 0x21dc90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 296));
    // 0x21dc94: 0x0
    ctx->pc = 0x21dc94u;
    // NOP
label_21dc98:
    // 0x21dc98: 0x8ec30178
    ctx->pc = 0x21dc98u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 376)));
    // 0x21dc9c: 0x83182a
    ctx->pc = 0x21dc9cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x21dca0: 0x1460ffdc
    ctx->pc = 0x21DCA0u;
    {
        const bool branch_taken_0x21dca0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21dca0) {
            ctx->pc = 0x21DC14u;
            goto label_21dc14;
        }
    }
    ctx->pc = 0x21DCA8u;
label_21dca8:
    // 0x21dca8: 0x8ec30170
    ctx->pc = 0x21dca8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 368)));
    // 0x21dcac: 0x1c600046
    ctx->pc = 0x21DCACu;
    {
        const bool branch_taken_0x21dcac = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x21DCB0u;
        SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21dcac) {
            ctx->pc = 0x21DDC8u;
            goto label_21ddc8;
        }
    }
    ctx->pc = 0x21DCB4u;
    // 0x21dcb4: 0x26d501d0
    ctx->pc = 0x21dcb4u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 22), 464));
label_21dcb8:
    // 0x21dcb8: 0x1000003b
    ctx->pc = 0x21DCB8u;
    {
        const bool branch_taken_0x21dcb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DCBCu;
        SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21dcb8) {
            ctx->pc = 0x21DDA8u;
            goto label_21dda8;
        }
    }
    ctx->pc = 0x21DCC0u;
label_21dcc0:
    // 0x21dcc0: 0x8eb10124
    ctx->pc = 0x21dcc0u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 21), 292)));
    // 0x21dcc4: 0x11082a
    ctx->pc = 0x21dcc4u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 0), GPR_S32(ctx, 17)));
    // 0x21dcc8: 0x10200035
    ctx->pc = 0x21DCC8u;
    {
        const bool branch_taken_0x21dcc8 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DCCCu;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21dcc8) {
            ctx->pc = 0x21DDA0u;
            goto label_21dda0;
        }
    }
    ctx->pc = 0x21DCD0u;
    // 0x21dcd0: 0x72a09e28
    ctx->pc = 0x21dcd0u;
    SET_GPR_VEC(ctx, 19, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x21dcd4: 0x0
    ctx->pc = 0x21dcd4u;
    // NOP
label_21dcd8:
    // 0x21dcd8: 0x8e7200a4
    ctx->pc = 0x21dcd8u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 19), 164)));
    // 0x21dcdc: 0xc6a40000
    ctx->pc = 0x21dcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21dce0: 0xc6a20004
    ctx->pc = 0x21dce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21dce4: 0xc6a00008
    ctx->pc = 0x21dce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dce8: 0xc6450000
    ctx->pc = 0x21dce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21dcec: 0xc6430004
    ctx->pc = 0x21dcecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21dcf0: 0xc6410008
    ctx->pc = 0x21dcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dcf4: 0x46042d01
    ctx->pc = 0x21dcf4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
    // 0x21dcf8: 0x46000d81
    ctx->pc = 0x21dcf8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21dcfc: 0x46021d41
    ctx->pc = 0x21dcfcu;
    ctx->f[21] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x21dd00: 0x4614a042
    ctx->pc = 0x21dd00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x21dd04: 0x4615a802
    ctx->pc = 0x21dd04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
    // 0x21dd08: 0x46000818
    ctx->pc = 0x21dd08u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21dd0c: 0xc06c2a8
    ctx->pc = 0x21DD0Cu;
    SET_GPR_U32(ctx, 31, 0x21DD14u);
    ctx->pc = 0x21DD10u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[22]));
    ctx->pc = 0x1B0AA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0AA0_0x1b0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21DD14u; }
        else if (ctx->pc != 0x21DD14u) { ctx->pc = 0x21DD14u; }
    }
    if (ctx->pc != 0x21DD14u) { return; }
    ctx->pc = 0x21DD14u;
    // 0x21dd14: 0x0
    ctx->pc = 0x21dd14u;
    // NOP
    // 0x21dd18: 0x0
    ctx->pc = 0x21dd18u;
    // NOP
    // 0x21dd1c: 0xc6620024
    ctx->pc = 0x21dd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21dd20: 0x26100001
    ctx->pc = 0x21dd20u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x21dd24: 0x3c044000
    ctx->pc = 0x21dd24u;
    SET_GPR_U32(ctx, 4, ((uint32_t)16384 << 16));
    // 0x21dd28: 0x4600a503
    ctx->pc = 0x21dd28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x21dd2c: 0xc6a10000
    ctx->pc = 0x21dd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dd30: 0x211182a
    ctx->pc = 0x21dd30u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x21dd34: 0x26730004
    ctx->pc = 0x21dd34u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 19), 4));
    // 0x21dd38: 0x460200c1
    ctx->pc = 0x21dd38u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21dd3c: 0x44841000
    ctx->pc = 0x21dd3cu;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 4);
    // 0x21dd40: 0x4600ad43
    ctx->pc = 0x21dd40u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[21] = ctx->f[21] / ctx->f[0];
    // 0x21dd44: 0x46021883
    ctx->pc = 0x21dd44u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[2] = ctx->f[3] / ctx->f[2];
    // 0x21dd48: 0x4600b583
    ctx->pc = 0x21dd48u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[22] = ctx->f[22] / ctx->f[0];
    // 0x21dd4c: 0x4602a0c2
    ctx->pc = 0x21dd4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x21dd50: 0x46030800
    ctx->pc = 0x21dd50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x21dd54: 0xe6a00000
    ctx->pc = 0x21dd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x21dd58: 0x4602a842
    ctx->pc = 0x21dd58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
    // 0x21dd5c: 0xc6a00004
    ctx->pc = 0x21dd5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd60: 0x4602b082
    ctx->pc = 0x21dd60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[22], ctx->f[2]);
    // 0x21dd64: 0x46010000
    ctx->pc = 0x21dd64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21dd68: 0xe6a00004
    ctx->pc = 0x21dd68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x21dd6c: 0xc6a00008
    ctx->pc = 0x21dd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd70: 0x46020000
    ctx->pc = 0x21dd70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x21dd74: 0xe6a00008
    ctx->pc = 0x21dd74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
    // 0x21dd78: 0xc6400000
    ctx->pc = 0x21dd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd7c: 0x46030001
    ctx->pc = 0x21dd7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x21dd80: 0xe6400000
    ctx->pc = 0x21dd80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x21dd84: 0xc6400004
    ctx->pc = 0x21dd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd88: 0x46010001
    ctx->pc = 0x21dd88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21dd8c: 0xe6400004
    ctx->pc = 0x21dd8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x21dd90: 0xc6400008
    ctx->pc = 0x21dd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dd94: 0x46020001
    ctx->pc = 0x21dd94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x21dd98: 0x1460ffcf
    ctx->pc = 0x21DD98u;
    {
        const bool branch_taken_0x21dd98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21DD9Cu;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        if (branch_taken_0x21dd98) {
            ctx->pc = 0x21DCD8u;
            goto label_21dcd8;
        }
    }
    ctx->pc = 0x21DDA0u;
label_21dda0:
    // 0x21dda0: 0x26b50128
    ctx->pc = 0x21dda0u;
    SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 21), 296));
    // 0x21dda4: 0x26940001
    ctx->pc = 0x21dda4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 20), 1));
label_21dda8:
    // 0x21dda8: 0x8ec30178
    ctx->pc = 0x21dda8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 376)));
    // 0x21ddac: 0x283182a
    ctx->pc = 0x21ddacu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 20), GPR_S32(ctx, 3)));
    // 0x21ddb0: 0x1460ffc3
    ctx->pc = 0x21DDB0u;
    {
        const bool branch_taken_0x21ddb0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21ddb0) {
            ctx->pc = 0x21DCC0u;
            goto label_21dcc0;
        }
    }
    ctx->pc = 0x21DDB8u;
    // 0x21ddb8: 0x26f70001
    ctx->pc = 0x21ddb8u;
    SET_GPR_S32(ctx, 23, ADD32(GPR_U32(ctx, 23), 1));
    // 0x21ddbc: 0x2ae30004
    ctx->pc = 0x21ddbcu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 23), 4));
    // 0x21ddc0: 0x1460ffbd
    ctx->pc = 0x21DDC0u;
    {
        const bool branch_taken_0x21ddc0 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x21DDC4u;
        SET_GPR_S32(ctx, 21, ADD32(GPR_U32(ctx, 22), 464));
        if (branch_taken_0x21ddc0) {
            ctx->pc = 0x21DCB8u;
            goto label_21dcb8;
        }
    }
    ctx->pc = 0x21DDC8u;
label_21ddc8:
    // 0x21ddc8: 0x8ec30170
    ctx->pc = 0x21ddc8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 368)));
    // 0x21ddcc: 0x1c600052
    ctx->pc = 0x21DDCCu;
    {
        const bool branch_taken_0x21ddcc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x21ddcc) {
            ctx->pc = 0x21DF18u;
            goto label_21df18;
        }
    }
    ctx->pc = 0x21DDD4u;
    // 0x21ddd4: 0x8ec30174
    ctx->pc = 0x21ddd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 372)));
    // 0x21ddd8: 0x18600013
    ctx->pc = 0x21DDD8u;
    {
        const bool branch_taken_0x21ddd8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x21DDDCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21ddd8) {
            ctx->pc = 0x21DE28u;
            goto label_21de28;
        }
    }
    ctx->pc = 0x21DDE0u;
    // 0x21dde0: 0x70002628
    ctx->pc = 0x21dde0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21dde4: 0x1000000a
    ctx->pc = 0x21DDE4u;
    {
        const bool branch_taken_0x21dde4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DDE8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 464));
        if (branch_taken_0x21dde4) {
            ctx->pc = 0x21DE10u;
            goto label_21de10;
        }
    }
    ctx->pc = 0x21DDECu;
label_21ddec:
    // 0x21ddec: 0xc4a00004
    ctx->pc = 0x21ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21ddf0: 0xc6c1017c
    ctx->pc = 0x21ddf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21ddf4: 0x46010034
    ctx->pc = 0x21ddf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21ddf8: 0x0
    ctx->pc = 0x21ddf8u;
    // NOP
    // 0x21ddfc: 0x45020003
    ctx->pc = 0x21DDFCu;
    {
        const bool branch_taken_0x21ddfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21ddfc) {
            ctx->pc = 0x21DE00u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x21DE0Cu;
            goto label_21de0c;
        }
    }
    ctx->pc = 0x21DE04u;
    // 0x21de04: 0xe4a10004
    ctx->pc = 0x21de04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21de08: 0x24840001
    ctx->pc = 0x21de08u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_21de0c:
    // 0x21de0c: 0x24a50128
    ctx->pc = 0x21de0cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 296));
label_21de10:
    // 0x21de10: 0x8ec30178
    ctx->pc = 0x21de10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 376)));
    // 0x21de14: 0x83182a
    ctx->pc = 0x21de14u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x21de18: 0x1460fff4
    ctx->pc = 0x21DE18u;
    {
        const bool branch_taken_0x21de18 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21de18) {
            ctx->pc = 0x21DDECu;
            goto label_21ddec;
        }
    }
    ctx->pc = 0x21DE20u;
    // 0x21de20: 0x10000016
    ctx->pc = 0x21DE20u;
    {
        const bool branch_taken_0x21de20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DE24u;
        SET_GPR_U32(ctx, 3, ((uint32_t)16245 << 16));
        if (branch_taken_0x21de20) {
            ctx->pc = 0x21DE7Cu;
            goto label_21de7c;
        }
    }
    ctx->pc = 0x21DE28u;
label_21de28:
    // 0x21de28: 0x1000000f
    ctx->pc = 0x21DE28u;
    {
        const bool branch_taken_0x21de28 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DE2Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 464));
        if (branch_taken_0x21de28) {
            ctx->pc = 0x21DE68u;
            goto label_21de68;
        }
    }
    ctx->pc = 0x21DE30u;
label_21de30:
    // 0x21de30: 0xc4a10004
    ctx->pc = 0x21de30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21de34: 0xc6c0017c
    ctx->pc = 0x21de34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21de38: 0x46000836
    ctx->pc = 0x21de38u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21de3c: 0x0
    ctx->pc = 0x21de3cu;
    // NOP
    // 0x21de40: 0x45020008
    ctx->pc = 0x21DE40u;
    {
        const bool branch_taken_0x21de40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21de40) {
            ctx->pc = 0x21DE44u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x21DE64u;
            goto label_21de64;
        }
    }
    ctx->pc = 0x21DE48u;
    // 0x21de48: 0xc4a0000c
    ctx->pc = 0x21de48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21de4c: 0xe4a00000
    ctx->pc = 0x21de4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x21de50: 0xc4a00010
    ctx->pc = 0x21de50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21de54: 0xe4a00004
    ctx->pc = 0x21de54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x21de58: 0xc4a00014
    ctx->pc = 0x21de58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21de5c: 0xe4a00008
    ctx->pc = 0x21de5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x21de60: 0x24840001
    ctx->pc = 0x21de60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_21de64:
    // 0x21de64: 0x24a50128
    ctx->pc = 0x21de64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 296));
label_21de68:
    // 0x21de68: 0x8ec30178
    ctx->pc = 0x21de68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 376)));
    // 0x21de6c: 0x83182a
    ctx->pc = 0x21de6cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x21de70: 0x1460ffef
    ctx->pc = 0x21DE70u;
    {
        const bool branch_taken_0x21de70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21de70) {
            ctx->pc = 0x21DE30u;
            goto label_21de30;
        }
    }
    ctx->pc = 0x21DE78u;
    // 0x21de78: 0x3c033f75
    ctx->pc = 0x21de78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16245 << 16));
label_21de7c:
    // 0x21de7c: 0x3463c28f
    ctx->pc = 0x21de7cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 49807));
    // 0x21de80: 0x44831000
    ctx->pc = 0x21de80u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
    // 0x21de84: 0x8ec4016c
    ctx->pc = 0x21de84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 22), 364)));
    // 0x21de88: 0x3c030041
    ctx->pc = 0x21de88u;
    SET_GPR_U32(ctx, 3, ((uint32_t)65 << 16));
    // 0x21de8c: 0x34630050
    ctx->pc = 0x21de8cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 80));
    // 0x21de90: 0x14830004
    ctx->pc = 0x21DE90u;
    {
        const bool branch_taken_0x21de90 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x21DE94u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21de90) {
            ctx->pc = 0x21DEA4u;
            goto label_21dea4;
        }
    }
    ctx->pc = 0x21DE98u;
    // 0x21de98: 0x3c033f6b
    ctx->pc = 0x21de98u;
    SET_GPR_U32(ctx, 3, ((uint32_t)16235 << 16));
    // 0x21de9c: 0x3463851f
    ctx->pc = 0x21de9cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 34079));
    // 0x21dea0: 0x44831000
    ctx->pc = 0x21dea0u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 3);
label_21dea4:
    // 0x21dea4: 0x10000018
    ctx->pc = 0x21DEA4u;
    {
        const bool branch_taken_0x21dea4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21DEA8u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 22), 464));
        if (branch_taken_0x21dea4) {
            ctx->pc = 0x21DF08u;
            goto label_21df08;
        }
    }
    ctx->pc = 0x21DEACu;
label_21deac:
    // 0x21deac: 0xc4a10000
    ctx->pc = 0x21deacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21deb0: 0xc4a0000c
    ctx->pc = 0x21deb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21deb4: 0x24840001
    ctx->pc = 0x21deb4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x21deb8: 0x46000801
    ctx->pc = 0x21deb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21debc: 0x46001002
    ctx->pc = 0x21debcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21dec0: 0xe4a00018
    ctx->pc = 0x21dec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x21dec4: 0xc4a10004
    ctx->pc = 0x21dec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dec8: 0xc4a00010
    ctx->pc = 0x21dec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21decc: 0x46000801
    ctx->pc = 0x21deccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21ded0: 0x46001002
    ctx->pc = 0x21ded0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21ded4: 0xe4a0001c
    ctx->pc = 0x21ded4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x21ded8: 0xc4a10008
    ctx->pc = 0x21ded8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21dedc: 0xc4a00014
    ctx->pc = 0x21dedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dee0: 0x46000801
    ctx->pc = 0x21dee0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21dee4: 0x46001002
    ctx->pc = 0x21dee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21dee8: 0xe4a00020
    ctx->pc = 0x21dee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x21deec: 0xc4a00000
    ctx->pc = 0x21deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21def0: 0xe4a0000c
    ctx->pc = 0x21def0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x21def4: 0xc4a00004
    ctx->pc = 0x21def4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21def8: 0xe4a00010
    ctx->pc = 0x21def8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x21defc: 0xc4a00008
    ctx->pc = 0x21defcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21df00: 0xe4a00014
    ctx->pc = 0x21df00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x21df04: 0x24a50128
    ctx->pc = 0x21df04u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 296));
label_21df08:
    // 0x21df08: 0x8ec30178
    ctx->pc = 0x21df08u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 376)));
    // 0x21df0c: 0x83182a
    ctx->pc = 0x21df0cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 3)));
    // 0x21df10: 0x1460ffe6
    ctx->pc = 0x21DF10u;
    {
        const bool branch_taken_0x21df10 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21df10) {
            ctx->pc = 0x21DEACu;
            goto label_21deac;
        }
    }
    ctx->pc = 0x21DF18u;
label_21df18:
    // 0x21df18: 0x7bbf0090
    ctx->pc = 0x21df18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21df1c: 0x7bb70080
    ctx->pc = 0x21df1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21df20: 0x7bb60070
    ctx->pc = 0x21df20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21df24: 0x7bb50060
    ctx->pc = 0x21df24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21df28: 0x7bb40050
    ctx->pc = 0x21df28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21df2c: 0x7bb30040
    ctx->pc = 0x21df2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21df30: 0x7bb20030
    ctx->pc = 0x21df30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21df34: 0x7bb10020
    ctx->pc = 0x21df34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21df38: 0x7bb00010
    ctx->pc = 0x21df38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21df3c: 0xc7b60008
    ctx->pc = 0x21df3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x21df40: 0xc7b50004
    ctx->pc = 0x21df40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21df44: 0xc7b40000
    ctx->pc = 0x21df44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21df48: 0x3e00008
    ctx->pc = 0x21DF48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21DF4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21DC14u: goto label_21dc14;
            case 0x21DC50u: goto label_21dc50;
            case 0x21DC98u: goto label_21dc98;
            case 0x21DCA8u: goto label_21dca8;
            case 0x21DCB8u: goto label_21dcb8;
            case 0x21DCC0u: goto label_21dcc0;
            case 0x21DCD8u: goto label_21dcd8;
            case 0x21DDA0u: goto label_21dda0;
            case 0x21DDA8u: goto label_21dda8;
            case 0x21DDC8u: goto label_21ddc8;
            case 0x21DDECu: goto label_21ddec;
            case 0x21DE0Cu: goto label_21de0c;
            case 0x21DE10u: goto label_21de10;
            case 0x21DE28u: goto label_21de28;
            case 0x21DE30u: goto label_21de30;
            case 0x21DE64u: goto label_21de64;
            case 0x21DE68u: goto label_21de68;
            case 0x21DE7Cu: goto label_21de7c;
            case 0x21DEA4u: goto label_21dea4;
            case 0x21DEACu: goto label_21deac;
            case 0x21DF08u: goto label_21df08;
            case 0x21DF18u: goto label_21df18;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21DF50u;
}
