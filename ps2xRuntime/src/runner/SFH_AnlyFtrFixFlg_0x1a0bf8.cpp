#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFH_AnlyFtrFixFlg
// Address: 0x1a0bf8 - 0x1a0c64
void SFH_AnlyFtrFixFlg_0x1a0bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFH_AnlyFtrFixFlg");


    ctx->pc = 0x1a0bf8u;

    // 0x1a0bf8: 0x27bdffc0
    ctx->pc = 0x1a0bf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a0bfc: 0xffb10010
    ctx->pc = 0x1a0bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1a0c00: 0xffb20020
    ctx->pc = 0x1a0c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1a0c04: 0x30b100ff
    ctx->pc = 0x1a0c04u;
    SET_GPR_U32(ctx, 17, AND32(GPR_U32(ctx, 5), 255));
    // 0x1a0c08: 0xffb00000
    ctx->pc = 0x1a0c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a0c0c: 0xc0902d
    ctx->pc = 0x1a0c0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c10: 0xffbf0030
    ctx->pc = 0x1a0c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a0c14: 0xc0681d0
    ctx->pc = 0x1A0C14u;
    SET_GPR_U32(ctx, 31, 0x1A0C1Cu);
    ctx->pc = 0x1A0C18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0740u;
    {
        const uint32_t __entryPc = ctx->pc;
        getElemInfPtr_0x1a0740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C1Cu; }
        else if (ctx->pc != 0x1A0C1Cu) { ctx->pc = 0x1A0C1Cu; }
    }
    if (ctx->pc != 0x1A0C1Cu) { return; }
    ctx->pc = 0x1A0C1Cu;
    // 0x1a0c1c: 0x40802d
    ctx->pc = 0x1a0c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0c20: 0x12000005
    ctx->pc = 0x1A0C20u;
    {
        const bool branch_taken_0x1a0c20 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0C24u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0c20) {
            ctx->pc = 0x1A0C38u;
            goto label_1a0c38;
        }
    }
    ctx->pc = 0x1A0C28u;
    // 0x1a0c28: 0xc0683b8
    ctx->pc = 0x1A0C28u;
    SET_GPR_U32(ctx, 31, 0x1A0C30u);
    ctx->pc = 0x1A0C2Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1A0EE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        isEnableVidFtr_0x1a0ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A0C30u; }
        else if (ctx->pc != 0x1A0C30u) { ctx->pc = 0x1A0C30u; }
    }
    if (ctx->pc != 0x1A0C30u) { return; }
    ctx->pc = 0x1A0C30u;
    // 0x1a0c30: 0x54400003
    ctx->pc = 0x1A0C30u;
    {
        const bool branch_taken_0x1a0c30 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1a0c30) {
            ctx->pc = 0x1A0C34u;
            SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
            ctx->pc = 0x1A0C40u;
            goto label_1a0c40;
        }
    }
    ctx->pc = 0x1A0C38u;
label_1a0c38:
    // 0x1a0c38: 0x10000004
    ctx->pc = 0x1A0C38u;
    {
        const bool branch_taken_0x1a0c38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1A0C3Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1a0c38) {
            ctx->pc = 0x1A0C4Cu;
            goto label_1a0c4c;
        }
    }
    ctx->pc = 0x1A0C40u;
label_1a0c40:
    // 0x1a0c40: 0x24020001
    ctx->pc = 0x1a0c40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0c44: 0x30630001
    ctx->pc = 0x1a0c44u;
    SET_GPR_U32(ctx, 3, AND32(GPR_U32(ctx, 3), 1));
    // 0x1a0c48: 0xae430000
    ctx->pc = 0x1a0c48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a0c4c:
    // 0x1a0c4c: 0xdfbf0030
    ctx->pc = 0x1a0c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a0c50: 0xdfb20020
    ctx->pc = 0x1a0c50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a0c54: 0xdfb10010
    ctx->pc = 0x1a0c54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0c58: 0xdfb00000
    ctx->pc = 0x1a0c58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0c5c: 0x3e00008
    ctx->pc = 0x1A0C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0C60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A0C38u: goto label_1a0c38;
            case 0x1A0C40u: goto label_1a0c40;
            case 0x1A0C4Cu: goto label_1a0c4c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A0C64u;
}
