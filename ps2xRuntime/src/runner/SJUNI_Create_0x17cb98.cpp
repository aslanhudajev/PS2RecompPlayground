#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SJUNI_Create
// Address: 0x17cb98 - 0x17cc6c
void SJUNI_Create_0x17cb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SJUNI_Create");


    ctx->pc = 0x17cb98u;

    // 0x17cb98: 0x27bdffe0
    ctx->pc = 0x17cb98u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17cb9c: 0x3c070024
    ctx->pc = 0x17cb9cu;
    SET_GPR_U32(ctx, 7, ((uint32_t)36 << 16));
    // 0x17cba0: 0xffbf0010
    ctx->pc = 0x17cba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17cba4: 0x24e3fd60
    ctx->pc = 0x17cba4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 7), 4294966624));
    // 0x17cba8: 0xffb00000
    ctx->pc = 0x17cba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17cbac: 0x80402d
    ctx->pc = 0x17cbacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbb0: 0xa0482d
    ctx->pc = 0x17cbb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cbb4: 0x80620004
    ctx->pc = 0x17cbb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17cbb8: 0x10400009
    ctx->pc = 0x17CBB8u;
    {
        const bool branch_taken_0x17cbb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CBBCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17cbb8) {
            ctx->pc = 0x17CBE0u;
            goto label_17cbe0;
        }
    }
    ctx->pc = 0x17CBC0u;
    // 0x17cbc0: 0x24630004
    ctx->pc = 0x17cbc0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x17cbc4: 0x24840001
    ctx->pc = 0x17cbc4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_17cbc8:
    // 0x17cbc8: 0x28820040
    ctx->pc = 0x17cbc8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), 64));
    // 0x17cbcc: 0x10400004
    ctx->pc = 0x17CBCCu;
    {
        const bool branch_taken_0x17cbcc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CBD0u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 48));
        if (branch_taken_0x17cbcc) {
            ctx->pc = 0x17CBE0u;
            goto label_17cbe0;
        }
    }
    ctx->pc = 0x17CBD4u;
    // 0x17cbd4: 0x80620000
    ctx->pc = 0x17cbd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17cbd8: 0x5440fffb
    ctx->pc = 0x17CBD8u;
    {
        const bool branch_taken_0x17cbd8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x17cbd8) {
            ctx->pc = 0x17CBDCu;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x17CBC8u;
            goto label_17cbc8;
        }
    }
    ctx->pc = 0x17CBE0u;
label_17cbe0:
    // 0x17cbe0: 0x24020040
    ctx->pc = 0x17cbe0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 64));
    // 0x17cbe4: 0x14820003
    ctx->pc = 0x17CBE4u;
    {
        const bool branch_taken_0x17cbe4 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        ctx->pc = 0x17CBE8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 48));
        if (branch_taken_0x17cbe4) {
            ctx->pc = 0x17CBF4u;
            goto label_17cbf4;
        }
    }
    ctx->pc = 0x17CBECu;
    // 0x17cbec: 0x1000001b
    ctx->pc = 0x17CBECu;
    {
        const bool branch_taken_0x17cbec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17CBF0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17cbec) {
            ctx->pc = 0x17CC5Cu;
            goto label_17cc5c;
        }
    }
    ctx->pc = 0x17CBF4u;
label_17cbf4:
    // 0x17cbf4: 0x2402ffff
    ctx->pc = 0x17cbf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17cbf8: 0x908018
    ctx->pc = 0x17cbf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)(uint32_t)result); }
    // 0x17cbfc: 0x46102a
    ctx->pc = 0x17cbfcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 6)));
    // 0x17cc00: 0x24c5000f
    ctx->pc = 0x17cc00u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 15));
    // 0x17cc04: 0x24e4fd60
    ctx->pc = 0x17cc04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 7), 4294966624));
    // 0x17cc08: 0xc2280b
    ctx->pc = 0x17cc08u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 6));
    // 0x17cc0c: 0x3c030024
    ctx->pc = 0x17cc0cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)36 << 16));
    // 0x17cc10: 0x3c06002c
    ctx->pc = 0x17cc10u;
    SET_GPR_U32(ctx, 6, ((uint32_t)44 << 16));
    // 0x17cc14: 0x3c070018
    ctx->pc = 0x17cc14u;
    SET_GPR_U32(ctx, 7, ((uint32_t)24 << 16));
    // 0x17cc18: 0x2048021
    ctx->pc = 0x17cc18u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x17cc1c: 0x2463fd30
    ctx->pc = 0x17cc1cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294966576));
    // 0x17cc20: 0x24c6bfa0
    ctx->pc = 0x17cc20u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294950816));
    // 0x17cc24: 0x52903
    ctx->pc = 0x17cc24u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x17cc28: 0x24e7cb08
    ctx->pc = 0x17cc28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294953736));
    // 0x17cc2c: 0x24020001
    ctx->pc = 0x17cc2cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17cc30: 0xa2020004
    ctx->pc = 0x17cc30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x17cc34: 0x200202d
    ctx->pc = 0x17cc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17cc38: 0xae030000
    ctx->pc = 0x17cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x17cc3c: 0xa2080005
    ctx->pc = 0x17cc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 8));
    // 0x17cc40: 0xae060008
    ctx->pc = 0x17cc40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x17cc44: 0xae09000c
    ctx->pc = 0x17cc44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 9));
    // 0x17cc48: 0xae050010
    ctx->pc = 0x17cc48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x17cc4c: 0xae070028
    ctx->pc = 0x17cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 7));
    // 0x17cc50: 0xc05f330
    ctx->pc = 0x17CC50u;
    SET_GPR_U32(ctx, 31, 0x17CC58u);
    ctx->pc = 0x17CC54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 16));
    ctx->pc = 0x17CCC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SJUNI_Reset_0x17ccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17CC58u; }
        else if (ctx->pc != 0x17CC58u) { ctx->pc = 0x17CC58u; }
    }
    if (ctx->pc != 0x17CC58u) { return; }
    ctx->pc = 0x17CC58u;
    // 0x17cc58: 0x200102d
    ctx->pc = 0x17cc58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17cc5c:
    // 0x17cc5c: 0xdfbf0010
    ctx->pc = 0x17cc5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17cc60: 0xdfb00000
    ctx->pc = 0x17cc60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17cc64: 0x3e00008
    ctx->pc = 0x17CC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CC68u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17CBC8u: goto label_17cbc8;
            case 0x17CBE0u: goto label_17cbe0;
            case 0x17CBF4u: goto label_17cbf4;
            case 0x17CC5Cu: goto label_17cc5c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17CC6Cu;
}
