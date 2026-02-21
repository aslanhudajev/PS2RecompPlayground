#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: do_enemy_move
// Address: 0x243a08 - 0x2442e8
void do_enemy_move_0x243a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x243a08u;

    // 0x243a08: 0x27bdff10
    ctx->pc = 0x243a08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x243a0c: 0xffbf00d0
    ctx->pc = 0x243a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x243a10: 0xffb400c0
    ctx->pc = 0x243a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x243a14: 0xffb300b0
    ctx->pc = 0x243a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x243a18: 0xffb200a0
    ctx->pc = 0x243a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x243a1c: 0xffb10090
    ctx->pc = 0x243a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x243a20: 0xffb00080
    ctx->pc = 0x243a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x243a24: 0xe7b500e8
    ctx->pc = 0x243a24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x243a28: 0xe7b400e0
    ctx->pc = 0x243a28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x243a2c: 0x80902d
    ctx->pc = 0x243a2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243a30: 0x240303b0
    ctx->pc = 0x243a30u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x243a34: 0x2431818
    ctx->pc = 0x243a34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x243a38: 0x3c020033
    ctx->pc = 0x243a38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x243a3c: 0x2442dfd0
    ctx->pc = 0x243a3cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x243a40: 0x628021
    ctx->pc = 0x243a40u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x243a44: 0x86130324
    ctx->pc = 0x243a44u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 804)));
    // 0x243a48: 0xa02d
    ctx->pc = 0x243a48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243a4c: 0xc615024c
    ctx->pc = 0x243a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x243a50: 0x8e030220
    ctx->pc = 0x243a50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x243a54: 0x18600008
    ctx->pc = 0x243A54u;
    {
        const bool branch_taken_0x243a54 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x243A58u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        if (branch_taken_0x243a54) {
            ctx->pc = 0x243A78u;
            goto label_243a78;
        }
    }
    ctx->pc = 0x243A5Cu;
    // 0x243a5c: 0x3c020031
    ctx->pc = 0x243a5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x243a60: 0x8c42ffbc
    ctx->pc = 0x243a60u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x243a64: 0x621023
    ctx->pc = 0x243a64u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x243a68: 0xae020220
    ctx->pc = 0x243a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
    // 0x243a6c: 0xae000224
    ctx->pc = 0x243a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x243a70: 0xae000228
    ctx->pc = 0x243a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x243a74: 0xae00022c
    ctx->pc = 0x243a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_243a78:
    // 0x243a78: 0x8e0200e0
    ctx->pc = 0x243a78u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x243a7c: 0x2842001c
    ctx->pc = 0x243a7cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 28));
    // 0x243a80: 0x14400004
    ctx->pc = 0x243A80u;
    {
        const bool branch_taken_0x243a80 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x243A84u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x243a80) {
            ctx->pc = 0x243A94u;
            goto label_243a94;
        }
    }
    ctx->pc = 0x243A88u;
    // 0x243a88: 0xae000224
    ctx->pc = 0x243a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x243a8c: 0xae000228
    ctx->pc = 0x243a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x243a90: 0xae00022c
    ctx->pc = 0x243a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_243a94:
    // 0x243a94: 0xc60c0270
    ctx->pc = 0x243a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x243a98: 0xc442ffa8
    ctx->pc = 0x243a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x243a9c: 0x46026302
    ctx->pc = 0x243a9cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
    // 0x243aa0: 0xc6000224
    ctx->pc = 0x243aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243aa4: 0x46006300
    ctx->pc = 0x243aa4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x243aa8: 0xe60c0224
    ctx->pc = 0x243aa8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x243aac: 0xc6000274
    ctx->pc = 0x243aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243ab0: 0x46020002
    ctx->pc = 0x243ab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x243ab4: 0xc6010228
    ctx->pc = 0x243ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243ab8: 0x46010000
    ctx->pc = 0x243ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x243abc: 0xe6000228
    ctx->pc = 0x243abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
    // 0x243ac0: 0xc60d0278
    ctx->pc = 0x243ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x243ac4: 0x46026b42
    ctx->pc = 0x243ac4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
    // 0x243ac8: 0xc600022c
    ctx->pc = 0x243ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243acc: 0x46006b40
    ctx->pc = 0x243accu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x243ad0: 0xc0b5c34
    ctx->pc = 0x243AD0u;
    SET_GPR_U32(ctx, 31, 0x243AD8u);
    ctx->pc = 0x243AD4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
    ctx->pc = 0x2D70D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        fqdist_0x2d70d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243AD8u; }
    }
    if (ctx->pc != 0x243AD8u) { return; }
    ctx->pc = 0x243AD8u;
    // 0x243ad8: 0x46000306
    ctx->pc = 0x243ad8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x243adc: 0x3c013a83
    ctx->pc = 0x243adcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)14979 << 16));
    // 0x243ae0: 0x3421126f
    ctx->pc = 0x243ae0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 4719));
    // 0x243ae4: 0x44810000
    ctx->pc = 0x243ae4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x243ae8: 0x460c0034
    ctx->pc = 0x243ae8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243aec: 0x0
    ctx->pc = 0x243aecu;
    // NOP
    // 0x243af0: 0x45000003
    ctx->pc = 0x243AF0u;
    {
        const bool branch_taken_0x243af0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243AF4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x243af0) {
            ctx->pc = 0x243B00u;
            goto label_243b00;
        }
    }
    ctx->pc = 0x243AF8u;
    // 0x243af8: 0x10000002
    ctx->pc = 0x243AF8u;
    {
        const bool branch_taken_0x243af8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243AFCu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 660), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x243af8) {
            ctx->pc = 0x243B04u;
            goto label_243b04;
        }
    }
    ctx->pc = 0x243B00u;
label_243b00:
    // 0x243b00: 0xa6000294
    ctx->pc = 0x243b00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 660), (uint16_t)GPR_U32(ctx, 0));
label_243b04:
    // 0x243b04: 0xc090d78
    ctx->pc = 0x243B04u;
    SET_GPR_U32(ctx, 31, 0x243B0Cu);
    ctx->pc = 0x243B08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2435E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_collide_0x2435e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243B0Cu; }
    }
    if (ctx->pc != 0x243B0Cu) { return; }
    ctx->pc = 0x243B0Cu;
    // 0x243b0c: 0x40882d
    ctx->pc = 0x243b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b10: 0xc6000040
    ctx->pc = 0x243b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243b14: 0xe7a00040
    ctx->pc = 0x243b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x243b18: 0xc6010044
    ctx->pc = 0x243b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243b1c: 0xe7a10044
    ctx->pc = 0x243b1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x243b20: 0xc6020048
    ctx->pc = 0x243b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x243b24: 0xe7a20048
    ctx->pc = 0x243b24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x243b28: 0xc6050224
    ctx->pc = 0x243b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x243b2c: 0x46050000
    ctx->pc = 0x243b2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x243b30: 0xe6000040
    ctx->pc = 0x243b30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x243b34: 0xc6040228
    ctx->pc = 0x243b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x243b38: 0x46040840
    ctx->pc = 0x243b38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x243b3c: 0xe6010044
    ctx->pc = 0x243b3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x243b40: 0xc603022c
    ctx->pc = 0x243b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x243b44: 0x46031080
    ctx->pc = 0x243b44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x243b48: 0xe6020048
    ctx->pc = 0x243b48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x243b4c: 0xc6000060
    ctx->pc = 0x243b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243b50: 0xe7a00050
    ctx->pc = 0x243b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x243b54: 0xc6010064
    ctx->pc = 0x243b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243b58: 0xe7a10054
    ctx->pc = 0x243b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x243b5c: 0xc6020068
    ctx->pc = 0x243b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x243b60: 0xe7a20058
    ctx->pc = 0x243b60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x243b64: 0x46050000
    ctx->pc = 0x243b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x243b68: 0xe7a00060
    ctx->pc = 0x243b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x243b6c: 0x46040840
    ctx->pc = 0x243b6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x243b70: 0xe7a10064
    ctx->pc = 0x243b70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x243b74: 0x46031080
    ctx->pc = 0x243b74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x243b78: 0xe7a20068
    ctx->pc = 0x243b78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x243b7c: 0x860202f0
    ctx->pc = 0x243b7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 752)));
    // 0x243b80: 0x1040000b
    ctx->pc = 0x243B80u;
    {
        const bool branch_taken_0x243b80 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x243B84u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x243b80) {
            ctx->pc = 0x243BB0u;
            goto label_243bb0;
        }
    }
    ctx->pc = 0x243B88u;
    // 0x243b88: 0x3c013f00
    ctx->pc = 0x243b88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x243b8c: 0x44816000
    ctx->pc = 0x243b8cu;
    *(uint32_t*)&ctx->f[12] = GPR_U32(ctx, 1);
    // 0x243b90: 0x282d
    ctx->pc = 0x243b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243b94: 0x27a60050
    ctx->pc = 0x243b94u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 80));
    // 0x243b98: 0x27a70060
    ctx->pc = 0x243b98u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 96));
    // 0x243b9c: 0x460cab00
    ctx->pc = 0x243b9cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[12]);
    // 0x243ba0: 0xc0909ec
    ctx->pc = 0x243BA0u;
    SET_GPR_U32(ctx, 31, 0x243BA8u);
    ctx->pc = 0x243BA4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->pc = 0x2427B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyCollidePlayer_0x2427b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243BA8u; }
    }
    if (ctx->pc != 0x243BA8u) { return; }
    ctx->pc = 0x243BA8u;
    // 0x243ba8: 0x10000003
    ctx->pc = 0x243BA8u;
    {
        const bool branch_taken_0x243ba8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243BACu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
        if (branch_taken_0x243ba8) {
            ctx->pc = 0x243BB8u;
            goto label_243bb8;
        }
    }
    ctx->pc = 0x243BB0u;
label_243bb0:
    // 0x243bb0: 0x2402ffff
    ctx->pc = 0x243bb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x243bb4: 0xae020298
    ctx->pc = 0x243bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
label_243bb8:
    // 0x243bb8: 0x8e020298
    ctx->pc = 0x243bb8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x243bbc: 0x440001e
    ctx->pc = 0x243BBCu;
    {
        const bool branch_taken_0x243bbc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x243BC0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x243bbc) {
            ctx->pc = 0x243C38u;
            goto label_243c38;
        }
    }
    ctx->pc = 0x243BC4u;
    // 0x243bc4: 0xae02029c
    ctx->pc = 0x243bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
    // 0x243bc8: 0xae0002a0
    ctx->pc = 0x243bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
    // 0x243bcc: 0xa6000294
    ctx->pc = 0x243bccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 660), (uint16_t)GPR_U32(ctx, 0));
    // 0x243bd0: 0xc7a00040
    ctx->pc = 0x243bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243bd4: 0xe6000040
    ctx->pc = 0x243bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x243bd8: 0xc7a00044
    ctx->pc = 0x243bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243bdc: 0xe6000044
    ctx->pc = 0x243bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x243be0: 0xc7a00048
    ctx->pc = 0x243be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243be4: 0xe6000048
    ctx->pc = 0x243be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x243be8: 0xae000224
    ctx->pc = 0x243be8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x243bec: 0xae000228
    ctx->pc = 0x243becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x243bf0: 0xae00022c
    ctx->pc = 0x243bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    // 0x243bf4: 0x26040010
    ctx->pc = 0x243bf4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
    // 0x243bf8: 0xc080c70
    ctx->pc = 0x243BF8u;
    SET_GPR_U32(ctx, 31, 0x243C00u);
    ctx->pc = 0x243BFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 576));
    ctx->pc = 0x2031C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjColOffset_0x2031c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C00u; }
    }
    if (ctx->pc != 0x243C00u) { return; }
    ctx->pc = 0x243C00u;
    // 0x243c00: 0x8e050298
    ctx->pc = 0x243c00u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 664)));
    // 0x243c04: 0x24022b00
    ctx->pc = 0x243c04u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 11008));
    // 0x243c08: 0xa22818
    ctx->pc = 0x243c08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x243c0c: 0x3c020032
    ctx->pc = 0x243c0cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x243c10: 0x24421be0
    ctx->pc = 0x243c10u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7136));
    // 0x243c14: 0xa22821
    ctx->pc = 0x243c14u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x243c18: 0x26040040
    ctx->pc = 0x243c18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    // 0x243c1c: 0xc08efd4
    ctx->pc = 0x243C1Cu;
    SET_GPR_U32(ctx, 31, 0x243C24u);
    ctx->pc = 0x243C20u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 48));
    ctx->pc = 0x23BF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_turn_dir_0x23bf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C24u; }
    }
    if (ctx->pc != 0x243C24u) { return; }
    ctx->pc = 0x243C24u;
    // 0x243c24: 0xae020368
    ctx->pc = 0x243c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x243c28: 0xc090b1c
    ctx->pc = 0x243C28u;
    SET_GPR_U32(ctx, 31, 0x243C30u);
    ctx->pc = 0x243C2Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x242C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        do_enemy_attack_0x242c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C30u; }
    }
    if (ctx->pc != 0x243C30u) { return; }
    ctx->pc = 0x243C30u;
    // 0x243c30: 0x10000157
    ctx->pc = 0x243C30u;
    {
        const bool branch_taken_0x243c30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243C34u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 200)));
        if (branch_taken_0x243c30) {
            ctx->pc = 0x244190u;
            goto label_244190;
        }
    }
    ctx->pc = 0x243C38u;
label_243c38:
    // 0x243c38: 0xafa00070
    ctx->pc = 0x243c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x243c3c: 0x8e030000
    ctx->pc = 0x243c3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x243c40: 0x2402001e
    ctx->pc = 0x243c40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 30));
    // 0x243c44: 0x54620008
    ctx->pc = 0x243C44u;
    {
        const bool branch_taken_0x243c44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x243c44) {
            ctx->pc = 0x243C48u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 540)));
            ctx->pc = 0x243C68u;
            goto label_243c68;
        }
    }
    ctx->pc = 0x243C4Cu;
    // 0x243c4c: 0x8e0401f4
    ctx->pc = 0x243c4cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 500)));
    // 0x243c50: 0x4820005
    ctx->pc = 0x243C50u;
    {
        const bool branch_taken_0x243c50 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x243c50) {
            ctx->pc = 0x243C54u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 540)));
            ctx->pc = 0x243C68u;
            goto label_243c68;
        }
    }
    ctx->pc = 0x243C58u;
    // 0x243c58: 0xc09e964
    ctx->pc = 0x243C58u;
    SET_GPR_U32(ctx, 31, 0x243C60u);
    ctx->pc = 0x243C5Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x27A590u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeleteEffect_0x27a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C60u; }
    }
    if (ctx->pc != 0x243C60u) { return; }
    ctx->pc = 0x243C60u;
    // 0x243c60: 0xae0201f4
    ctx->pc = 0x243c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 500), GPR_U32(ctx, 2));
    // 0x243c64: 0x8e03021c
    ctx->pc = 0x243c64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 540)));
label_243c68:
    // 0x243c68: 0x18600006
    ctx->pc = 0x243C68u;
    {
        const bool branch_taken_0x243c68 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x243C6Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x243c68) {
            ctx->pc = 0x243C84u;
            goto label_243c84;
        }
    }
    ctx->pc = 0x243C70u;
    // 0x243c70: 0x8c42ffbc
    ctx->pc = 0x243c70u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x243c74: 0x621023
    ctx->pc = 0x243c74u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x243c78: 0x1c400002
    ctx->pc = 0x243C78u;
    {
        const bool branch_taken_0x243c78 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x243C7Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 2));
        if (branch_taken_0x243c78) {
            ctx->pc = 0x243C84u;
            goto label_243c84;
        }
    }
    ctx->pc = 0x243C80u;
    // 0x243c80: 0xae00021c
    ctx->pc = 0x243c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
label_243c84:
    // 0x243c84: 0x16200008
    ctx->pc = 0x243C84u;
    {
        const bool branch_taken_0x243c84 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x243C88u;
        SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 96));
        if (branch_taken_0x243c84) {
            ctx->pc = 0x243CA8u;
            goto label_243ca8;
        }
    }
    ctx->pc = 0x243C8Cu;
    // 0x243c8c: 0x240202d
    ctx->pc = 0x243c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c90: 0x27a50050
    ctx->pc = 0x243c90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x243c94: 0xe0302d
    ctx->pc = 0x243c94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c98: 0x4600ab06
    ctx->pc = 0x243c98u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x243c9c: 0x4600a346
    ctx->pc = 0x243c9cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x243ca0: 0x10000007
    ctx->pc = 0x243CA0u;
    {
        const bool branch_taken_0x243ca0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243CA4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 29), 112));
        if (branch_taken_0x243ca0) {
            ctx->pc = 0x243CC0u;
            goto label_243cc0;
        }
    }
    ctx->pc = 0x243CA8u;
label_243ca8:
    // 0x243ca8: 0x240202d
    ctx->pc = 0x243ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243cac: 0x27a50050
    ctx->pc = 0x243cacu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x243cb0: 0xe0302d
    ctx->pc = 0x243cb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243cb4: 0x4600ab06
    ctx->pc = 0x243cb4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x243cb8: 0x4600a346
    ctx->pc = 0x243cb8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x243cbc: 0x402d
    ctx->pc = 0x243cbcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243cc0:
    // 0x243cc0: 0xc090a70
    ctx->pc = 0x243CC0u;
    SET_GPR_U32(ctx, 31, 0x243CC8u);
    ctx->pc = 0x2429C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyCollideEnemy_0x2429c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243CC8u; }
    }
    if (ctx->pc != 0x243CC8u) { return; }
    ctx->pc = 0x243CC8u;
    // 0x243cc8: 0xae02029c
    ctx->pc = 0x243cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
    // 0x243ccc: 0x8e04029c
    ctx->pc = 0x243cccu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 668)));
    // 0x243cd0: 0x48000b3
    ctx->pc = 0x243CD0u;
    {
        const bool branch_taken_0x243cd0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x243CD4u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x243cd0) {
            ctx->pc = 0x243FA0u;
            goto label_243fa0;
        }
    }
    ctx->pc = 0x243CD8u;
    // 0x243cd8: 0x3402ffff
    ctx->pc = 0x243cd8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65535));
    // 0x243cdc: 0x44102a
    ctx->pc = 0x243cdcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x243ce0: 0x14400007
    ctx->pc = 0x243CE0u;
    {
        const bool branch_taken_0x243ce0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x243CE4u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 672), GPR_U32(ctx, 0));
        if (branch_taken_0x243ce0) {
            ctx->pc = 0x243D00u;
            goto label_243d00;
        }
    }
    ctx->pc = 0x243CE8u;
    // 0x243ce8: 0x240303b0
    ctx->pc = 0x243ce8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 944));
    // 0x243cec: 0x831818
    ctx->pc = 0x243cecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x243cf0: 0x3c020033
    ctx->pc = 0x243cf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)51 << 16));
    // 0x243cf4: 0x2442dfd0
    ctx->pc = 0x243cf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294959056));
    // 0x243cf8: 0x628821
    ctx->pc = 0x243cf8u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x243cfc: 0xae32029c
    ctx->pc = 0x243cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 18));
label_243d00:
    // 0x243d00: 0x8fa20070
    ctx->pc = 0x243d00u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x243d04: 0x10400028
    ctx->pc = 0x243D04u;
    {
        const bool branch_taken_0x243d04 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x243D08u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x243d04) {
            ctx->pc = 0x243DA8u;
            goto label_243da8;
        }
    }
    ctx->pc = 0x243D0Cu;
    // 0x243d0c: 0xc6010060
    ctx->pc = 0x243d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243d10: 0x46010001
    ctx->pc = 0x243d10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x243d14: 0xe6000224
    ctx->pc = 0x243d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x243d18: 0xc7a00064
    ctx->pc = 0x243d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243d1c: 0xc6010064
    ctx->pc = 0x243d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243d20: 0x46010001
    ctx->pc = 0x243d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x243d24: 0xe6000228
    ctx->pc = 0x243d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
    // 0x243d28: 0xc7a00068
    ctx->pc = 0x243d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243d2c: 0xc6010068
    ctx->pc = 0x243d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243d30: 0x46010001
    ctx->pc = 0x243d30u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x243d34: 0xe600022c
    ctx->pc = 0x243d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
    // 0x243d38: 0x200202d
    ctx->pc = 0x243d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d3c: 0x27a50040
    ctx->pc = 0x243d3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 64));
    // 0x243d40: 0x26060224
    ctx->pc = 0x243d40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 548));
    // 0x243d44: 0xc090c1c
    ctx->pc = 0x243D44u;
    SET_GPR_U32(ctx, 31, 0x243D4Cu);
    ctx->pc = 0x243D48u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->pc = 0x243070u;
    {
        const uint32_t __entryPc = ctx->pc;
        EnemyCollideWalls_0x243070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243D4Cu; }
    }
    if (ctx->pc != 0x243D4Cu) { return; }
    ctx->pc = 0x243D4Cu;
    // 0x243d4c: 0x50400003
    ctx->pc = 0x243D4Cu;
    {
        const bool branch_taken_0x243d4c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x243d4c) {
            ctx->pc = 0x243D50u;
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->pc = 0x243D5Cu;
            goto label_243d5c;
        }
    }
    ctx->pc = 0x243D54u;
    // 0x243d54: 0x10000011
    ctx->pc = 0x243D54u;
    {
        const bool branch_taken_0x243d54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243D58u;
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        if (branch_taken_0x243d54) {
            ctx->pc = 0x243D9Cu;
            goto label_243d9c;
        }
    }
    ctx->pc = 0x243D5Cu;
label_243d5c:
    // 0x243d5c: 0x3c013f00
    ctx->pc = 0x243d5cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x243d60: 0x44811000
    ctx->pc = 0x243d60u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x243d64: 0x46020002
    ctx->pc = 0x243d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x243d68: 0xc7a10040
    ctx->pc = 0x243d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243d6c: 0x46010000
    ctx->pc = 0x243d6cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x243d70: 0xe6000040
    ctx->pc = 0x243d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x243d74: 0xc6000228
    ctx->pc = 0x243d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243d78: 0x46020002
    ctx->pc = 0x243d78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x243d7c: 0xc7a10044
    ctx->pc = 0x243d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243d80: 0x46010000
    ctx->pc = 0x243d80u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x243d84: 0xe6000044
    ctx->pc = 0x243d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x243d88: 0xc600022c
    ctx->pc = 0x243d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243d8c: 0x46020002
    ctx->pc = 0x243d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x243d90: 0xc7a10048
    ctx->pc = 0x243d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243d94: 0x46010000
    ctx->pc = 0x243d94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x243d98: 0xe6000048
    ctx->pc = 0x243d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_243d9c:
    // 0x243d9c: 0x8fa20070
    ctx->pc = 0x243d9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x243da0: 0x14400034
    ctx->pc = 0x243DA0u;
    {
        const bool branch_taken_0x243da0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x243DA4u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x243da0) {
            ctx->pc = 0x243E74u;
            goto label_243e74;
        }
    }
    ctx->pc = 0x243DA8u;
label_243da8:
    // 0x243da8: 0x52200027
    ctx->pc = 0x243DA8u;
    {
        const bool branch_taken_0x243da8 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        if (branch_taken_0x243da8) {
            ctx->pc = 0x243DACu;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x243E48u;
            goto label_243e48;
        }
    }
    ctx->pc = 0x243DB0u;
    // 0x243db0: 0xc6010280
    ctx->pc = 0x243db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243db4: 0x3c013f80
    ctx->pc = 0x243db4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16256 << 16));
    // 0x243db8: 0x44810000
    ctx->pc = 0x243db8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x243dbc: 0x46010034
    ctx->pc = 0x243dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x243dc0: 0x0
    ctx->pc = 0x243dc0u;
    // NOP
    // 0x243dc4: 0x45020020
    ctx->pc = 0x243DC4u;
    {
        const bool branch_taken_0x243dc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243dc4) {
            ctx->pc = 0x243DC8u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x243E48u;
            goto label_243e48;
        }
    }
    ctx->pc = 0x243DCCu;
    // 0x243dcc: 0x8e0200e0
    ctx->pc = 0x243dccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x243dd0: 0x2842001c
    ctx->pc = 0x243dd0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 28));
    // 0x243dd4: 0x5440001c
    ctx->pc = 0x243DD4u;
    {
        const bool branch_taken_0x243dd4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x243dd4) {
            ctx->pc = 0x243DD8u;
            SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
            ctx->pc = 0x243E48u;
            goto label_243e48;
        }
    }
    ctx->pc = 0x243DDCu;
    // 0x243ddc: 0xc6000270
    ctx->pc = 0x243ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243de0: 0x3c013f00
    ctx->pc = 0x243de0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x243de4: 0x44811000
    ctx->pc = 0x243de4u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x243de8: 0x46020002
    ctx->pc = 0x243de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x243dec: 0xc6210270
    ctx->pc = 0x243decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243df0: 0x46010000
    ctx->pc = 0x243df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x243df4: 0xe6200270
    ctx->pc = 0x243df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 624), bits); }
    // 0x243df8: 0xc6000274
    ctx->pc = 0x243df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243dfc: 0x46020002
    ctx->pc = 0x243dfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x243e00: 0xc6210274
    ctx->pc = 0x243e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243e04: 0x46010000
    ctx->pc = 0x243e04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x243e08: 0xe6200274
    ctx->pc = 0x243e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 628), bits); }
    // 0x243e0c: 0xc6000278
    ctx->pc = 0x243e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243e10: 0x46020002
    ctx->pc = 0x243e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x243e14: 0xc6210278
    ctx->pc = 0x243e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x243e18: 0x46010000
    ctx->pc = 0x243e18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x243e1c: 0xe6200278
    ctx->pc = 0x243e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 632), bits); }
    // 0x243e20: 0xc6000224
    ctx->pc = 0x243e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243e24: 0x46020002
    ctx->pc = 0x243e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x243e28: 0xe6200224
    ctx->pc = 0x243e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 548), bits); }
    // 0x243e2c: 0xc6000228
    ctx->pc = 0x243e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243e30: 0x46020002
    ctx->pc = 0x243e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x243e34: 0xe6200228
    ctx->pc = 0x243e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
    // 0x243e38: 0xc600022c
    ctx->pc = 0x243e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243e3c: 0x46020002
    ctx->pc = 0x243e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x243e40: 0x1000000b
    ctx->pc = 0x243E40u;
    {
        const bool branch_taken_0x243e40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243E44u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
        if (branch_taken_0x243e40) {
            ctx->pc = 0x243E70u;
            goto label_243e70;
        }
    }
    ctx->pc = 0x243E48u;
label_243e48:
    // 0x243e48: 0xa6000294
    ctx->pc = 0x243e48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 660), (uint16_t)GPR_U32(ctx, 0));
    // 0x243e4c: 0xc7a00040
    ctx->pc = 0x243e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243e50: 0xe6000040
    ctx->pc = 0x243e50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x243e54: 0xc7a00044
    ctx->pc = 0x243e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243e58: 0xe6000044
    ctx->pc = 0x243e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x243e5c: 0xc7a00048
    ctx->pc = 0x243e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243e60: 0xe6000048
    ctx->pc = 0x243e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x243e64: 0xae000224
    ctx->pc = 0x243e64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x243e68: 0xae000228
    ctx->pc = 0x243e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x243e6c: 0xae00022c
    ctx->pc = 0x243e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
label_243e70:
    // 0x243e70: 0x26040010
    ctx->pc = 0x243e70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
label_243e74:
    // 0x243e74: 0xc080c70
    ctx->pc = 0x243E74u;
    SET_GPR_U32(ctx, 31, 0x243E7Cu);
    ctx->pc = 0x243E78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 576));
    ctx->pc = 0x2031C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjColOffset_0x2031c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243E7Cu; }
    }
    if (ctx->pc != 0x243E7Cu) { return; }
    ctx->pc = 0x243E7Cu;
    // 0x243e7c: 0x12200044
    ctx->pc = 0x243E7Cu;
    {
        const bool branch_taken_0x243e7c = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x243E80u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x243e7c) {
            ctx->pc = 0x243F90u;
            goto label_243f90;
        }
    }
    ctx->pc = 0x243E84u;
    // 0x243e84: 0x16600009
    ctx->pc = 0x243E84u;
    {
        const bool branch_taken_0x243e84 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x243E88u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x243e84) {
            ctx->pc = 0x243EACu;
            goto label_243eac;
        }
    }
    ctx->pc = 0x243E8Cu;
    // 0x243e8c: 0xc08efd4
    ctx->pc = 0x243E8Cu;
    SET_GPR_U32(ctx, 31, 0x243E94u);
    ctx->pc = 0x243E90u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 64));
    ctx->pc = 0x23BF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_turn_dir_0x23bf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243E94u; }
    }
    if (ctx->pc != 0x243E94u) { return; }
    ctx->pc = 0x243E94u;
    // 0x243e94: 0xae020368
    ctx->pc = 0x243e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x243e98: 0x240202d
    ctx->pc = 0x243e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243e9c: 0xc08efc2
    ctx->pc = 0x243E9Cu;
    SET_GPR_U32(ctx, 31, 0x243EA4u);
    ctx->pc = 0x243EA0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243EA4u; }
    }
    if (ctx->pc != 0x243EA4u) { return; }
    ctx->pc = 0x243EA4u;
    // 0x243ea4: 0x1000003d
    ctx->pc = 0x243EA4u;
    {
        const bool branch_taken_0x243ea4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243EA8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x243ea4) {
            ctx->pc = 0x243F9Cu;
            goto label_243f9c;
        }
    }
    ctx->pc = 0x243EACu;
label_243eac:
    // 0x243eac: 0x12200037
    ctx->pc = 0x243EACu;
    {
        const bool branch_taken_0x243eac = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x243EB0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967289));
        if (branch_taken_0x243eac) {
            ctx->pc = 0x243F8Cu;
            goto label_243f8c;
        }
    }
    ctx->pc = 0x243EB4u;
    // 0x243eb4: 0x2c420002
    ctx->pc = 0x243eb4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x243eb8: 0x54400007
    ctx->pc = 0x243EB8u;
    {
        const bool branch_taken_0x243eb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x243eb8) {
            ctx->pc = 0x243EBCu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
            ctx->pc = 0x243ED8u;
            goto label_243ed8;
        }
    }
    ctx->pc = 0x243EC0u;
    // 0x243ec0: 0x2402000a
    ctx->pc = 0x243ec0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x243ec4: 0x12620003
    ctx->pc = 0x243EC4u;
    {
        const bool branch_taken_0x243ec4 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x243EC8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x243ec4) {
            ctx->pc = 0x243ED4u;
            goto label_243ed4;
        }
    }
    ctx->pc = 0x243ECCu;
    // 0x243ecc: 0x16620030
    ctx->pc = 0x243ECCu;
    {
        const bool branch_taken_0x243ecc = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x243ED0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x243ecc) {
            ctx->pc = 0x243F90u;
            goto label_243f90;
        }
    }
    ctx->pc = 0x243ED4u;
label_243ed4:
    // 0x243ed4: 0x8e020368
    ctx->pc = 0x243ed4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
label_243ed8:
    // 0x243ed8: 0x10400007
    ctx->pc = 0x243ED8u;
    {
        const bool branch_taken_0x243ed8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x243EDCu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x243ed8) {
            ctx->pc = 0x243EF8u;
            goto label_243ef8;
        }
    }
    ctx->pc = 0x243EE0u;
    // 0x243ee0: 0x4420001
    ctx->pc = 0x243EE0u;
    {
        const bool branch_taken_0x243ee0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x243ee0) {
            ctx->pc = 0x243EE4u;
            SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->pc = 0x243EE8u;
            goto label_243ee8;
        }
    }
    ctx->pc = 0x243EE8u;
label_243ee8:
    // 0x243ee8: 0x28420003
    ctx->pc = 0x243ee8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x243eec: 0x14400007
    ctx->pc = 0x243EECu;
    {
        const bool branch_taken_0x243eec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x243EF0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x243eec) {
            ctx->pc = 0x243F0Cu;
            goto label_243f0c;
        }
    }
    ctx->pc = 0x243EF4u;
    // 0x243ef4: 0x26040040
    ctx->pc = 0x243ef4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
label_243ef8:
    // 0x243ef8: 0xc08efd4
    ctx->pc = 0x243EF8u;
    SET_GPR_U32(ctx, 31, 0x243F00u);
    ctx->pc = 0x243EFCu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 64));
    ctx->pc = 0x23BF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_turn_dir_0x23bf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243F00u; }
    }
    if (ctx->pc != 0x243F00u) { return; }
    ctx->pc = 0x243F00u;
    // 0x243f00: 0xae020368
    ctx->pc = 0x243f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x243f04: 0xa6000378
    ctx->pc = 0x243f04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
    // 0x243f08: 0x24020007
    ctx->pc = 0x243f08u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_243f0c:
    // 0x243f0c: 0x16620007
    ctx->pc = 0x243F0Cu;
    {
        const bool branch_taken_0x243f0c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x243F10u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x243f0c) {
            ctx->pc = 0x243F2Cu;
            goto label_243f2c;
        }
    }
    ctx->pc = 0x243F14u;
    // 0x243f14: 0x240202d
    ctx->pc = 0x243f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243f18: 0x2405000f
    ctx->pc = 0x243f18u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x243f1c: 0xc090466
    ctx->pc = 0x243F1Cu;
    SET_GPR_U32(ctx, 31, 0x243F24u);
    ctx->pc = 0x243F20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x241198u;
    {
        const uint32_t __entryPc = ctx->pc;
        blocked07_0x241198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243F24u; }
    }
    if (ctx->pc != 0x243F24u) { return; }
    ctx->pc = 0x243F24u;
    // 0x243f24: 0x1000001d
    ctx->pc = 0x243F24u;
    {
        const bool branch_taken_0x243f24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243F28u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x243f24) {
            ctx->pc = 0x243F9Cu;
            goto label_243f9c;
        }
    }
    ctx->pc = 0x243F2Cu;
label_243f2c:
    // 0x243f2c: 0x16620007
    ctx->pc = 0x243F2Cu;
    {
        const bool branch_taken_0x243f2c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x243F30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x243f2c) {
            ctx->pc = 0x243F4Cu;
            goto label_243f4c;
        }
    }
    ctx->pc = 0x243F34u;
    // 0x243f34: 0x240202d
    ctx->pc = 0x243f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243f38: 0x2405000a
    ctx->pc = 0x243f38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x243f3c: 0xc090350
    ctx->pc = 0x243F3Cu;
    SET_GPR_U32(ctx, 31, 0x243F44u);
    ctx->pc = 0x243F40u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x240D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        blocked08_0x240d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243F44u; }
    }
    if (ctx->pc != 0x243F44u) { return; }
    ctx->pc = 0x243F44u;
    // 0x243f44: 0x10000015
    ctx->pc = 0x243F44u;
    {
        const bool branch_taken_0x243f44 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243F48u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x243f44) {
            ctx->pc = 0x243F9Cu;
            goto label_243f9c;
        }
    }
    ctx->pc = 0x243F4Cu;
label_243f4c:
    // 0x243f4c: 0x16620007
    ctx->pc = 0x243F4Cu;
    {
        const bool branch_taken_0x243f4c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x243F50u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x243f4c) {
            ctx->pc = 0x243F6Cu;
            goto label_243f6c;
        }
    }
    ctx->pc = 0x243F54u;
    // 0x243f54: 0x240202d
    ctx->pc = 0x243f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243f58: 0x2405000f
    ctx->pc = 0x243f58u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x243f5c: 0xc090230
    ctx->pc = 0x243F5Cu;
    SET_GPR_U32(ctx, 31, 0x243F64u);
    ctx->pc = 0x243F60u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 50));
    ctx->pc = 0x2408C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        blocked10_0x2408c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243F64u; }
    }
    if (ctx->pc != 0x243F64u) { return; }
    ctx->pc = 0x243F64u;
    // 0x243f64: 0x1000000d
    ctx->pc = 0x243F64u;
    {
        const bool branch_taken_0x243f64 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243F68u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x243f64) {
            ctx->pc = 0x243F9Cu;
            goto label_243f9c;
        }
    }
    ctx->pc = 0x243F6Cu;
label_243f6c:
    // 0x243f6c: 0x1662000b
    ctx->pc = 0x243F6Cu;
    {
        const bool branch_taken_0x243f6c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x243F70u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x243f6c) {
            ctx->pc = 0x243F9Cu;
            goto label_243f9c;
        }
    }
    ctx->pc = 0x243F74u;
    // 0x243f74: 0x240202d
    ctx->pc = 0x243f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243f78: 0x2405000a
    ctx->pc = 0x243f78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 10));
    // 0x243f7c: 0xc08f914
    ctx->pc = 0x243F7Cu;
    SET_GPR_U32(ctx, 31, 0x243F84u);
    ctx->pc = 0x243F80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x23E450u;
    {
        const uint32_t __entryPc = ctx->pc;
        blocked20_0x23e450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243F84u; }
    }
    if (ctx->pc != 0x243F84u) { return; }
    ctx->pc = 0x243F84u;
    // 0x243f84: 0x10000005
    ctx->pc = 0x243F84u;
    {
        const bool branch_taken_0x243f84 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x243F88u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x243f84) {
            ctx->pc = 0x243F9Cu;
            goto label_243f9c;
        }
    }
    ctx->pc = 0x243F8Cu;
label_243f8c:
    // 0x243f8c: 0x240202d
    ctx->pc = 0x243f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_243f90:
    // 0x243f90: 0xc08efc2
    ctx->pc = 0x243F90u;
    SET_GPR_U32(ctx, 31, 0x243F98u);
    ctx->pc = 0x243F94u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243F98u; }
    }
    if (ctx->pc != 0x243F98u) { return; }
    ctx->pc = 0x243F98u;
    // 0x243f98: 0x24020002
    ctx->pc = 0x243f98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
label_243f9c:
    // 0x243f9c: 0xa6020212
    ctx->pc = 0x243f9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 530), (uint16_t)GPR_U32(ctx, 2));
label_243fa0:
    // 0x243fa0: 0x5680007b
    ctx->pc = 0x243FA0u;
    {
        const bool branch_taken_0x243fa0 = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x243fa0) {
            ctx->pc = 0x243FA4u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->pc = 0x244190u;
            goto label_244190;
        }
    }
    ctx->pc = 0x243FA8u;
    // 0x243fa8: 0x240202d
    ctx->pc = 0x243fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243fac: 0x27a50050
    ctx->pc = 0x243facu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 29), 80));
    // 0x243fb0: 0x27a60060
    ctx->pc = 0x243fb0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 96));
    // 0x243fb4: 0xc09685c
    ctx->pc = 0x243FB4u;
    SET_GPR_U32(ctx, 31, 0x243FBCu);
    ctx->pc = 0x243FB8u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
    ctx->pc = 0x25A170u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoEnemyItemCollide_0x25a170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243FBCu; }
    }
    if (ctx->pc != 0x243FBCu) { return; }
    ctx->pc = 0x243FBCu;
    // 0x243fbc: 0x1040005f
    ctx->pc = 0x243FBCu;
    {
        const bool branch_taken_0x243fbc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x243FC0u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 16));
        if (branch_taken_0x243fbc) {
            ctx->pc = 0x24413Cu;
            goto label_24413c;
        }
    }
    ctx->pc = 0x243FC4u;
    // 0x243fc4: 0xa6000294
    ctx->pc = 0x243fc4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 660), (uint16_t)GPR_U32(ctx, 0));
    // 0x243fc8: 0x24140001
    ctx->pc = 0x243fc8u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    // 0x243fcc: 0xc7a00040
    ctx->pc = 0x243fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243fd0: 0xe6000040
    ctx->pc = 0x243fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x243fd4: 0xc7a00044
    ctx->pc = 0x243fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243fd8: 0xe6000044
    ctx->pc = 0x243fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x243fdc: 0xc7a00048
    ctx->pc = 0x243fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243fe0: 0xe6000048
    ctx->pc = 0x243fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x243fe4: 0xae000224
    ctx->pc = 0x243fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
    // 0x243fe8: 0xae000228
    ctx->pc = 0x243fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
    // 0x243fec: 0xae00022c
    ctx->pc = 0x243fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
    // 0x243ff0: 0xc080c70
    ctx->pc = 0x243FF0u;
    SET_GPR_U32(ctx, 31, 0x243FF8u);
    ctx->pc = 0x243FF4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 576));
    ctx->pc = 0x2031C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        UpdateObjColOffset_0x2031c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243FF8u; }
    }
    if (ctx->pc != 0x243FF8u) { return; }
    ctx->pc = 0x243FF8u;
    // 0x243ff8: 0x1660000d
    ctx->pc = 0x243FF8u;
    {
        const bool branch_taken_0x243ff8 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x243FFCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 19), 4294967289));
        if (branch_taken_0x243ff8) {
            ctx->pc = 0x244030u;
            goto label_244030;
        }
    }
    ctx->pc = 0x244000u;
    // 0x244000: 0x8e0502a0
    ctx->pc = 0x244000u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 672)));
    // 0x244004: 0x8ca20070
    ctx->pc = 0x244004u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x244008: 0x10400004
    ctx->pc = 0x244008u;
    {
        const bool branch_taken_0x244008 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24400Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
        if (branch_taken_0x244008) {
            ctx->pc = 0x24401Cu;
            goto label_24401c;
        }
    }
    ctx->pc = 0x244010u;
    // 0x244010: 0xc08efd4
    ctx->pc = 0x244010u;
    SET_GPR_U32(ctx, 31, 0x244018u);
    ctx->pc = 0x244014u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    ctx->pc = 0x23BF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_turn_dir_0x23bf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244018u; }
    }
    if (ctx->pc != 0x244018u) { return; }
    ctx->pc = 0x244018u;
    // 0x244018: 0xae020368
    ctx->pc = 0x244018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
label_24401c:
    // 0x24401c: 0x240202d
    ctx->pc = 0x24401cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244020: 0xc08efc2
    ctx->pc = 0x244020u;
    SET_GPR_U32(ctx, 31, 0x244028u);
    ctx->pc = 0x244024u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 60));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244028u; }
    }
    if (ctx->pc != 0x244028u) { return; }
    ctx->pc = 0x244028u;
    // 0x244028: 0x10000043
    ctx->pc = 0x244028u;
    {
        const bool branch_taken_0x244028 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24402Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x244028) {
            ctx->pc = 0x244138u;
            goto label_244138;
        }
    }
    ctx->pc = 0x244030u;
label_244030:
    // 0x244030: 0x2c420002
    ctx->pc = 0x244030u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x244034: 0x54400007
    ctx->pc = 0x244034u;
    {
        const bool branch_taken_0x244034 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x244034) {
            ctx->pc = 0x244038u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 672)));
            ctx->pc = 0x244054u;
            goto label_244054;
        }
    }
    ctx->pc = 0x24403Cu;
    // 0x24403c: 0x2402000a
    ctx->pc = 0x24403cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x244040: 0x12620003
    ctx->pc = 0x244040u;
    {
        const bool branch_taken_0x244040 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x244044u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x244040) {
            ctx->pc = 0x244050u;
            goto label_244050;
        }
    }
    ctx->pc = 0x244048u;
    // 0x244048: 0x16620038
    ctx->pc = 0x244048u;
    {
        const bool branch_taken_0x244048 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x24404Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x244048) {
            ctx->pc = 0x24412Cu;
            goto label_24412c;
        }
    }
    ctx->pc = 0x244050u;
label_244050:
    // 0x244050: 0x8e0202a0
    ctx->pc = 0x244050u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 672)));
label_244054:
    // 0x244054: 0x8c420070
    ctx->pc = 0x244054u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x244058: 0x10400030
    ctx->pc = 0x244058u;
    {
        const bool branch_taken_0x244058 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x24405Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x244058) {
            ctx->pc = 0x24411Cu;
            goto label_24411c;
        }
    }
    ctx->pc = 0x244060u;
    // 0x244060: 0x8e020368
    ctx->pc = 0x244060u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 872)));
    // 0x244064: 0x50400007
    ctx->pc = 0x244064u;
    {
        const bool branch_taken_0x244064 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244064) {
            ctx->pc = 0x244068u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 672)));
            ctx->pc = 0x244084u;
            goto label_244084;
        }
    }
    ctx->pc = 0x24406Cu;
    // 0x24406c: 0x4420001
    ctx->pc = 0x24406Cu;
    {
        const bool branch_taken_0x24406c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x24406c) {
            ctx->pc = 0x244070u;
            SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->pc = 0x244074u;
            goto label_244074;
        }
    }
    ctx->pc = 0x244074u;
label_244074:
    // 0x244074: 0x28420003
    ctx->pc = 0x244074u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 3));
    // 0x244078: 0x14400008
    ctx->pc = 0x244078u;
    {
        const bool branch_taken_0x244078 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24407Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
        if (branch_taken_0x244078) {
            ctx->pc = 0x24409Cu;
            goto label_24409c;
        }
    }
    ctx->pc = 0x244080u;
    // 0x244080: 0x8e0502a0
    ctx->pc = 0x244080u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 672)));
label_244084:
    // 0x244084: 0x26040040
    ctx->pc = 0x244084u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 64));
    // 0x244088: 0xc08efd4
    ctx->pc = 0x244088u;
    SET_GPR_U32(ctx, 31, 0x244090u);
    ctx->pc = 0x24408Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 64));
    ctx->pc = 0x23BF50u;
    {
        const uint32_t __entryPc = ctx->pc;
        get_turn_dir_0x23bf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244090u; }
    }
    if (ctx->pc != 0x244090u) { return; }
    ctx->pc = 0x244090u;
    // 0x244090: 0xae020368
    ctx->pc = 0x244090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x244094: 0xa6000378
    ctx->pc = 0x244094u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
    // 0x244098: 0x24020007
    ctx->pc = 0x244098u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 7));
label_24409c:
    // 0x24409c: 0x16620007
    ctx->pc = 0x24409Cu;
    {
        const bool branch_taken_0x24409c = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2440A0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x24409c) {
            ctx->pc = 0x2440BCu;
            goto label_2440bc;
        }
    }
    ctx->pc = 0x2440A4u;
    // 0x2440a4: 0x240202d
    ctx->pc = 0x2440a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2440a8: 0x2405000f
    ctx->pc = 0x2440a8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x2440ac: 0xc090466
    ctx->pc = 0x2440ACu;
    SET_GPR_U32(ctx, 31, 0x2440B4u);
    ctx->pc = 0x2440B0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x241198u;
    {
        const uint32_t __entryPc = ctx->pc;
        blocked07_0x241198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2440B4u; }
    }
    if (ctx->pc != 0x2440B4u) { return; }
    ctx->pc = 0x2440B4u;
    // 0x2440b4: 0x10000020
    ctx->pc = 0x2440B4u;
    {
        const bool branch_taken_0x2440b4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2440B8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2440b4) {
            ctx->pc = 0x244138u;
            goto label_244138;
        }
    }
    ctx->pc = 0x2440BCu;
label_2440bc:
    // 0x2440bc: 0x16620007
    ctx->pc = 0x2440BCu;
    {
        const bool branch_taken_0x2440bc = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2440C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x2440bc) {
            ctx->pc = 0x2440DCu;
            goto label_2440dc;
        }
    }
    ctx->pc = 0x2440C4u;
    // 0x2440c4: 0x240202d
    ctx->pc = 0x2440c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2440c8: 0x2405000f
    ctx->pc = 0x2440c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x2440cc: 0xc090350
    ctx->pc = 0x2440CCu;
    SET_GPR_U32(ctx, 31, 0x2440D4u);
    ctx->pc = 0x2440D0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x240D40u;
    {
        const uint32_t __entryPc = ctx->pc;
        blocked08_0x240d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2440D4u; }
    }
    if (ctx->pc != 0x2440D4u) { return; }
    ctx->pc = 0x2440D4u;
    // 0x2440d4: 0x10000018
    ctx->pc = 0x2440D4u;
    {
        const bool branch_taken_0x2440d4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2440D8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2440d4) {
            ctx->pc = 0x244138u;
            goto label_244138;
        }
    }
    ctx->pc = 0x2440DCu;
label_2440dc:
    // 0x2440dc: 0x16620007
    ctx->pc = 0x2440DCu;
    {
        const bool branch_taken_0x2440dc = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x2440E0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 20));
        if (branch_taken_0x2440dc) {
            ctx->pc = 0x2440FCu;
            goto label_2440fc;
        }
    }
    ctx->pc = 0x2440E4u;
    // 0x2440e4: 0x240202d
    ctx->pc = 0x2440e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2440e8: 0x2405000f
    ctx->pc = 0x2440e8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x2440ec: 0xc090230
    ctx->pc = 0x2440ECu;
    SET_GPR_U32(ctx, 31, 0x2440F4u);
    ctx->pc = 0x2440F0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x2408C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        blocked10_0x2408c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2440F4u; }
    }
    if (ctx->pc != 0x2440F4u) { return; }
    ctx->pc = 0x2440F4u;
    // 0x2440f4: 0x10000010
    ctx->pc = 0x2440F4u;
    {
        const bool branch_taken_0x2440f4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2440F8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2440f4) {
            ctx->pc = 0x244138u;
            goto label_244138;
        }
    }
    ctx->pc = 0x2440FCu;
label_2440fc:
    // 0x2440fc: 0x1662000e
    ctx->pc = 0x2440FCu;
    {
        const bool branch_taken_0x2440fc = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        ctx->pc = 0x244100u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x2440fc) {
            ctx->pc = 0x244138u;
            goto label_244138;
        }
    }
    ctx->pc = 0x244104u;
    // 0x244104: 0x240202d
    ctx->pc = 0x244104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244108: 0x2405000f
    ctx->pc = 0x244108u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 15));
    // 0x24410c: 0xc08f914
    ctx->pc = 0x24410Cu;
    SET_GPR_U32(ctx, 31, 0x244114u);
    ctx->pc = 0x244110u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 15));
    ctx->pc = 0x23E450u;
    {
        const uint32_t __entryPc = ctx->pc;
        blocked20_0x23e450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244114u; }
    }
    if (ctx->pc != 0x244114u) { return; }
    ctx->pc = 0x244114u;
    // 0x244114: 0x10000008
    ctx->pc = 0x244114u;
    {
        const bool branch_taken_0x244114 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244118u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x244114) {
            ctx->pc = 0x244138u;
            goto label_244138;
        }
    }
    ctx->pc = 0x24411Cu;
label_24411c:
    // 0x24411c: 0xc08efc2
    ctx->pc = 0x24411Cu;
    SET_GPR_U32(ctx, 31, 0x244124u);
    ctx->pc = 0x244120u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244124u; }
    }
    if (ctx->pc != 0x244124u) { return; }
    ctx->pc = 0x244124u;
    // 0x244124: 0x10000004
    ctx->pc = 0x244124u;
    {
        const bool branch_taken_0x244124 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244128u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x244124) {
            ctx->pc = 0x244138u;
            goto label_244138;
        }
    }
    ctx->pc = 0x24412Cu;
label_24412c:
    // 0x24412c: 0xc08efc2
    ctx->pc = 0x24412Cu;
    SET_GPR_U32(ctx, 31, 0x244134u);
    ctx->pc = 0x244130u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x23BF08u;
    {
        const uint32_t __entryPc = ctx->pc;
        DeadEnd_0x23bf08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244134u; }
    }
    if (ctx->pc != 0x244134u) { return; }
    ctx->pc = 0x244134u;
    // 0x244134: 0x24020003
    ctx->pc = 0x244134u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
label_244138:
    // 0x244138: 0xa6020212
    ctx->pc = 0x244138u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 530), (uint16_t)GPR_U32(ctx, 2));
label_24413c:
    // 0x24413c: 0x56800014
    ctx->pc = 0x24413Cu;
    {
        const bool branch_taken_0x24413c = (GPR_U32(ctx, 20) != GPR_U32(ctx, 0));
        if (branch_taken_0x24413c) {
            ctx->pc = 0x244140u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->pc = 0x244190u;
            goto label_244190;
        }
    }
    ctx->pc = 0x244144u;
    // 0x244144: 0x16600008
    ctx->pc = 0x244144u;
    {
        const bool branch_taken_0x244144 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 0));
        ctx->pc = 0x244148u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x244144) {
            ctx->pc = 0x244168u;
            goto label_244168;
        }
    }
    ctx->pc = 0x24414Cu;
    // 0x24414c: 0x8e02036c
    ctx->pc = 0x24414cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x244150: 0x1c400005
    ctx->pc = 0x244150u;
    {
        const bool branch_taken_0x244150 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x244154u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x244150) {
            ctx->pc = 0x244168u;
            goto label_244168;
        }
    }
    ctx->pc = 0x244158u;
    // 0x244158: 0x24020001
    ctx->pc = 0x244158u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x24415c: 0xae020368
    ctx->pc = 0x24415cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 872), GPR_U32(ctx, 2));
    // 0x244160: 0x1000000a
    ctx->pc = 0x244160u;
    {
        const bool branch_taken_0x244160 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244164u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 888), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x244160) {
            ctx->pc = 0x24418Cu;
            goto label_24418c;
        }
    }
    ctx->pc = 0x244168u;
label_244168:
    // 0x244168: 0x12620003
    ctx->pc = 0x244168u;
    {
        const bool branch_taken_0x244168 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x24416Cu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x244168) {
            ctx->pc = 0x244178u;
            goto label_244178;
        }
    }
    ctx->pc = 0x244170u;
    // 0x244170: 0x56620007
    ctx->pc = 0x244170u;
    {
        const bool branch_taken_0x244170 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 2));
        if (branch_taken_0x244170) {
            ctx->pc = 0x244174u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 200)));
            ctx->pc = 0x244190u;
            goto label_244190;
        }
    }
    ctx->pc = 0x244178u;
label_244178:
    // 0x244178: 0x8e020388
    ctx->pc = 0x244178u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 904)));
    // 0x24417c: 0x2442ffff
    ctx->pc = 0x24417cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x244180: 0x1c400002
    ctx->pc = 0x244180u;
    {
        const bool branch_taken_0x244180 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x244184u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 2));
        if (branch_taken_0x244180) {
            ctx->pc = 0x24418Cu;
            goto label_24418c;
        }
    }
    ctx->pc = 0x244188u;
    // 0x244188: 0xae000370
    ctx->pc = 0x244188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 880), GPR_U32(ctx, 0));
label_24418c:
    // 0x24418c: 0x8e0200c8
    ctx->pc = 0x24418cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_244190:
    // 0x244190: 0x50400028
    ctx->pc = 0x244190u;
    {
        const bool branch_taken_0x244190 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244190) {
            ctx->pc = 0x244194u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
            ctx->pc = 0x244234u;
            goto label_244234;
        }
    }
    ctx->pc = 0x244198u;
    // 0x244198: 0xc6010280
    ctx->pc = 0x244198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24419c: 0x3c013dcc
    ctx->pc = 0x24419cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2441a0: 0x3421cccd
    ctx->pc = 0x2441a0u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2441a4: 0x44810000
    ctx->pc = 0x2441a4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2441a8: 0x46010034
    ctx->pc = 0x2441a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2441ac: 0x0
    ctx->pc = 0x2441acu;
    // NOP
    // 0x2441b0: 0x45000003
    ctx->pc = 0x2441B0u;
    {
        const bool branch_taken_0x2441b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2441B4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2441b0) {
            ctx->pc = 0x2441C0u;
            goto label_2441c0;
        }
    }
    ctx->pc = 0x2441B8u;
    // 0x2441b8: 0xc600027c
    ctx->pc = 0x2441b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2441bc: 0xe6000258
    ctx->pc = 0x2441bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 600), bits); }
label_2441c0:
    // 0x2441c0: 0xc0b5ae8
    ctx->pc = 0x2441C0u;
    SET_GPR_U32(ctx, 31, 0x2441C8u);
    ctx->pc = 0x2441C4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 596));
    ctx->pc = 0x2D6BA0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CreateYPRMatrix_0x2d6ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2441C8u; }
    }
    if (ctx->pc != 0x2441C8u) { return; }
    ctx->pc = 0x2441C8u;
    // 0x2441c8: 0x3a0202d
    ctx->pc = 0x2441c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2441cc: 0xc0b549e
    ctx->pc = 0x2441CCu;
    SET_GPR_U32(ctx, 31, 0x2441D4u);
    ctx->pc = 0x2441D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 16), 16));
    ctx->pc = 0x2D5278u;
    {
        const uint32_t __entryPc = ctx->pc;
        CopyMat3_0x2d5278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2441D4u; }
    }
    if (ctx->pc != 0x2441D4u) { return; }
    ctx->pc = 0x2441D4u;
    // 0x2441d4: 0x8e0201f0
    ctx->pc = 0x2441d4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x2441d8: 0x50400016
    ctx->pc = 0x2441D8u;
    {
        const bool branch_taken_0x2441d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2441d8) {
            ctx->pc = 0x2441DCu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
            ctx->pc = 0x244234u;
            goto label_244234;
        }
    }
    ctx->pc = 0x2441E0u;
    // 0x2441e0: 0xc6000040
    ctx->pc = 0x2441e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2441e4: 0xe4400030
    ctx->pc = 0x2441e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x2441e8: 0x8e0201f0
    ctx->pc = 0x2441e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x2441ec: 0xc6000044
    ctx->pc = 0x2441ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2441f0: 0xe4400034
    ctx->pc = 0x2441f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x2441f4: 0x8e0201f0
    ctx->pc = 0x2441f4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 496)));
    // 0x2441f8: 0xc6000048
    ctx->pc = 0x2441f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2441fc: 0xe4400038
    ctx->pc = 0x2441fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x244200: 0x8e0300e0
    ctx->pc = 0x244200u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x244204: 0x24020001
    ctx->pc = 0x244204u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x244208: 0x14620006
    ctx->pc = 0x244208u;
    {
        const bool branch_taken_0x244208 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x24420Cu;
        SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 496)));
        if (branch_taken_0x244208) {
            ctx->pc = 0x244224u;
            goto label_244224;
        }
    }
    ctx->pc = 0x244210u;
    // 0x244210: 0x24050002
    ctx->pc = 0x244210u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x244214: 0xc0b41b8
    ctx->pc = 0x244214u;
    SET_GPR_U32(ctx, 31, 0x24421Cu);
    ctx->pc = 0x244218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24421Cu; }
    }
    if (ctx->pc != 0x24421Cu) { return; }
    ctx->pc = 0x24421Cu;
    // 0x24421c: 0x10000005
    ctx->pc = 0x24421Cu;
    {
        const bool branch_taken_0x24421c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x244220u;
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
        if (branch_taken_0x24421c) {
            ctx->pc = 0x244234u;
            goto label_244234;
        }
    }
    ctx->pc = 0x244224u;
label_244224:
    // 0x244224: 0x24050002
    ctx->pc = 0x244224u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x244228: 0xc0b41e4
    ctx->pc = 0x244228u;
    SET_GPR_U32(ctx, 31, 0x244230u);
    ctx->pc = 0x24422Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244230u; }
    }
    if (ctx->pc != 0x244230u) { return; }
    ctx->pc = 0x244230u;
    // 0x244230: 0x86020294
    ctx->pc = 0x244230u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 660)));
label_244234:
    // 0x244234: 0x5440000e
    ctx->pc = 0x244234u;
    {
        const bool branch_taken_0x244234 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x244234) {
            ctx->pc = 0x244238u;
            WRITE16(ADD32(GPR_U32(ctx, 16), 662), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x244270u;
            goto label_244270;
        }
    }
    ctx->pc = 0x24423Cu;
    // 0x24423c: 0x8e0300e0
    ctx->pc = 0x24423cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x244240: 0x2462fffd
    ctx->pc = 0x244240u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x244244: 0x2c420002
    ctx->pc = 0x244244u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x244248: 0x14400005
    ctx->pc = 0x244248u;
    {
        const bool branch_taken_0x244248 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24424Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x244248) {
            ctx->pc = 0x244260u;
            goto label_244260;
        }
    }
    ctx->pc = 0x244250u;
    // 0x244250: 0x50600004
    ctx->pc = 0x244250u;
    {
        const bool branch_taken_0x244250 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x244250) {
            ctx->pc = 0x244254u;
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 662)));
            ctx->pc = 0x244264u;
            goto label_244264;
        }
    }
    ctx->pc = 0x244258u;
    // 0x244258: 0x10000005
    ctx->pc = 0x244258u;
    {
        const bool branch_taken_0x244258 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24425Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 662), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x244258) {
            ctx->pc = 0x244270u;
            goto label_244270;
        }
    }
    ctx->pc = 0x244260u;
label_244260:
    // 0x244260: 0x96030296
    ctx->pc = 0x244260u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 662)));
label_244264:
    // 0x244264: 0x9442ffbc
    ctx->pc = 0x244264u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294967228)));
    // 0x244268: 0x621821
    ctx->pc = 0x244268u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24426c: 0xa6030296
    ctx->pc = 0x24426cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 662), (uint16_t)GPR_U32(ctx, 3));
label_244270:
    // 0x244270: 0x86020296
    ctx->pc = 0x244270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 662)));
    // 0x244274: 0x284200b5
    ctx->pc = 0x244274u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 181));
    // 0x244278: 0x50400001
    ctx->pc = 0x244278u;
    {
        const bool branch_taken_0x244278 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x244278) {
            ctx->pc = 0x24427Cu;
            WRITE16(ADD32(GPR_U32(ctx, 16), 662), (uint16_t)GPR_U32(ctx, 0));
            ctx->pc = 0x244280u;
            goto label_244280;
        }
    }
    ctx->pc = 0x244280u;
label_244280:
    // 0x244280: 0x86020296
    ctx->pc = 0x244280u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 662)));
    // 0x244284: 0x2842003d
    ctx->pc = 0x244284u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 61));
    // 0x244288: 0x1440000e
    ctx->pc = 0x244288u;
    {
        const bool branch_taken_0x244288 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24428Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        if (branch_taken_0x244288) {
            ctx->pc = 0x2442C4u;
            goto label_2442c4;
        }
    }
    ctx->pc = 0x244290u;
    // 0x244290: 0x8e0200e4
    ctx->pc = 0x244290u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x244294: 0x2442fffd
    ctx->pc = 0x244294u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x244298: 0x2c420002
    ctx->pc = 0x244298u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x24429c: 0x10400009
    ctx->pc = 0x24429Cu;
    {
        const bool branch_taken_0x24429c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x24429c) {
            ctx->pc = 0x2442C4u;
            goto label_2442c4;
        }
    }
    ctx->pc = 0x2442A4u;
    // 0x2442a4: 0x24020012
    ctx->pc = 0x2442a4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 18));
    // 0x2442a8: 0x12620007
    ctx->pc = 0x2442A8u;
    {
        const bool branch_taken_0x2442a8 = (GPR_U32(ctx, 19) == GPR_U32(ctx, 2));
        ctx->pc = 0x2442ACu;
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        if (branch_taken_0x2442a8) {
            ctx->pc = 0x2442C8u;
            goto label_2442c8;
        }
    }
    ctx->pc = 0x2442B0u;
    // 0x2442b0: 0x8e030000
    ctx->pc = 0x2442b0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2442b4: 0x2402001d
    ctx->pc = 0x2442b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 29));
    // 0x2442b8: 0x54620003
    ctx->pc = 0x2442B8u;
    {
        const bool branch_taken_0x2442b8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x2442b8) {
            ctx->pc = 0x2442BCu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
            ctx->pc = 0x2442C8u;
            goto label_2442c8;
        }
    }
    ctx->pc = 0x2442C0u;
    // 0x2442c0: 0xdfbf00d0
    ctx->pc = 0x2442c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2442c4:
    // 0x2442c4: 0xdfb400c0
    ctx->pc = 0x2442c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2442c8:
    // 0x2442c8: 0xdfb300b0
    ctx->pc = 0x2442c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2442cc: 0xdfb200a0
    ctx->pc = 0x2442ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2442d0: 0xdfb10090
    ctx->pc = 0x2442d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2442d4: 0xdfb00080
    ctx->pc = 0x2442d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2442d8: 0xc7b500e8
    ctx->pc = 0x2442d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2442dc: 0xc7b400e0
    ctx->pc = 0x2442dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2442e0: 0x3e00008
    ctx->pc = 0x2442E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2442E4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x243A78u: goto label_243a78;
            case 0x243A94u: goto label_243a94;
            case 0x243B00u: goto label_243b00;
            case 0x243B04u: goto label_243b04;
            case 0x243BB0u: goto label_243bb0;
            case 0x243BB8u: goto label_243bb8;
            case 0x243C38u: goto label_243c38;
            case 0x243C68u: goto label_243c68;
            case 0x243C84u: goto label_243c84;
            case 0x243CA8u: goto label_243ca8;
            case 0x243CC0u: goto label_243cc0;
            case 0x243D00u: goto label_243d00;
            case 0x243D5Cu: goto label_243d5c;
            case 0x243D9Cu: goto label_243d9c;
            case 0x243DA8u: goto label_243da8;
            case 0x243E48u: goto label_243e48;
            case 0x243E70u: goto label_243e70;
            case 0x243E74u: goto label_243e74;
            case 0x243EACu: goto label_243eac;
            case 0x243ED4u: goto label_243ed4;
            case 0x243ED8u: goto label_243ed8;
            case 0x243EE8u: goto label_243ee8;
            case 0x243EF8u: goto label_243ef8;
            case 0x243F0Cu: goto label_243f0c;
            case 0x243F2Cu: goto label_243f2c;
            case 0x243F4Cu: goto label_243f4c;
            case 0x243F6Cu: goto label_243f6c;
            case 0x243F8Cu: goto label_243f8c;
            case 0x243F90u: goto label_243f90;
            case 0x243F9Cu: goto label_243f9c;
            case 0x243FA0u: goto label_243fa0;
            case 0x24401Cu: goto label_24401c;
            case 0x244030u: goto label_244030;
            case 0x244050u: goto label_244050;
            case 0x244054u: goto label_244054;
            case 0x244074u: goto label_244074;
            case 0x244084u: goto label_244084;
            case 0x24409Cu: goto label_24409c;
            case 0x2440BCu: goto label_2440bc;
            case 0x2440DCu: goto label_2440dc;
            case 0x2440FCu: goto label_2440fc;
            case 0x24411Cu: goto label_24411c;
            case 0x24412Cu: goto label_24412c;
            case 0x244138u: goto label_244138;
            case 0x24413Cu: goto label_24413c;
            case 0x244168u: goto label_244168;
            case 0x244178u: goto label_244178;
            case 0x24418Cu: goto label_24418c;
            case 0x244190u: goto label_244190;
            case 0x2441C0u: goto label_2441c0;
            case 0x244224u: goto label_244224;
            case 0x244234u: goto label_244234;
            case 0x244260u: goto label_244260;
            case 0x244264u: goto label_244264;
            case 0x244270u: goto label_244270;
            case 0x244280u: goto label_244280;
            case 0x2442C4u: goto label_2442c4;
            case 0x2442C8u: goto label_2442c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2442E8u;
}
