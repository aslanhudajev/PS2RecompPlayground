#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTMF_CreateCvfsRt
// Address: 0x170700 - 0x1707ac
void ADXSTMF_CreateCvfsRt_0x170700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTMF_CreateCvfsRt");


    ctx->pc = 0x170700u;

    // 0x170700: 0x27bdffe0
    ctx->pc = 0x170700u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170704: 0xa0582d
    ctx->pc = 0x170704u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170708: 0xffb00000
    ctx->pc = 0x170708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17070c: 0x80502d
    ctx->pc = 0x17070cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170710: 0x8f898210
    ctx->pc = 0x170710u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 28), 4294935056)));
    // 0x170714: 0xc0602d
    ctx->pc = 0x170714u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170718: 0xffbf0010
    ctx->pc = 0x170718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17071c: 0xe0402d
    ctx->pc = 0x17071cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170720: 0x282d
    ctx->pc = 0x170720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170724: 0x19200014
    ctx->pc = 0x170724u;
    {
        const bool branch_taken_0x170724 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x170728u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170724) {
            ctx->pc = 0x170778u;
            goto label_170778;
        }
    }
    ctx->pc = 0x17072Cu;
    // 0x17072c: 0x8f82820c
    ctx->pc = 0x17072cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294935052)));
    // 0x170730: 0x3c030023
    ctx->pc = 0x170730u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x170734: 0x24637bc0
    ctx->pc = 0x170734u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 31680));
    // 0x170738: 0x21180
    ctx->pc = 0x170738u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 6));
    // 0x17073c: 0x438021
    ctx->pc = 0x17073cu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170740: 0x82040000
    ctx->pc = 0x170740u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x170744: 0x1080000c
    ctx->pc = 0x170744u;
    {
        const bool branch_taken_0x170744 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x170744) {
            ctx->pc = 0x170778u;
            goto label_170778;
        }
    }
    ctx->pc = 0x17074Cu;
    // 0x17074c: 0x120302d
    ctx->pc = 0x17074cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170750: 0x200202d
    ctx->pc = 0x170750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170754: 0x200182d
    ctx->pc = 0x170754u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170758:
    // 0x170758: 0x24a50001
    ctx->pc = 0x170758u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x17075c: 0x24840040
    ctx->pc = 0x17075cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 64));
    // 0x170760: 0xa6102a
    ctx->pc = 0x170760u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 6)));
    // 0x170764: 0x10400004
    ctx->pc = 0x170764u;
    {
        const bool branch_taken_0x170764 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x170768u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 64));
        if (branch_taken_0x170764) {
            ctx->pc = 0x170778u;
            goto label_170778;
        }
    }
    ctx->pc = 0x17076Cu;
    // 0x17076c: 0x80820000
    ctx->pc = 0x17076cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x170770: 0x1440fff9
    ctx->pc = 0x170770u;
    {
        const bool branch_taken_0x170770 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x170774u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170770) {
            ctx->pc = 0x170758u;
            goto label_170758;
        }
    }
    ctx->pc = 0x170778u;
label_170778:
    // 0x170778: 0x14a90003
    ctx->pc = 0x170778u;
    {
        const bool branch_taken_0x170778 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 9));
        ctx->pc = 0x17077Cu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170778) {
            ctx->pc = 0x170788u;
            goto label_170788;
        }
    }
    ctx->pc = 0x170780u;
    // 0x170780: 0x10000006
    ctx->pc = 0x170780u;
    {
        const bool branch_taken_0x170780 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170784u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170780) {
            ctx->pc = 0x17079Cu;
            goto label_17079c;
        }
    }
    ctx->pc = 0x170788u;
label_170788:
    // 0x170788: 0x160302d
    ctx->pc = 0x170788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17078c: 0x180382d
    ctx->pc = 0x17078cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170790: 0xc05c1ac
    ctx->pc = 0x170790u;
    SET_GPR_U32(ctx, 31, 0x170798u);
    ctx->pc = 0x170794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1706B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTMF_SetupHandleMember_0x1706b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170798u; }
        else if (ctx->pc != 0x170798u) { ctx->pc = 0x170798u; }
    }
    if (ctx->pc != 0x170798u) { return; }
    ctx->pc = 0x170798u;
    // 0x170798: 0x200102d
    ctx->pc = 0x170798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17079c:
    // 0x17079c: 0xdfbf0010
    ctx->pc = 0x17079cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1707a0: 0xdfb00000
    ctx->pc = 0x1707a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1707a4: 0x3e00008
    ctx->pc = 0x1707A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1707A8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170758u: goto label_170758;
            case 0x170778u: goto label_170778;
            case 0x170788u: goto label_170788;
            case 0x17079Cu: goto label_17079c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1707ACu;
}
