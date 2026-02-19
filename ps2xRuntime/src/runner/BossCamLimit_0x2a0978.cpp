#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BossCamLimit
// Address: 0x2a0978 - 0x2a0af4
void BossCamLimit_0x2a0978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a0978u;

    // 0x2a0978: 0x27bdffc0
    ctx->pc = 0x2a0978u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a097c: 0xffbf0010
    ctx->pc = 0x2a097cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a0980: 0xffb00000
    ctx->pc = 0x2a0980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a0984: 0xe7b60030
    ctx->pc = 0x2a0984u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a0988: 0xe7b50028
    ctx->pc = 0x2a0988u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a098c: 0xe7b40020
    ctx->pc = 0x2a098cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a0990: 0x46006506
    ctx->pc = 0x2a0990u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2a0994: 0x46006d86
    ctx->pc = 0x2a0994u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2a0998: 0x46007546
    ctx->pc = 0x2a0998u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x2a099c: 0x3c100036
    ctx->pc = 0x2a099cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x2a09a0: 0x8e04dbc0
    ctx->pc = 0x2a09a0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a09a4: 0x3c020036
    ctx->pc = 0x2a09a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a09a8: 0x3c030036
    ctx->pc = 0x2a09a8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a09ac: 0xc48c00ec
    ctx->pc = 0x2a09acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a09b0: 0x4600a346
    ctx->pc = 0x2a09b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2a09b4: 0x248400f0
    ctx->pc = 0x2a09b4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 240));
    // 0x2a09b8: 0xc44edb70
    ctx->pc = 0x2a09b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a09bc: 0xc46fdb74
    ctx->pc = 0x2a09bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a09c0: 0x3c013dcc
    ctx->pc = 0x2a09c0u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2a09c4: 0x3421cccd
    ctx->pc = 0x2a09c4u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2a09c8: 0x44818000
    ctx->pc = 0x2a09c8u;
    *(uint32_t*)&ctx->f[16] = GPR_U32(ctx, 1);
    // 0x2a09cc: 0xc0a7ce8
    ctx->pc = 0x2A09CCu;
    SET_GPR_U32(ctx, 31, 0x2A09D4u);
    ctx->pc = 0x2A09D0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x29F3A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LimitCamVal_0x29f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A09D4u; }
    }
    if (ctx->pc != 0x2A09D4u) { return; }
    ctx->pc = 0x2A09D4u;
    // 0x2a09d4: 0x8e04dbc0
    ctx->pc = 0x2a09d4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a09d8: 0xe48000ec
    ctx->pc = 0x2a09d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
    // 0x2a09dc: 0x3c020036
    ctx->pc = 0x2a09dcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a09e0: 0xc44fdb80
    ctx->pc = 0x2a09e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a09e4: 0x46007807
    ctx->pc = 0x2a09e4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[15]);
    // 0x2a09e8: 0x3c013e80
    ctx->pc = 0x2a09e8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16000 << 16));
    // 0x2a09ec: 0x44817000
    ctx->pc = 0x2a09ecu;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x2a09f0: 0x3c020036
    ctx->pc = 0x2a09f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a09f4: 0xc48c00f4
    ctx->pc = 0x2a09f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a09f8: 0x4600b346
    ctx->pc = 0x2a09f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2a09fc: 0x248400f8
    ctx->pc = 0x2a09fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 248));
    // 0x2a0a00: 0x460e0382
    ctx->pc = 0x2a0a00u;
    ctx->f[14] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x2a0a04: 0xc450db84
    ctx->pc = 0x2a0a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2a0a08: 0x3c013dcc
    ctx->pc = 0x2a0a08u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2a0a0c: 0x3421cccd
    ctx->pc = 0x2a0a0cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2a0a10: 0x44818800
    ctx->pc = 0x2a0a10u;
    *(uint32_t*)&ctx->f[17] = GPR_U32(ctx, 1);
    // 0x2a0a14: 0xc0a7c7e
    ctx->pc = 0x2A0A14u;
    SET_GPR_U32(ctx, 31, 0x2A0A1Cu);
    ctx->pc = 0x2A0A18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x29F1F8u;
    {
        const uint32_t __entryPc = ctx->pc;
        LimitCamVal2_0x29f1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A1Cu; }
    }
    if (ctx->pc != 0x2A0A1Cu) { return; }
    ctx->pc = 0x2A0A1Cu;
    // 0x2a0a1c: 0x8e04dbc0
    ctx->pc = 0x2a0a1cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a0a20: 0xe48000f4
    ctx->pc = 0x2a0a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
    // 0x2a0a24: 0x3c020036
    ctx->pc = 0x2a0a24u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a0a28: 0x3c030036
    ctx->pc = 0x2a0a28u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x2a0a2c: 0xc48c0104
    ctx->pc = 0x2a0a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a0a30: 0x4600ab46
    ctx->pc = 0x2a0a30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2a0a34: 0x24840108
    ctx->pc = 0x2a0a34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 264));
    // 0x2a0a38: 0xc44edb78
    ctx->pc = 0x2a0a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a0a3c: 0xc46fdb7c
    ctx->pc = 0x2a0a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294957948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2a0a40: 0x3c013dcc
    ctx->pc = 0x2a0a40u;
    SET_GPR_U32(ctx, 1, ((uint32_t)15820 << 16));
    // 0x2a0a44: 0x3421cccd
    ctx->pc = 0x2a0a44u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 52429));
    // 0x2a0a48: 0x44818000
    ctx->pc = 0x2a0a48u;
    *(uint32_t*)&ctx->f[16] = GPR_U32(ctx, 1);
    // 0x2a0a4c: 0xc0a7ce8
    ctx->pc = 0x2A0A4Cu;
    SET_GPR_U32(ctx, 31, 0x2A0A54u);
    ctx->pc = 0x2A0A50u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x29F3A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LimitCamVal_0x29f3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A0A54u; }
    }
    if (ctx->pc != 0x2A0A54u) { return; }
    ctx->pc = 0x2A0A54u;
    // 0x2a0a54: 0x8e02dbc0
    ctx->pc = 0x2a0a54u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294958016)));
    // 0x2a0a58: 0xe4400104
    ctx->pc = 0x2a0a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 260), bits); }
    // 0x2a0a5c: 0x3c020031
    ctx->pc = 0x2a0a5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
    // 0x2a0a60: 0xdc430e28
    ctx->pc = 0x2a0a60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 3624)));
    // 0x2a0a64: 0x30620001
    ctx->pc = 0x2a0a64u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 1));
    // 0x2a0a68: 0x2103c
    ctx->pc = 0x2a0a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a0a6c: 0x2103f
    ctx->pc = 0x2a0a6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a0a70: 0x10400019
    ctx->pc = 0x2A0A70u;
    {
        const bool branch_taken_0x2a0a70 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0A74u;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 16));
        if (branch_taken_0x2a0a70) {
            ctx->pc = 0x2A0AD8u;
            goto label_2a0ad8;
        }
    }
    ctx->pc = 0x2A0A78u;
    // 0x2a0a78: 0x10400018
    ctx->pc = 0x2A0A78u;
    {
        const bool branch_taken_0x2a0a78 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A0A7Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x2a0a78) {
            ctx->pc = 0x2A0ADCu;
            goto label_2a0adc;
        }
    }
    ctx->pc = 0x2A0A80u;
    // 0x2a0a80: 0x3c014334
    ctx->pc = 0x2a0a80u;
    SET_GPR_U32(ctx, 1, ((uint32_t)17204 << 16));
    // 0x2a0a84: 0x44817000
    ctx->pc = 0x2a0a84u;
    *(uint32_t*)&ctx->f[14] = GPR_U32(ctx, 1);
    // 0x2a0a88: 0x460ea302
    ctx->pc = 0x2a0a88u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
    // 0x2a0a8c: 0x3c013ea2
    ctx->pc = 0x2a0a8cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16034 << 16));
    // 0x2a0a90: 0x3421f983
    ctx->pc = 0x2a0a90u;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 63875));
    // 0x2a0a94: 0x44810000
    ctx->pc = 0x2a0a94u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2a0a98: 0x460eab82
    ctx->pc = 0x2a0a98u;
    ctx->f[14] = FPU_MUL_S(ctx->f[21], ctx->f[14]);
    // 0x2a0a9c: 0x3c0400ff
    ctx->pc = 0x2a0a9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)255 << 16));
    // 0x2a0aa0: 0x3484ff00
    ctx->pc = 0x2a0aa0u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 4), 65280));
    // 0x2a0aa4: 0x24050001
    ctx->pc = 0x2a0aa4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a0aa8: 0x24060021
    ctx->pc = 0x2a0aa8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 33));
    // 0x2a0aac: 0x3c07003b
    ctx->pc = 0x2a0aacu;
    SET_GPR_U32(ctx, 7, ((uint32_t)59 << 16));
    // 0x2a0ab0: 0x24e7e548
    ctx->pc = 0x2a0ab0u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294960456));
    // 0x2a0ab4: 0x46006302
    ctx->pc = 0x2a0ab4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2a0ab8: 0x4600b346
    ctx->pc = 0x2a0ab8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x2a0abc: 0x46007382
    ctx->pc = 0x2a0abcu;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2a0ac0: 0xdfb00000
    ctx->pc = 0x2a0ac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0ac4: 0xc7b60030
    ctx->pc = 0x2a0ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a0ac8: 0xc7b50028
    ctx->pc = 0x2a0ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a0acc: 0xc7b40020
    ctx->pc = 0x2a0accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a0ad0: 0x80b4822
    ctx->pc = 0x2A0AD0u;
    ctx->pc = 0x2A0AD4u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2D2088u;
    xyprintfc_0x2d2088(rdram, ctx, runtime); return;
    ctx->pc = 0x2A0AD8u;
label_2a0ad8:
    // 0x2a0ad8: 0xdfbf0010
    ctx->pc = 0x2a0ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a0adc:
    // 0x2a0adc: 0xdfb00000
    ctx->pc = 0x2a0adcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0ae0: 0xc7b60030
    ctx->pc = 0x2a0ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a0ae4: 0xc7b50028
    ctx->pc = 0x2a0ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a0ae8: 0xc7b40020
    ctx->pc = 0x2a0ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a0aec: 0x3e00008
    ctx->pc = 0x2A0AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0AF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A0AD8u: goto label_2a0ad8;
            case 0x2A0ADCu: goto label_2a0adc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A0AF4u;
}
