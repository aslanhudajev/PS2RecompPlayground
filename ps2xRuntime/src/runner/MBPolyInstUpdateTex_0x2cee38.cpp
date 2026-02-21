#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: MBPolyInstUpdateTex
// Address: 0x2cee38 - 0x2cef5c
void MBPolyInstUpdateTex_0x2cee38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cee38u;

    // 0x2cee38: 0x27bdffd0
    ctx->pc = 0x2cee38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cee3c: 0xffbf0020
    ctx->pc = 0x2cee3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cee40: 0xffb10010
    ctx->pc = 0x2cee40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cee44: 0xffb00000
    ctx->pc = 0x2cee44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cee48: 0x84900000
    ctx->pc = 0x2cee48u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cee4c: 0x4a00031
    ctx->pc = 0x2CEE4Cu;
    {
        const bool branch_taken_0x2cee4c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2CEE50u;
        SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 20)));
        if (branch_taken_0x2cee4c) {
            ctx->pc = 0x2CEF14u;
            goto label_2cef14;
        }
    }
    ctx->pc = 0x2CEE54u;
    // 0x2cee54: 0xac850004
    ctx->pc = 0x2cee54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2cee58: 0xc0b3da0
    ctx->pc = 0x2CEE58u;
    SET_GPR_U32(ctx, 31, 0x2CEE60u);
    ctx->pc = 0x2CEE5Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CF680u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRomTexPtr_0x2cf680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CEE60u; }
    }
    if (ctx->pc != 0x2CEE60u) { return; }
    ctx->pc = 0x2CEE60u;
    // 0x2cee60: 0x40302d
    ctx->pc = 0x2cee60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cee64: 0x1a000038
    ctx->pc = 0x2CEE64u;
    {
        const bool branch_taken_0x2cee64 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2CEE68u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cee64) {
            ctx->pc = 0x2CEF48u;
            goto label_2cef48;
        }
    }
    ctx->pc = 0x2CEE6Cu;
    // 0x2cee6c: 0x3c02003b
    ctx->pc = 0x2cee6cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2cee70: 0x24497638
    ctx->pc = 0x2cee70u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 2), 30264));
    // 0x2cee74: 0x2602fffd
    ctx->pc = 0x2cee74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 16), 4294967293));
    // 0x2cee78: 0x23940
    ctx->pc = 0x2cee78u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 2), 5));
    // 0x2cee7c: 0x3c014180
    ctx->pc = 0x2cee7cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16768 << 16));
    // 0x2cee80: 0x44811800
    ctx->pc = 0x2cee80u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 1);
    // 0x2cee84: 0x3c013f00
    ctx->pc = 0x2cee84u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16128 << 16));
    // 0x2cee88: 0x44811000
    ctx->pc = 0x2cee88u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 1);
    // 0x2cee8c: 0x3c02003b
    ctx->pc = 0x2cee8cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)59 << 16));
    // 0x2cee90: 0x2448763c
    ctx->pc = 0x2cee90u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 2), 30268));
    // 0x2cee94: 0x52140
    ctx->pc = 0x2cee94u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 5));
label_2cee98:
    // 0x2cee98: 0x912021
    ctx->pc = 0x2cee98u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2cee9c: 0x518c0
    ctx->pc = 0x2cee9cu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 5), 3));
    // 0x2ceea0: 0x671821
    ctx->pc = 0x2ceea0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2ceea4: 0x691021
    ctx->pc = 0x2ceea4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2ceea8: 0xc4400000
    ctx->pc = 0x2ceea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ceeac: 0x46030002
    ctx->pc = 0x2ceeacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2ceeb0: 0x94c20016
    ctx->pc = 0x2ceeb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 22)));
    // 0x2ceeb4: 0x44820800
    ctx->pc = 0x2ceeb4u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2ceeb8: 0x46800860
    ctx->pc = 0x2ceeb8u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2ceebc: 0x46010002
    ctx->pc = 0x2ceebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ceec0: 0x46020000
    ctx->pc = 0x2ceec0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ceec4: 0x46000064
    ctx->pc = 0x2ceec4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2ceec8: 0x44020800
    ctx->pc = 0x2ceec8u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2ceecc: 0xa4820018
    ctx->pc = 0x2ceeccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ceed0: 0x681821
    ctx->pc = 0x2ceed0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ceed4: 0xc4600000
    ctx->pc = 0x2ceed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ceed8: 0x46030002
    ctx->pc = 0x2ceed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2ceedc: 0x94c20018
    ctx->pc = 0x2ceedcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2ceee0: 0x44820800
    ctx->pc = 0x2ceee0u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x2ceee4: 0x46800860
    ctx->pc = 0x2ceee4u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x2ceee8: 0x46010002
    ctx->pc = 0x2ceee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ceeec: 0x46020000
    ctx->pc = 0x2ceeecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2ceef0: 0x46000064
    ctx->pc = 0x2ceef0u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x2ceef4: 0x44020800
    ctx->pc = 0x2ceef4u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x2ceef8: 0xa482001a
    ctx->pc = 0x2ceef8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 26), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ceefc: 0x24a50001
    ctx->pc = 0x2ceefcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cef00: 0xb0102a
    ctx->pc = 0x2cef00u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 16)));
    // 0x2cef04: 0x1440ffe4
    ctx->pc = 0x2CEF04u;
    {
        const bool branch_taken_0x2cef04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2CEF08u;
        SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 5), 5));
        if (branch_taken_0x2cef04) {
            ctx->pc = 0x2CEE98u;
            goto label_2cee98;
        }
    }
    ctx->pc = 0x2CEF0Cu;
    // 0x2cef0c: 0x1000000f
    ctx->pc = 0x2CEF0Cu;
    {
        const bool branch_taken_0x2cef0c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2CEF10u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x2cef0c) {
            ctx->pc = 0x2CEF4Cu;
            goto label_2cef4c;
        }
    }
    ctx->pc = 0x2CEF14u;
label_2cef14:
    // 0x2cef14: 0x2402ffff
    ctx->pc = 0x2cef14u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cef18: 0xac820004
    ctx->pc = 0x2cef18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2cef1c: 0x1a00000a
    ctx->pc = 0x2CEF1Cu;
    {
        const bool branch_taken_0x2cef1c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2CEF20u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cef1c) {
            ctx->pc = 0x2CEF48u;
            goto label_2cef48;
        }
    }
    ctx->pc = 0x2CEF24u;
    // 0x2cef24: 0x0
    ctx->pc = 0x2cef24u;
    // NOP
label_2cef28:
    // 0x2cef28: 0x51140
    ctx->pc = 0x2cef28u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 5));
    // 0x2cef2c: 0x511021
    ctx->pc = 0x2cef2cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2cef30: 0xa4400018
    ctx->pc = 0x2cef30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cef34: 0xa440001a
    ctx->pc = 0x2cef34u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 0));
    // 0x2cef38: 0x24a50001
    ctx->pc = 0x2cef38u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cef3c: 0xb0102a
    ctx->pc = 0x2cef3cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 16)));
    // 0x2cef40: 0x1440fff9
    ctx->pc = 0x2CEF40u;
    {
        const bool branch_taken_0x2cef40 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2cef40) {
            ctx->pc = 0x2CEF28u;
            goto label_2cef28;
        }
    }
    ctx->pc = 0x2CEF48u;
label_2cef48:
    // 0x2cef48: 0xdfbf0020
    ctx->pc = 0x2cef48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2cef4c:
    // 0x2cef4c: 0xdfb10010
    ctx->pc = 0x2cef4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cef50: 0xdfb00000
    ctx->pc = 0x2cef50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cef54: 0x3e00008
    ctx->pc = 0x2CEF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CEF58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CEE98u: goto label_2cee98;
            case 0x2CEF14u: goto label_2cef14;
            case 0x2CEF28u: goto label_2cef28;
            case 0x2CEF48u: goto label_2cef48;
            case 0x2CEF4Cu: goto label_2cef4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CEF5Cu;
}
