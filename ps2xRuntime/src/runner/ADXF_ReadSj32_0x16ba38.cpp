#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_ReadSj32
// Address: 0x16ba38 - 0x16bae8
void ADXF_ReadSj32_0x16ba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_ReadSj32");


    ctx->pc = 0x16ba38u;

    // 0x16ba38: 0x27bdffc0
    ctx->pc = 0x16ba38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16ba3c: 0xffb20020
    ctx->pc = 0x16ba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16ba40: 0xffb10010
    ctx->pc = 0x16ba40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16ba44: 0xc0902d
    ctx->pc = 0x16ba44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba48: 0xffb00000
    ctx->pc = 0x16ba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ba4c: 0x80882d
    ctx->pc = 0x16ba4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ba50: 0xffbf0030
    ctx->pc = 0x16ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16ba54: 0x16200004
    ctx->pc = 0x16BA54u;
    {
        const bool branch_taken_0x16ba54 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x16BA58u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ba54) {
            ctx->pc = 0x16BA68u;
            goto label_16ba68;
        }
    }
    ctx->pc = 0x16BA5Cu;
    // 0x16ba5c: 0x3c04002c
    ctx->pc = 0x16ba5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16ba60: 0x10000009
    ctx->pc = 0x16BA60u;
    {
        const bool branch_taken_0x16ba60 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BA64u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939752));
        if (branch_taken_0x16ba60) {
            ctx->pc = 0x16BA88u;
            goto label_16ba88;
        }
    }
    ctx->pc = 0x16BA68u;
label_16ba68:
    // 0x16ba68: 0x6010003
    ctx->pc = 0x16BA68u;
    {
        const bool branch_taken_0x16ba68 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x16BA6Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x16ba68) {
            ctx->pc = 0x16BA78u;
            goto label_16ba78;
        }
    }
    ctx->pc = 0x16BA70u;
    // 0x16ba70: 0x10000005
    ctx->pc = 0x16BA70u;
    {
        const bool branch_taken_0x16ba70 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BA74u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939792));
        if (branch_taken_0x16ba70) {
            ctx->pc = 0x16BA88u;
            goto label_16ba88;
        }
    }
    ctx->pc = 0x16BA78u;
label_16ba78:
    // 0x16ba78: 0x56400007
    ctx->pc = 0x16BA78u;
    {
        const bool branch_taken_0x16ba78 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        if (branch_taken_0x16ba78) {
            ctx->pc = 0x16BA7Cu;
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->pc = 0x16BA98u;
            goto label_16ba98;
        }
    }
    ctx->pc = 0x16BA80u;
    // 0x16ba80: 0x3c04002c
    ctx->pc = 0x16ba80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16ba84: 0x248494c0
    ctx->pc = 0x16ba84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939840));
label_16ba88:
    // 0x16ba88: 0xc05a854
    ctx->pc = 0x16BA88u;
    SET_GPR_U32(ctx, 31, 0x16BA90u);
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BA90u; }
        else if (ctx->pc != 0x16BA90u) { ctx->pc = 0x16BA90u; }
    }
    if (ctx->pc != 0x16BA90u) { return; }
    ctx->pc = 0x16BA90u;
    // 0x16ba90: 0x1000000f
    ctx->pc = 0x16BA90u;
    {
        const bool branch_taken_0x16ba90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16BA94u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967293));
        if (branch_taken_0x16ba90) {
            ctx->pc = 0x16BAD0u;
            goto label_16bad0;
        }
    }
    ctx->pc = 0x16BA98u;
label_16ba98:
    // 0x16ba98: 0x24020002
    ctx->pc = 0x16ba98u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16ba9c: 0x1062000c
    ctx->pc = 0x16BA9Cu;
    {
        const bool branch_taken_0x16ba9c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x16BAA0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16ba9c) {
            ctx->pc = 0x16BAD0u;
            goto label_16bad0;
        }
    }
    ctx->pc = 0x16BAA4u;
    // 0x16baa4: 0xc05a4e4
    ctx->pc = 0x16BAA4u;
    SET_GPR_U32(ctx, 31, 0x16BAACu);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BAACu; }
        else if (ctx->pc != 0x16BAACu) { ctx->pc = 0x16BAACu; }
    }
    if (ctx->pc != 0x16BAACu) { return; }
    ctx->pc = 0x16BAACu;
    // 0x16baac: 0x200282d
    ctx->pc = 0x16baacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bab0: 0x240302d
    ctx->pc = 0x16bab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bab4: 0xc05ae50
    ctx->pc = 0x16BAB4u;
    SET_GPR_U32(ctx, 31, 0x16BABCu);
    ctx->pc = 0x16BAB8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B940u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_read_sj32_0x16b940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BABCu; }
        else if (ctx->pc != 0x16BABCu) { ctx->pc = 0x16BABCu; }
    }
    if (ctx->pc != 0x16BABCu) { return; }
    ctx->pc = 0x16BABCu;
    // 0x16babc: 0x24030001
    ctx->pc = 0x16babcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bac0: 0x40802d
    ctx->pc = 0x16bac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16bac4: 0xc05a4f0
    ctx->pc = 0x16BAC4u;
    SET_GPR_U32(ctx, 31, 0x16BACCu);
    ctx->pc = 0x16BAC8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16BACCu; }
        else if (ctx->pc != 0x16BACCu) { ctx->pc = 0x16BACCu; }
    }
    if (ctx->pc != 0x16BACCu) { return; }
    ctx->pc = 0x16BACCu;
    // 0x16bacc: 0x200102d
    ctx->pc = 0x16baccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16bad0:
    // 0x16bad0: 0xdfbf0030
    ctx->pc = 0x16bad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16bad4: 0xdfb20020
    ctx->pc = 0x16bad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16bad8: 0xdfb10010
    ctx->pc = 0x16bad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16badc: 0xdfb00000
    ctx->pc = 0x16badcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bae0: 0x3e00008
    ctx->pc = 0x16BAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BAE4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16BA68u: goto label_16ba68;
            case 0x16BA78u: goto label_16ba78;
            case 0x16BA88u: goto label_16ba88;
            case 0x16BA98u: goto label_16ba98;
            case 0x16BAD0u: goto label_16bad0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16BAE8u;
}
