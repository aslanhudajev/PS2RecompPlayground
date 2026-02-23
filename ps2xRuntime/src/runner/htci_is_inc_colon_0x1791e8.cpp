#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: htci_is_inc_colon
// Address: 0x1791e8 - 0x17924c
void htci_is_inc_colon_0x1791e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("htci_is_inc_colon");


    ctx->pc = 0x1791e8u;

    // 0x1791e8: 0x27bdffe0
    ctx->pc = 0x1791e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1791ec: 0xffb00000
    ctx->pc = 0x1791ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1791f0: 0xffbf0010
    ctx->pc = 0x1791f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1791f4: 0xc051554
    ctx->pc = 0x1791F4u;
    SET_GPR_U32(ctx, 31, 0x1791FCu);
    ctx->pc = 0x1791F8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1791FCu; }
        else if (ctx->pc != 0x1791FCu) { ctx->pc = 0x1791FCu; }
    }
    if (ctx->pc != 0x1791FCu) { return; }
    ctx->pc = 0x1791FCu;
    // 0x1791fc: 0x2c430011
    ctx->pc = 0x1791fcu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 2), 17));
    // 0x179200: 0x24050010
    ctx->pc = 0x179200u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x179204: 0x43280b
    ctx->pc = 0x179204u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 2));
    // 0x179208: 0x10a0000b
    ctx->pc = 0x179208u;
    {
        const bool branch_taken_0x179208 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x17920Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x179208) {
            ctx->pc = 0x179238u;
            goto label_179238;
        }
    }
    ctx->pc = 0x179210u;
    // 0x179210: 0x2406003a
    ctx->pc = 0x179210u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 58));
    // 0x179214: 0x2041021
    ctx->pc = 0x179214u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_179218:
    // 0x179218: 0x80430000
    ctx->pc = 0x179218u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17921c: 0x54660003
    ctx->pc = 0x17921Cu;
    {
        const bool branch_taken_0x17921c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 6));
        if (branch_taken_0x17921c) {
            ctx->pc = 0x179220u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x17922Cu;
            goto label_17922c;
        }
    }
    ctx->pc = 0x179224u;
    // 0x179224: 0x10000005
    ctx->pc = 0x179224u;
    {
        const bool branch_taken_0x179224 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x179228u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x179224) {
            ctx->pc = 0x17923Cu;
            goto label_17923c;
        }
    }
    ctx->pc = 0x17922Cu;
label_17922c:
    // 0x17922c: 0x85102b
    ctx->pc = 0x17922cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x179230: 0x1440fff9
    ctx->pc = 0x179230u;
    {
        const bool branch_taken_0x179230 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x179234u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        if (branch_taken_0x179230) {
            ctx->pc = 0x179218u;
            goto label_179218;
        }
    }
    ctx->pc = 0x179238u;
label_179238:
    // 0x179238: 0x102d
    ctx->pc = 0x179238u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17923c:
    // 0x17923c: 0xdfbf0010
    ctx->pc = 0x17923cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179240: 0xdfb00000
    ctx->pc = 0x179240u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179244: 0x3e00008
    ctx->pc = 0x179244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179248u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179218u: goto label_179218;
            case 0x17922Cu: goto label_17922c;
            case 0x179238u: goto label_179238;
            case 0x17923Cu: goto label_17923c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17924Cu;
}
