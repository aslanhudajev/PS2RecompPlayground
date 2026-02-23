#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: shapeAnimParaHand__10PeopleTaskFiP13PPL_FANI_DATA
// Address: 0x20bb70 - 0x20bce8
void shapeAnimParaHand__10PeopleTaskFiP13PPL_FANI_DATA_0x20bb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("shapeAnimParaHand__10PeopleTaskFiP13PPL_FANI_DATA");


    ctx->pc = 0x20bb70u;

    // 0x20bb70: 0x27bdffd0
    ctx->pc = 0x20bb70u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20bb74: 0x7fbf0010
    ctx->pc = 0x20bb74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x20bb78: 0x7fb00000
    ctx->pc = 0x20bb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20bb7c: 0x84c30008
    ctx->pc = 0x20bb7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x20bb80: 0x10600055
    ctx->pc = 0x20BB80u;
    {
        const bool branch_taken_0x20bb80 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BB84u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20bb80) {
            ctx->pc = 0x20BCD8u;
            goto label_20bcd8;
        }
    }
    ctx->pc = 0x20BB88u;
    // 0x20bb88: 0xc6000004
    ctx->pc = 0x20bb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bb8c: 0x44800800
    ctx->pc = 0x20bb8cu;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 0);
    // 0x20bb90: 0x0
    ctx->pc = 0x20bb90u;
    // NOP
    // 0x20bb94: 0x46010036
    ctx->pc = 0x20bb94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bb98: 0x0
    ctx->pc = 0x20bb98u;
    // NOP
    // 0x20bb9c: 0x4501001f
    ctx->pc = 0x20BB9Cu;
    {
        const bool branch_taken_0x20bb9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bb9c) {
            ctx->pc = 0x20BC1Cu;
            goto label_20bc1c;
        }
    }
    ctx->pc = 0x20BBA4u;
    // 0x20bba4: 0xafa00020
    ctx->pc = 0x20bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x20bba8: 0x24020002
    ctx->pc = 0x20bba8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20bbac: 0xafa20024
    ctx->pc = 0x20bbacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x20bbb0: 0x24020001
    ctx->pc = 0x20bbb0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bbb4: 0xafa20028
    ctx->pc = 0x20bbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x20bbb8: 0x2402ffff
    ctx->pc = 0x20bbb8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bbbc: 0xafa2002c
    ctx->pc = 0x20bbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x20bbc0: 0x8e060000
    ctx->pc = 0x20bbc0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20bbc4: 0xc60c0004
    ctx->pc = 0x20bbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20bbc8: 0xc082e3c
    ctx->pc = 0x20BBC8u;
    SET_GPR_U32(ctx, 31, 0x20BBD0u);
    ctx->pc = 0x20BBCCu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x20B8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimation__10PeopleTaskFiPffPi_0x20b8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BBD0u; }
        else if (ctx->pc != 0x20BBD0u) { ctx->pc = 0x20BBD0u; }
    }
    if (ctx->pc != 0x20BBD0u) { return; }
    ctx->pc = 0x20BBD0u;
    // 0x20bbd0: 0x86040008
    ctx->pc = 0x20bbd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20bbd4: 0x24030001
    ctx->pc = 0x20bbd4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bbd8: 0x14830032
    ctx->pc = 0x20BBD8u;
    {
        const bool branch_taken_0x20bbd8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20BBDCu;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20bbd8) {
            ctx->pc = 0x20BCA4u;
            goto label_20bca4;
        }
    }
    ctx->pc = 0x20BBE0u;
    // 0x20bbe0: 0x8604000a
    ctx->pc = 0x20bbe0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x20bbe4: 0x2403ffff
    ctx->pc = 0x20bbe4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bbe8: 0x1083002e
    ctx->pc = 0x20BBE8u;
    {
        const bool branch_taken_0x20bbe8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20bbe8) {
            ctx->pc = 0x20BCA4u;
            goto label_20bca4;
        }
    }
    ctx->pc = 0x20BBF0u;
    // 0x20bbf0: 0x8e030000
    ctx->pc = 0x20bbf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20bbf4: 0x42080
    ctx->pc = 0x20bbf4u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20bbf8: 0xc600000c
    ctx->pc = 0x20bbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bbfc: 0x641821
    ctx->pc = 0x20bbfcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20bc00: 0xc4610000
    ctx->pc = 0x20bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bc04: 0x46000834
    ctx->pc = 0x20bc04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bc08: 0x0
    ctx->pc = 0x20bc08u;
    // NOP
    // 0x20bc0c: 0x45010025
    ctx->pc = 0x20BC0Cu;
    {
        const bool branch_taken_0x20bc0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bc0c) {
            ctx->pc = 0x20BCA4u;
            goto label_20bca4;
        }
    }
    ctx->pc = 0x20BC14u;
    // 0x20bc14: 0x10000023
    ctx->pc = 0x20BC14u;
    {
        const bool branch_taken_0x20bc14 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20BC18u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x20bc14) {
            ctx->pc = 0x20BCA4u;
            goto label_20bca4;
        }
    }
    ctx->pc = 0x20BC1Cu;
label_20bc1c:
    // 0x20bc1c: 0x46010034
    ctx->pc = 0x20bc1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bc20: 0x0
    ctx->pc = 0x20bc20u;
    // NOP
    // 0x20bc24: 0x4502001f
    ctx->pc = 0x20BC24u;
    {
        const bool branch_taken_0x20bc24 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bc24) {
            ctx->pc = 0x20BC28u;
            SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->pc = 0x20BCA4u;
            goto label_20bca4;
        }
    }
    ctx->pc = 0x20BC2Cu;
    // 0x20bc2c: 0x24020001
    ctx->pc = 0x20bc2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bc30: 0xafa20020
    ctx->pc = 0x20bc30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x20bc34: 0x24020002
    ctx->pc = 0x20bc34u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20bc38: 0xafa20024
    ctx->pc = 0x20bc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x20bc3c: 0xafa00028
    ctx->pc = 0x20bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x20bc40: 0x2402ffff
    ctx->pc = 0x20bc40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bc44: 0xafa2002c
    ctx->pc = 0x20bc44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x20bc48: 0xc6000004
    ctx->pc = 0x20bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bc4c: 0x8e060000
    ctx->pc = 0x20bc4cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20bc50: 0x27a70020
    ctx->pc = 0x20bc50u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 29), 32));
    // 0x20bc54: 0xc082e3c
    ctx->pc = 0x20BC54u;
    SET_GPR_U32(ctx, 31, 0x20BC5Cu);
    ctx->pc = 0x20BC58u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    ctx->pc = 0x20B8F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        shapeAnimation__10PeopleTaskFiPffPi_0x20b8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20BC5Cu; }
        else if (ctx->pc != 0x20BC5Cu) { ctx->pc = 0x20BC5Cu; }
    }
    if (ctx->pc != 0x20BC5Cu) { return; }
    ctx->pc = 0x20BC5Cu;
    // 0x20bc5c: 0x86040008
    ctx->pc = 0x20bc5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20bc60: 0x24030001
    ctx->pc = 0x20bc60u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bc64: 0x1483000f
    ctx->pc = 0x20BC64u;
    {
        const bool branch_taken_0x20bc64 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20BC68u;
        SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20bc64) {
            ctx->pc = 0x20BCA4u;
            goto label_20bca4;
        }
    }
    ctx->pc = 0x20BC6Cu;
    // 0x20bc6c: 0x8604000a
    ctx->pc = 0x20bc6cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x20bc70: 0x2403ffff
    ctx->pc = 0x20bc70u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bc74: 0x1083000b
    ctx->pc = 0x20BC74u;
    {
        const bool branch_taken_0x20bc74 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x20bc74) {
            ctx->pc = 0x20BCA4u;
            goto label_20bca4;
        }
    }
    ctx->pc = 0x20BC7Cu;
    // 0x20bc7c: 0x8e030000
    ctx->pc = 0x20bc7cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20bc80: 0x42080
    ctx->pc = 0x20bc80u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20bc84: 0xc600000c
    ctx->pc = 0x20bc84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bc88: 0x641821
    ctx->pc = 0x20bc88u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20bc8c: 0xc4610000
    ctx->pc = 0x20bc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20bc90: 0x46000836
    ctx->pc = 0x20bc90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20bc94: 0x0
    ctx->pc = 0x20bc94u;
    // NOP
    // 0x20bc98: 0x45000002
    ctx->pc = 0x20BC98u;
    {
        const bool branch_taken_0x20bc98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20bc98) {
            ctx->pc = 0x20BCA4u;
            goto label_20bca4;
        }
    }
    ctx->pc = 0x20BCA0u;
    // 0x20bca0: 0xa6000008
    ctx->pc = 0x20bca0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
label_20bca4:
    // 0x20bca4: 0x10a0000c
    ctx->pc = 0x20BCA4u;
    {
        const bool branch_taken_0x20bca4 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x20bca4) {
            ctx->pc = 0x20BCD8u;
            goto label_20bcd8;
        }
    }
    ctx->pc = 0x20BCACu;
    // 0x20bcac: 0xc6000004
    ctx->pc = 0x20bcacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20bcb0: 0x3c03bf80
    ctx->pc = 0x20bcb0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)49024 << 16));
    // 0x20bcb4: 0x44830800
    ctx->pc = 0x20bcb4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 3);
    // 0x20bcb8: 0x0
    ctx->pc = 0x20bcb8u;
    // NOP
    // 0x20bcbc: 0x46010002
    ctx->pc = 0x20bcbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20bcc0: 0xe6000004
    ctx->pc = 0x20bcc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x20bcc4: 0x86030008
    ctx->pc = 0x20bcc4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20bcc8: 0x18600003
    ctx->pc = 0x20BCC8u;
    {
        const bool branch_taken_0x20bcc8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x20bcc8) {
            ctx->pc = 0x20BCD8u;
            goto label_20bcd8;
        }
    }
    ctx->pc = 0x20BCD0u;
    // 0x20bcd0: 0x2463ffff
    ctx->pc = 0x20bcd0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x20bcd4: 0xa6030008
    ctx->pc = 0x20bcd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
label_20bcd8:
    // 0x20bcd8: 0x7bbf0010
    ctx->pc = 0x20bcd8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20bcdc: 0x7bb00000
    ctx->pc = 0x20bcdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bce0: 0x3e00008
    ctx->pc = 0x20BCE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BCE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20BC1Cu: goto label_20bc1c;
            case 0x20BCA4u: goto label_20bca4;
            case 0x20BCD8u: goto label_20bcd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20BCE8u;
}
