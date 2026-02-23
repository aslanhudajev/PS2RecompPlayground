#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htCiExecServer
// Address: 0x1789a0 - 0x178a20
void htCiExecServer_0x1789a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htCiExecServer");


    ctx->pc = 0x1789a0u;

    // 0x1789a0: 0x27bdffc0
    ctx->pc = 0x1789a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1789a4: 0xffbf0030
    ctx->pc = 0x1789a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1789a8: 0xffb20020
    ctx->pc = 0x1789a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1789ac: 0xffb10010
    ctx->pc = 0x1789acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1789b0: 0xc05d7f0
    ctx->pc = 0x1789B0u;
    SET_GPR_U32(ctx, 31, 0x1789B8u);
    ctx->pc = 0x1789B4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x175FC0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SRD_GetStat_0x175fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1789B8u; }
        else if (ctx->pc != 0x1789B8u) { ctx->pc = 0x1789B8u; }
    }
    if (ctx->pc != 0x1789B8u) { return; }
    ctx->pc = 0x1789B8u;
    // 0x1789b8: 0x40182d
    ctx->pc = 0x1789b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1789bc: 0x10600005
    ctx->pc = 0x1789BCu;
    {
        const bool branch_taken_0x1789bc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        ctx->pc = 0x1789C0u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
        if (branch_taken_0x1789bc) {
            ctx->pc = 0x1789D4u;
            goto label_1789d4;
        }
    }
    ctx->pc = 0x1789C4u;
    // 0x1789c4: 0x10620003
    ctx->pc = 0x1789C4u;
    {
        const bool branch_taken_0x1789c4 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x1789C8u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
        if (branch_taken_0x1789c4) {
            ctx->pc = 0x1789D4u;
            goto label_1789d4;
        }
    }
    ctx->pc = 0x1789CCu;
    // 0x1789cc: 0x1462000f
    ctx->pc = 0x1789CCu;
    {
        const bool branch_taken_0x1789cc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x1789D0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1789cc) {
            ctx->pc = 0x178A0Cu;
            goto label_178a0c;
        }
    }
    ctx->pc = 0x1789D4u;
label_1789d4:
    // 0x1789d4: 0x3c020024
    ctx->pc = 0x1789d4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1789d8: 0x24120001
    ctx->pc = 0x1789d8u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1789dc: 0x2450a120
    ctx->pc = 0x1789dcu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 4294943008));
    // 0x1789e0: 0x261101d4
    ctx->pc = 0x1789e0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 16), 468));
    // 0x1789e4: 0x82020000
    ctx->pc = 0x1789e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1789e8:
    // 0x1789e8: 0x54520004
    ctx->pc = 0x1789E8u;
    {
        const bool branch_taken_0x1789e8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 18));
        if (branch_taken_0x1789e8) {
            ctx->pc = 0x1789ECu;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 36));
            ctx->pc = 0x1789FCu;
            goto label_1789fc;
        }
    }
    ctx->pc = 0x1789F0u;
    // 0x1789f0: 0xc05e224
    ctx->pc = 0x1789F0u;
    SET_GPR_U32(ctx, 31, 0x1789F8u);
    ctx->pc = 0x1789F4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x178890u;
    {
        const uint32_t __entryPc = ctx->pc;
        htCiExecHndl_0x178890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1789F8u; }
        else if (ctx->pc != 0x1789F8u) { ctx->pc = 0x1789F8u; }
    }
    if (ctx->pc != 0x1789F8u) { return; }
    ctx->pc = 0x1789F8u;
    // 0x1789f8: 0x26100024
    ctx->pc = 0x1789f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 36));
label_1789fc:
    // 0x1789fc: 0x211102a
    ctx->pc = 0x1789fcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 17)));
    // 0x178a00: 0x5440fff9
    ctx->pc = 0x178A00u;
    {
        const bool branch_taken_0x178a00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x178a00) {
            ctx->pc = 0x178A04u;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x1789E8u;
            goto label_1789e8;
        }
    }
    ctx->pc = 0x178A08u;
    // 0x178a08: 0xdfbf0030
    ctx->pc = 0x178a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_178a0c:
    // 0x178a0c: 0xdfb20020
    ctx->pc = 0x178a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178a10: 0xdfb10010
    ctx->pc = 0x178a10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178a14: 0xdfb00000
    ctx->pc = 0x178a14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178a18: 0x3e00008
    ctx->pc = 0x178A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178A1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1789D4u: goto label_1789d4;
            case 0x1789E8u: goto label_1789e8;
            case 0x1789FCu: goto label_1789fc;
            case 0x178A0Cu: goto label_178a0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x178A20u;
}
