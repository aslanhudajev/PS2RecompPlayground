#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: getNewDirFrame
// Address: 0x2cccb0 - 0x2ccd38
void getNewDirFrame_0x2cccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2cccb0u;

    // 0x2cccb0: 0x27bdffb0
    ctx->pc = 0x2cccb0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cccb4: 0xffbf0040
    ctx->pc = 0x2cccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cccb8: 0xffb30030
    ctx->pc = 0x2cccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2cccbc: 0xffb20020
    ctx->pc = 0x2cccbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2cccc0: 0xffb10010
    ctx->pc = 0x2cccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2cccc4: 0xffb00000
    ctx->pc = 0x2cccc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cccc8: 0x80882d
    ctx->pc = 0x2cccc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccccc: 0x3c02003a
    ctx->pc = 0x2cccccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2cccd0: 0x2453aa38
    ctx->pc = 0x2cccd0u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294945336));
    // 0x2cccd4: 0x86700054
    ctx->pc = 0x2cccd4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x2cccd8: 0x601000f
    ctx->pc = 0x2CCCD8u;
    {
        const bool branch_taken_0x2cccd8 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2CCCDCu;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cccd8) {
            ctx->pc = 0x2CCD18u;
            goto label_2ccd18;
        }
    }
    ctx->pc = 0x2CCCE0u;
    // 0x2ccce0: 0x96240030
    ctx->pc = 0x2ccce0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x2ccce4: 0x2625001c
    ctx->pc = 0x2ccce4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 17), 28));
    // 0x2ccce8: 0xc0b330e
    ctx->pc = 0x2CCCE8u;
    SET_GPR_U32(ctx, 31, 0x2CCCF0u);
    ctx->pc = 0x2CCCECu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    ctx->pc = 0x2CCC38u;
    {
        const uint32_t __entryPc = ctx->pc;
        getUniqueIdx_0x2ccc38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCCF0u; }
    }
    if (ctx->pc != 0x2CCCF0u) { return; }
    ctx->pc = 0x2CCCF0u;
    // 0x2cccf0: 0x40802d
    ctx->pc = 0x2cccf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cccf4: 0x6000009
    ctx->pc = 0x2CCCF4u;
    {
        const bool branch_taken_0x2cccf4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2CCCF8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2cccf4) {
            ctx->pc = 0x2CCD1Cu;
            goto label_2ccd1c;
        }
    }
    ctx->pc = 0x2CCCFCu;
    // 0x2cccfc: 0x2406000c
    ctx->pc = 0x2cccfcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ccd00: 0x2063018
    ctx->pc = 0x2ccd00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2ccd04: 0x8e22000c
    ctx->pc = 0x2ccd04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2ccd08: 0x240282d
    ctx->pc = 0x2ccd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ccd0c: 0xc0b325e
    ctx->pc = 0x2CCD0Cu;
    SET_GPR_U32(ctx, 31, 0x2CCD14u);
    ctx->pc = 0x2CCD10u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->pc = 0x2CC978u;
    {
        const uint32_t __entryPc = ctx->pc;
        getCurrentDir_0x2cc978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CCD14u; }
    }
    if (ctx->pc != 0x2CCD14u) { return; }
    ctx->pc = 0x2CCD14u;
    // 0x2ccd14: 0xa6700054
    ctx->pc = 0x2ccd14u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 84), (uint16_t)GPR_U32(ctx, 16));
label_2ccd18:
    // 0x2ccd18: 0x200102d
    ctx->pc = 0x2ccd18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ccd1c:
    // 0x2ccd1c: 0xdfbf0040
    ctx->pc = 0x2ccd1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ccd20: 0xdfb30030
    ctx->pc = 0x2ccd20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ccd24: 0xdfb20020
    ctx->pc = 0x2ccd24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ccd28: 0xdfb10010
    ctx->pc = 0x2ccd28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ccd2c: 0xdfb00000
    ctx->pc = 0x2ccd2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ccd30: 0x3e00008
    ctx->pc = 0x2CCD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CCD34u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2CCD18u: goto label_2ccd18;
            case 0x2CCD1Cu: goto label_2ccd1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2CCD38u;
}
