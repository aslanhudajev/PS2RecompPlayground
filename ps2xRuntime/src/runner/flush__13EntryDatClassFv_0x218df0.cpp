#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: flush__13EntryDatClassFv
// Address: 0x218df0 - 0x218e98
void flush__13EntryDatClassFv_0x218df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("flush__13EntryDatClassFv");


    ctx->pc = 0x218df0u;

    // 0x218df0: 0x27bdffc0
    ctx->pc = 0x218df0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x218df4: 0x7fbf0030
    ctx->pc = 0x218df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x218df8: 0x7fb20020
    ctx->pc = 0x218df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x218dfc: 0x7fb10010
    ctx->pc = 0x218dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x218e00: 0x7fb00000
    ctx->pc = 0x218e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x218e04: 0x84921000
    ctx->pc = 0x218e04u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4096)));
    // 0x218e08: 0x70808628
    ctx->pc = 0x218e08u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x218e0c: 0x84841002
    ctx->pc = 0x218e0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4098)));
    // 0x218e10: 0x92082a
    ctx->pc = 0x218e10u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 18)));
    // 0x218e14: 0x14200002
    ctx->pc = 0x218E14u;
    {
        const bool branch_taken_0x218e14 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        ctx->pc = 0x218E18u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 256));
        if (branch_taken_0x218e14) {
            ctx->pc = 0x218E20u;
            goto label_218e20;
        }
    }
    ctx->pc = 0x218E1Cu;
    // 0x218e1c: 0x70001e28
    ctx->pc = 0x218e1cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_218e20:
    // 0x218e20: 0x838821
    ctx->pc = 0x218e20u;
    SET_GPR_U32(ctx, 17, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x218e24: 0x251082a
    ctx->pc = 0x218e24u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 17)));
    // 0x218e28: 0x10200013
    ctx->pc = 0x218E28u;
    {
        const bool branch_taken_0x218e28 = (GPR_U32(ctx, 1) == GPR_U32(ctx, 0));
        if (branch_taken_0x218e28) {
            ctx->pc = 0x218E78u;
            goto label_218e78;
        }
    }
    ctx->pc = 0x218E30u;
    // 0x218e30: 0x72002628
    ctx->pc = 0x218e30u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_218e34:
    // 0x218e34: 0xc086454
    ctx->pc = 0x218E34u;
    SET_GPR_U32(ctx, 31, 0x218E3Cu);
    ctx->pc = 0x218E38u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x219150u;
    {
        const uint32_t __entryPc = ctx->pc;
        execCore__13EntryDatClassFi_0x219150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E3Cu; }
        else if (ctx->pc != 0x218E3Cu) { ctx->pc = 0x218E3Cu; }
    }
    if (ctx->pc != 0x218E3Cu) { return; }
    ctx->pc = 0x218E3Cu;
    // 0x218e3c: 0x2403ffff
    ctx->pc = 0x218e3cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218e40: 0x5043000a
    ctx->pc = 0x218E40u;
    {
        const bool branch_taken_0x218e40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x218e40) {
            ctx->pc = 0x218E44u;
            SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
            ctx->pc = 0x218E6Cu;
            goto label_218e6c;
        }
    }
    ctx->pc = 0x218E48u;
label_218e48:
    // 0x218e48: 0xc07a720
    ctx->pc = 0x218E48u;
    SET_GPR_U32(ctx, 31, 0x218E50u);
    ctx->pc = 0x1E9C80u;
    {
        const uint32_t __entryPc = ctx->pc;
        apADXPS2_UpdateStatus__Fv_0x1e9c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E50u; }
        else if (ctx->pc != 0x218E50u) { ctx->pc = 0x218E50u; }
    }
    if (ctx->pc != 0x218E50u) { return; }
    ctx->pc = 0x218E50u;
    // 0x218e50: 0x72002628
    ctx->pc = 0x218e50u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x218e54: 0xc086454
    ctx->pc = 0x218E54u;
    SET_GPR_U32(ctx, 31, 0x218E5Cu);
    ctx->pc = 0x218E58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    ctx->pc = 0x219150u;
    {
        const uint32_t __entryPc = ctx->pc;
        execCore__13EntryDatClassFi_0x219150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218E5Cu; }
        else if (ctx->pc != 0x218E5Cu) { ctx->pc = 0x218E5Cu; }
    }
    if (ctx->pc != 0x218E5Cu) { return; }
    ctx->pc = 0x218E5Cu;
    // 0x218e5c: 0x2403ffff
    ctx->pc = 0x218e5cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x218e60: 0x1443fff9
    ctx->pc = 0x218E60u;
    {
        const bool branch_taken_0x218e60 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x218e60) {
            ctx->pc = 0x218E48u;
            goto label_218e48;
        }
    }
    ctx->pc = 0x218E68u;
    // 0x218e68: 0x26520001
    ctx->pc = 0x218e68u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 1));
label_218e6c:
    // 0x218e6c: 0x251182a
    ctx->pc = 0x218e6cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 18), GPR_S32(ctx, 17)));
    // 0x218e70: 0x1460fff0
    ctx->pc = 0x218E70u;
    {
        const bool branch_taken_0x218e70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x218E74u;
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
        if (branch_taken_0x218e70) {
            ctx->pc = 0x218E34u;
            goto label_218e34;
        }
    }
    ctx->pc = 0x218E78u;
label_218e78:
    // 0x218e78: 0x86031002
    ctx->pc = 0x218e78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4098)));
    // 0x218e7c: 0xa6031000
    ctx->pc = 0x218e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4096), (uint16_t)GPR_U32(ctx, 3));
    // 0x218e80: 0x7bbf0030
    ctx->pc = 0x218e80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218e84: 0x7bb20020
    ctx->pc = 0x218e84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x218e88: 0x7bb10010
    ctx->pc = 0x218e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x218e8c: 0x7bb00000
    ctx->pc = 0x218e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218e90: 0x3e00008
    ctx->pc = 0x218E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218E94u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x218E20u: goto label_218e20;
            case 0x218E34u: goto label_218e34;
            case 0x218E48u: goto label_218e48;
            case 0x218E6Cu: goto label_218e6c;
            case 0x218E78u: goto label_218e78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x218E98u;
}
