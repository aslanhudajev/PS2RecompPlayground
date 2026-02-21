#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: InitActions
// Address: 0x2778e0 - 0x2779a4
void InitActions_0x2778e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2778e0u;

    // 0x2778e0: 0x27bdffa0
    ctx->pc = 0x2778e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2778e4: 0xffbf0050
    ctx->pc = 0x2778e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2778e8: 0xffb40040
    ctx->pc = 0x2778e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2778ec: 0xffb30030
    ctx->pc = 0x2778ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2778f0: 0xffb20020
    ctx->pc = 0x2778f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2778f4: 0xffb10010
    ctx->pc = 0x2778f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2778f8: 0xffb00000
    ctx->pc = 0x2778f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2778fc: 0x80882d
    ctx->pc = 0x2778fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277900: 0xa0982d
    ctx->pc = 0x277900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277904: 0xc0902d
    ctx->pc = 0x277904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277908: 0x8e420000
    ctx->pc = 0x277908u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x27790c: 0x1040001d
    ctx->pc = 0x27790Cu;
    {
        const bool branch_taken_0x27790c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x277910u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x27790c) {
            ctx->pc = 0x277984u;
            goto label_277984;
        }
    }
    ctx->pc = 0x277914u;
    // 0x277914: 0x24140030
    ctx->pc = 0x277914u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 48));
label_277918:
    // 0x277918: 0x12200007
    ctx->pc = 0x277918u;
    {
        const bool branch_taken_0x277918 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x27791Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x277918) {
            ctx->pc = 0x277938u;
            goto label_277938;
        }
    }
    ctx->pc = 0x277920u;
    // 0x277920: 0x521021
    ctx->pc = 0x277920u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x277924: 0x220202d
    ctx->pc = 0x277924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277928: 0xc084bb6
    ctx->pc = 0x277928u;
    SET_GPR_U32(ctx, 31, 0x277930u);
    ctx->pc = 0x27792Cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x212ED8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AtreeFindSeq_0x212ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x277930u; }
    }
    if (ctx->pc != 0x277930u) { return; }
    ctx->pc = 0x277930u;
    // 0x277930: 0x10000002
    ctx->pc = 0x277930u;
    {
        const bool branch_taken_0x277930 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x277934u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x277930) {
            ctx->pc = 0x27793Cu;
            goto label_27793c;
        }
    }
    ctx->pc = 0x277938u;
label_277938:
    // 0x277938: 0x2404ffff
    ctx->pc = 0x277938u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
label_27793c:
    // 0x27793c: 0x1010c0
    ctx->pc = 0x27793cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 3));
    // 0x277940: 0x532821
    ctx->pc = 0x277940u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x277944: 0x4800007
    ctx->pc = 0x277944u;
    {
        const bool branch_taken_0x277944 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x277948u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x277944) {
            ctx->pc = 0x277964u;
            goto label_277964;
        }
    }
    ctx->pc = 0x27794Cu;
    // 0x27794c: 0x8e230004
    ctx->pc = 0x27794cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x277950: 0x941018
    ctx->pc = 0x277950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x277954: 0x431021
    ctx->pc = 0x277954u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277958: 0x84420020
    ctx->pc = 0x277958u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x27795c: 0x10000003
    ctx->pc = 0x27795Cu;
    {
        const bool branch_taken_0x27795c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x277960u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        if (branch_taken_0x27795c) {
            ctx->pc = 0x27796Cu;
            goto label_27796c;
        }
    }
    ctx->pc = 0x277964u;
label_277964:
    // 0x277964: 0x531021
    ctx->pc = 0x277964u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x277968: 0xac400004
    ctx->pc = 0x277968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_27796c:
    // 0x27796c: 0x26100001
    ctx->pc = 0x27796cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x277970: 0x101080
    ctx->pc = 0x277970u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x277974: 0x521021
    ctx->pc = 0x277974u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x277978: 0x8c420000
    ctx->pc = 0x277978u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27797c: 0x1440ffe6
    ctx->pc = 0x27797Cu;
    {
        const bool branch_taken_0x27797c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x27797c) {
            ctx->pc = 0x277918u;
            goto label_277918;
        }
    }
    ctx->pc = 0x277984u;
label_277984:
    // 0x277984: 0xdfbf0050
    ctx->pc = 0x277984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277988: 0xdfb40040
    ctx->pc = 0x277988u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27798c: 0xdfb30030
    ctx->pc = 0x27798cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x277990: 0xdfb20020
    ctx->pc = 0x277990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277994: 0xdfb10010
    ctx->pc = 0x277994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277998: 0xdfb00000
    ctx->pc = 0x277998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27799c: 0x3e00008
    ctx->pc = 0x27799Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2779A0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x277918u: goto label_277918;
            case 0x277938u: goto label_277938;
            case 0x27793Cu: goto label_27793c;
            case 0x277964u: goto label_277964;
            case 0x27796Cu: goto label_27796c;
            case 0x277984u: goto label_277984;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2779A4u;
}
