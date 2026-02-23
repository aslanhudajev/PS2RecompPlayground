#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: gunExe__10PlayerTaskFv
// Address: 0x20fc20 - 0x20fee0
void gunExe__10PlayerTaskFv_0x20fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("gunExe__10PlayerTaskFv");


    ctx->pc = 0x20fc20u;

    // 0x20fc20: 0x27bdffc0
    ctx->pc = 0x20fc20u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20fc24: 0x7fbf0030
    ctx->pc = 0x20fc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x20fc28: 0x7fb20020
    ctx->pc = 0x20fc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x20fc2c: 0x7fb10010
    ctx->pc = 0x20fc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20fc30: 0x7fb00000
    ctx->pc = 0x20fc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20fc34: 0x8c861cb8
    ctx->pc = 0x20fc34u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 7352)));
    // 0x20fc38: 0x3c020050
    ctx->pc = 0x20fc38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x20fc3c: 0x2445db70
    ctx->pc = 0x20fc3cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 4294957936));
    // 0x20fc40: 0x24030006
    ctx->pc = 0x20fc40u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 6));
    // 0x20fc44: 0x24020001
    ctx->pc = 0x20fc44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fc48: 0x3c010050
    ctx->pc = 0x20fc48u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20fc4c: 0x661823
    ctx->pc = 0x20fc4cu;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x20fc50: 0x621804
    ctx->pc = 0x20fc50u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x20fc54: 0x61080
    ctx->pc = 0x20fc54u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x20fc58: 0x463021
    ctx->pc = 0x20fc58u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x20fc5c: 0x61080
    ctx->pc = 0x20fc5cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 6), 2));
    // 0x20fc60: 0xc21021
    ctx->pc = 0x20fc60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x20fc64: 0x21080
    ctx->pc = 0x20fc64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fc68: 0xa28021
    ctx->pc = 0x20fc68u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20fc6c: 0x8022dc3c
    ctx->pc = 0x20fc6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958140)));
    // 0x20fc70: 0x70809628
    ctx->pc = 0x20fc70u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x20fc74: 0x70008e28
    ctx->pc = 0x20fc74u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fc78: 0x621025
    ctx->pc = 0x20fc78u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20fc7c: 0x3c010050
    ctx->pc = 0x20fc7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x20fc80: 0xc083fb8
    ctx->pc = 0x20FC80u;
    SET_GPR_U32(ctx, 31, 0x20FC88u);
    ctx->pc = 0x20FC84u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958140), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20FEE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getInput__10PlayerTaskFv_0x20fee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FC88u; }
        else if (ctx->pc != 0x20FC88u) { ctx->pc = 0x20FC88u; }
    }
    if (ctx->pc != 0x20FC88u) { return; }
    ctx->pc = 0x20FC88u;
    // 0x20fc88: 0x8e441cbc
    ctx->pc = 0x20fc88u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fc8c: 0x24030001
    ctx->pc = 0x20fc8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fc90: 0x8c840054
    ctx->pc = 0x20fc90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x20fc94: 0x14830005
    ctx->pc = 0x20FC94u;
    {
        const bool branch_taken_0x20fc94 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        ctx->pc = 0x20FC98u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20fc94) {
            ctx->pc = 0x20FCACu;
            goto label_20fcac;
        }
    }
    ctx->pc = 0x20FC9Cu;
    // 0x20fc9c: 0xc084444
    ctx->pc = 0x20FC9Cu;
    SET_GPR_U32(ctx, 31, 0x20FCA4u);
    ctx->pc = 0x211110u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispBulletInit__10PlayerTaskFv_0x211110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FCA4u; }
        else if (ctx->pc != 0x20FCA4u) { ctx->pc = 0x20FCA4u; }
    }
    if (ctx->pc != 0x20FCA4u) { return; }
    ctx->pc = 0x20FCA4u;
    // 0x20fca4: 0x8e431cbc
    ctx->pc = 0x20fca4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fca8: 0xac600054
    ctx->pc = 0x20fca8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
label_20fcac:
    // 0x20fcac: 0x8f838cb0
    ctx->pc = 0x20fcacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
    // 0x20fcb0: 0x30630010
    ctx->pc = 0x20fcb0u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 16));
    // 0x20fcb4: 0x14600006
    ctx->pc = 0x20FCB4u;
    {
        const bool branch_taken_0x20fcb4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20fcb4) {
            ctx->pc = 0x20FCD0u;
            goto label_20fcd0;
        }
    }
    ctx->pc = 0x20FCBCu;
    // 0x20fcbc: 0x8e441cbc
    ctx->pc = 0x20fcbcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fcc0: 0x24030008
    ctx->pc = 0x20fcc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 8));
    // 0x20fcc4: 0x8c840004
    ctx->pc = 0x20fcc4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x20fcc8: 0x1483000b
    ctx->pc = 0x20FCC8u;
    {
        const bool branch_taken_0x20fcc8 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x20fcc8) {
            ctx->pc = 0x20FCF8u;
            goto label_20fcf8;
        }
    }
    ctx->pc = 0x20FCD0u;
label_20fcd0:
    // 0x20fcd0: 0x8e441cbc
    ctx->pc = 0x20fcd0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fcd4: 0x24110001
    ctx->pc = 0x20fcd4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fcd8: 0x8c830048
    ctx->pc = 0x20fcd8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x20fcdc: 0xac83004c
    ctx->pc = 0x20fcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
    // 0x20fce0: 0x8e431cbc
    ctx->pc = 0x20fce0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fce4: 0xac600050
    ctx->pc = 0x20fce4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
    // 0x20fce8: 0x8e431cbc
    ctx->pc = 0x20fce8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fcec: 0xac600058
    ctx->pc = 0x20fcecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x20fcf0: 0x8e431cbc
    ctx->pc = 0x20fcf0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fcf4: 0xac600054
    ctx->pc = 0x20fcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
label_20fcf8:
    // 0x20fcf8: 0x8203000e
    ctx->pc = 0x20fcf8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x20fcfc: 0x10600067
    ctx->pc = 0x20FCFCu;
    {
        const bool branch_taken_0x20fcfc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20fcfc) {
            ctx->pc = 0x20FE9Cu;
            goto label_20fe9c;
        }
    }
    ctx->pc = 0x20FD04u;
    // 0x20fd04: 0x8603000c
    ctx->pc = 0x20fd04u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20fd08: 0x10600059
    ctx->pc = 0x20FD08u;
    {
        const bool branch_taken_0x20fd08 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20fd08) {
            ctx->pc = 0x20FE70u;
            goto label_20fe70;
        }
    }
    ctx->pc = 0x20FD10u;
    // 0x20fd10: 0x8e431cbc
    ctx->pc = 0x20fd10u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fd14: 0x8c64004c
    ctx->pc = 0x20fd14u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x20fd18: 0x10800055
    ctx->pc = 0x20FD18u;
    {
        const bool branch_taken_0x20fd18 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FD1Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 3), 76));
        if (branch_taken_0x20fd18) {
            ctx->pc = 0x20FE70u;
            goto label_20fe70;
        }
    }
    ctx->pc = 0x20FD20u;
    // 0x20fd20: 0x8f838b68
    ctx->pc = 0x20fd20u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937448)));
    // 0x20fd24: 0x10600052
    ctx->pc = 0x20FD24u;
    {
        const bool branch_taken_0x20fd24 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20fd24) {
            ctx->pc = 0x20FE70u;
            goto label_20fe70;
        }
    }
    ctx->pc = 0x20FD2Cu;
    // 0x20fd2c: 0x1620000a
    ctx->pc = 0x20FD2Cu;
    {
        const bool branch_taken_0x20fd2c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x20FD30u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967295));
        if (branch_taken_0x20fd2c) {
            ctx->pc = 0x20FD58u;
            goto label_20fd58;
        }
    }
    ctx->pc = 0x20FD34u;
    // 0x20fd34: 0xaca20000
    ctx->pc = 0x20fd34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x20fd38: 0x8e431cbc
    ctx->pc = 0x20fd38u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fd3c: 0x8c620064
    ctx->pc = 0x20fd3cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x20fd40: 0x24420001
    ctx->pc = 0x20fd40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20fd44: 0xac620064
    ctx->pc = 0x20fd44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 2));
    // 0x20fd48: 0x8e431cbc
    ctx->pc = 0x20fd48u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fd4c: 0x8c62006c
    ctx->pc = 0x20fd4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x20fd50: 0x24420001
    ctx->pc = 0x20fd50u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x20fd54: 0xac62006c
    ctx->pc = 0x20fd54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
label_20fd58:
    // 0x20fd58: 0x8e431cbc
    ctx->pc = 0x20fd58u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fd5c: 0x8c62004c
    ctx->pc = 0x20fd5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x20fd60: 0x14400004
    ctx->pc = 0x20FD60u;
    {
        const bool branch_taken_0x20fd60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20FD64u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20fd60) {
            ctx->pc = 0x20FD74u;
            goto label_20fd74;
        }
    }
    ctx->pc = 0x20FD68u;
    // 0x20fd68: 0xac620050
    ctx->pc = 0x20fd68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 2));
    // 0x20fd6c: 0x8e421cbc
    ctx->pc = 0x20fd6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fd70: 0xac400058
    ctx->pc = 0x20fd70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_20fd74:
    // 0x20fd74: 0x8e421cbc
    ctx->pc = 0x20fd74u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fd78: 0x24030001
    ctx->pc = 0x20fd78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fd7c: 0xac430024
    ctx->pc = 0x20fd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x20fd80: 0x8e421cbc
    ctx->pc = 0x20fd80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fd84: 0xc44c001c
    ctx->pc = 0x20fd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20fd88: 0xc44d0020
    ctx->pc = 0x20fd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20fd8c: 0xc074ed4
    ctx->pc = 0x20FD8Cu;
    SET_GPR_U32(ctx, 31, 0x20FD94u);
    ctx->pc = 0x20FD90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 7352)));
    ctx->pc = 0x1D3B50u;
    {
        const uint32_t __entryPc = ctx->pc;
        Ent_ShotRay__Fiff_0x1d3b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FD94u; }
        else if (ctx->pc != 0x20FD94u) { ctx->pc = 0x20FD94u; }
    }
    if (ctx->pc != 0x20FD94u) { return; }
    ctx->pc = 0x20FD94u;
    // 0x20fd94: 0xc083fd0
    ctx->pc = 0x20FD94u;
    SET_GPR_U32(ctx, 31, 0x20FD9Cu);
    ctx->pc = 0x20FD98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x20FF40u;
    {
        const uint32_t __entryPc = ctx->pc;
        bulletConst__10PlayerTaskFv_0x20ff40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FD9Cu; }
        else if (ctx->pc != 0x20FD9Cu) { ctx->pc = 0x20FD9Cu; }
    }
    if (ctx->pc != 0x20FD9Cu) { return; }
    ctx->pc = 0x20FD9Cu;
    // 0x20fd9c: 0x8e421cb8
    ctx->pc = 0x20fd9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7352)));
    // 0x20fda0: 0x1440000b
    ctx->pc = 0x20FDA0u;
    {
        const bool branch_taken_0x20fda0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x20FDA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
        if (branch_taken_0x20fda0) {
            ctx->pc = 0x20FDD0u;
            goto label_20fdd0;
        }
    }
    ctx->pc = 0x20FDA8u;
    // 0x20fda8: 0x3c020051
    ctx->pc = 0x20fda8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x20fdac: 0x244434f0
    ctx->pc = 0x20fdacu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x20fdb0: 0x3c020002
    ctx->pc = 0x20fdb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x20fdb4: 0x3445000c
    ctx->pc = 0x20fdb4u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 12));
    // 0x20fdb8: 0x70003628
    ctx->pc = 0x20fdb8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fdbc: 0x70003e28
    ctx->pc = 0x20fdbcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fdc0: 0xc086018
    ctx->pc = 0x20FDC0u;
    SET_GPR_U32(ctx, 31, 0x20FDC8u);
    ctx->pc = 0x20FDC4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FDC8u; }
        else if (ctx->pc != 0x20FDC8u) { ctx->pc = 0x20FDC8u; }
    }
    if (ctx->pc != 0x20FDC8u) { return; }
    ctx->pc = 0x20FDC8u;
    // 0x20fdc8: 0x10000009
    ctx->pc = 0x20FDC8u;
    {
        const bool branch_taken_0x20fdc8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FDCCu;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
        if (branch_taken_0x20fdc8) {
            ctx->pc = 0x20FDF0u;
            goto label_20fdf0;
        }
    }
    ctx->pc = 0x20FDD0u;
label_20fdd0:
    // 0x20fdd0: 0x244434f0
    ctx->pc = 0x20fdd0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 13552));
    // 0x20fdd4: 0x3c020002
    ctx->pc = 0x20fdd4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x20fdd8: 0x3445000d
    ctx->pc = 0x20fdd8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 2), 13));
    // 0x20fddc: 0x70003628
    ctx->pc = 0x20fddcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fde0: 0x70003e28
    ctx->pc = 0x20fde0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x20fde4: 0xc086018
    ctx->pc = 0x20FDE4u;
    SET_GPR_U32(ctx, 31, 0x20FDECu);
    ctx->pc = 0x20FDE8u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 64));
    ctx->pc = 0x218060u;
    {
        const uint32_t __entryPc = ctx->pc;
        seqRequest__13SoundMgrClassFiiii_0x218060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FDECu; }
        else if (ctx->pc != 0x20FDECu) { ctx->pc = 0x20FDECu; }
    }
    if (ctx->pc != 0x20FDECu) { return; }
    ctx->pc = 0x20FDECu;
    // 0x20fdec: 0x8f838d68
    ctx->pc = 0x20fdecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 28), 4294937960)));
label_20fdf0:
    // 0x20fdf0: 0x24020002
    ctx->pc = 0x20fdf0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x20fdf4: 0x80630004
    ctx->pc = 0x20fdf4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x20fdf8: 0x1462001b
    ctx->pc = 0x20FDF8u;
    {
        const bool branch_taken_0x20fdf8 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x20FDFCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20fdf8) {
            ctx->pc = 0x20FE68u;
            goto label_20fe68;
        }
    }
    ctx->pc = 0x20FE00u;
    // 0x20fe00: 0x16200018
    ctx->pc = 0x20FE00u;
    {
        const bool branch_taken_0x20fe00 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        if (branch_taken_0x20fe00) {
            ctx->pc = 0x20FE64u;
            goto label_20fe64;
        }
    }
    ctx->pc = 0x20FE08u;
    // 0x20fe08: 0x8e421cbc
    ctx->pc = 0x20fe08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fe0c: 0x8c44004c
    ctx->pc = 0x20fe0cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x20fe10: 0x28810008
    ctx->pc = 0x20fe10u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), 8));
    // 0x20fe14: 0x50200001
    ctx->pc = 0x20FE14u;
    {
        const bool branch_taken_0x20fe14 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x20fe14) {
            ctx->pc = 0x20FE18u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
            ctx->pc = 0x20FE1Cu;
            goto label_20fe1c;
        }
    }
    ctx->pc = 0x20FE1Cu;
label_20fe1c:
    // 0x20fe1c: 0x8e451cb8
    ctx->pc = 0x20fe1cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 7352)));
    // 0x20fe20: 0x3c020052
    ctx->pc = 0x20fe20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)82 << 16));
    // 0x20fe24: 0x2443c910
    ctx->pc = 0x20fe24u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4294953232));
    // 0x20fe28: 0x410c0
    ctx->pc = 0x20fe28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 4), 3));
    // 0x20fe2c: 0x441021
    ctx->pc = 0x20fe2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x20fe30: 0x21080
    ctx->pc = 0x20fe30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x20fe34: 0x520c0
    ctx->pc = 0x20fe34u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
    // 0x20fe38: 0x852821
    ctx->pc = 0x20fe38u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x20fe3c: 0x520c0
    ctx->pc = 0x20fe3cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 3));
    // 0x20fe40: 0xa42021
    ctx->pc = 0x20fe40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x20fe44: 0x42080
    ctx->pc = 0x20fe44u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x20fe48: 0x641821
    ctx->pc = 0x20fe48u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x20fe4c: 0x431021
    ctx->pc = 0x20fe4cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x20fe50: 0xc44c0000
    ctx->pc = 0x20fe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20fe54: 0xc44d0004
    ctx->pc = 0x20fe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20fe58: 0xc44e0008
    ctx->pc = 0x20fe58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20fe5c: 0xc0842e0
    ctx->pc = 0x20FE5Cu;
    SET_GPR_U32(ctx, 31, 0x20FE64u);
    ctx->pc = 0x20FE60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x210B80u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispCartridgeBorn__10PlayerTaskFfff_0x210b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE64u; }
        else if (ctx->pc != 0x20FE64u) { ctx->pc = 0x20FE64u; }
    }
    if (ctx->pc != 0x20FE64u) { return; }
    ctx->pc = 0x20FE64u;
label_20fe64:
    // 0x20fe64: 0x72402628
    ctx->pc = 0x20fe64u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
label_20fe68:
    // 0x20fe68: 0xc084464
    ctx->pc = 0x20FE68u;
    SET_GPR_U32(ctx, 31, 0x20FE70u);
    ctx->pc = 0x211190u;
    {
        const uint32_t __entryPc = ctx->pc;
        dispBulletMoveOn__10PlayerTaskFv_0x211190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FE70u; }
        else if (ctx->pc != 0x20FE70u) { ctx->pc = 0x20FE70u; }
    }
    if (ctx->pc != 0x20FE70u) { return; }
    ctx->pc = 0x20FE70u;
label_20fe70:
    // 0x20fe70: 0x8603000c
    ctx->pc = 0x20fe70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20fe74: 0x14600009
    ctx->pc = 0x20FE74u;
    {
        const bool branch_taken_0x20fe74 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x20fe74) {
            ctx->pc = 0x20FE9Cu;
            goto label_20fe9c;
        }
    }
    ctx->pc = 0x20FE7Cu;
    // 0x20fe7c: 0x8e451cbc
    ctx->pc = 0x20fe7cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20fe80: 0x8ca4004c
    ctx->pc = 0x20fe80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x20fe84: 0x8ca30048
    ctx->pc = 0x20fe84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x20fe88: 0x831826
    ctx->pc = 0x20fe88u;
    SET_GPR_U32(ctx, 3, XOR32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20fe8c: 0x3182b
    ctx->pc = 0x20fe8cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x20fe90: 0x10600002
    ctx->pc = 0x20FE90u;
    {
        const bool branch_taken_0x20fe90 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FE94u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20fe90) {
            ctx->pc = 0x20FE9Cu;
            goto label_20fe9c;
        }
    }
    ctx->pc = 0x20FE98u;
    // 0x20fe98: 0xaca3005c
    ctx->pc = 0x20fe98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 3));
label_20fe9c:
    // 0x20fe9c: 0x97838bf4
    ctx->pc = 0x20fe9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937588)));
    // 0x20fea0: 0x10600003
    ctx->pc = 0x20FEA0u;
    {
        const bool branch_taken_0x20fea0 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x20fea0) {
            ctx->pc = 0x20FEB0u;
            goto label_20feb0;
        }
    }
    ctx->pc = 0x20FEA8u;
    // 0x20fea8: 0x8e431cbc
    ctx->pc = 0x20fea8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20feac: 0xac60005c
    ctx->pc = 0x20feacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
label_20feb0:
    // 0x20feb0: 0x8e431cbc
    ctx->pc = 0x20feb0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 7356)));
    // 0x20feb4: 0x8c63005c
    ctx->pc = 0x20feb4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x20feb8: 0x10600003
    ctx->pc = 0x20FEB8u;
    {
        const bool branch_taken_0x20feb8 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x20FEBCu;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
        if (branch_taken_0x20feb8) {
            ctx->pc = 0x20FEC8u;
            goto label_20fec8;
        }
    }
    ctx->pc = 0x20FEC0u;
    // 0x20fec0: 0xc083e90
    ctx->pc = 0x20FEC0u;
    SET_GPR_U32(ctx, 31, 0x20FEC8u);
    ctx->pc = 0x20FA40u;
    {
        const uint32_t __entryPc = ctx->pc;
        reloadExe__10PlayerTaskFv_0x20fa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20FEC8u; }
        else if (ctx->pc != 0x20FEC8u) { ctx->pc = 0x20FEC8u; }
    }
    if (ctx->pc != 0x20FEC8u) { return; }
    ctx->pc = 0x20FEC8u;
label_20fec8:
    // 0x20fec8: 0x7bbf0030
    ctx->pc = 0x20fec8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20fecc: 0x7bb20020
    ctx->pc = 0x20feccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20fed0: 0x7bb10010
    ctx->pc = 0x20fed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20fed4: 0x7bb00000
    ctx->pc = 0x20fed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20fed8: 0x3e00008
    ctx->pc = 0x20FED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20FEDCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FCACu: goto label_20fcac;
            case 0x20FCD0u: goto label_20fcd0;
            case 0x20FCF8u: goto label_20fcf8;
            case 0x20FD58u: goto label_20fd58;
            case 0x20FD74u: goto label_20fd74;
            case 0x20FDD0u: goto label_20fdd0;
            case 0x20FDF0u: goto label_20fdf0;
            case 0x20FE1Cu: goto label_20fe1c;
            case 0x20FE64u: goto label_20fe64;
            case 0x20FE68u: goto label_20fe68;
            case 0x20FE70u: goto label_20fe70;
            case 0x20FE9Cu: goto label_20fe9c;
            case 0x20FEB0u: goto label_20feb0;
            case 0x20FEC8u: goto label_20fec8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20FEE0u;
}
