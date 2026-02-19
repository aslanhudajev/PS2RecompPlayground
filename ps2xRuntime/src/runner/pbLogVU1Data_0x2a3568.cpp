#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbLogVU1Data
// Address: 0x2a3568 - 0x2a3650
void pbLogVU1Data_0x2a3568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a3568u;

    // 0x2a3568: 0x27bdffb0
    ctx->pc = 0x2a3568u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a356c: 0xffbf0040
    ctx->pc = 0x2a356cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a3570: 0xffb30030
    ctx->pc = 0x2a3570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a3574: 0xffb20020
    ctx->pc = 0x2a3574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a3578: 0xffb10010
    ctx->pc = 0x2a3578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a357c: 0xffb00000
    ctx->pc = 0x2a357cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3580: 0xa0882d
    ctx->pc = 0x2a3580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3584: 0x3c020036
    ctx->pc = 0x2a3584u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x2a3588: 0x8c53dee0
    ctx->pc = 0x2a3588u;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 2), 4294958816)));
    // 0x2a358c: 0x2a221389
    ctx->pc = 0x2a358cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 5001));
    // 0x2a3590: 0x14400005
    ctx->pc = 0x2A3590u;
    {
        const bool branch_taken_0x2a3590 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A3594u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2a3590) {
            ctx->pc = 0x2A35A8u;
            goto label_2a35a8;
        }
    }
    ctx->pc = 0x2A3598u;
    // 0x2a3598: 0x111080
    ctx->pc = 0x2a3598u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a359c: 0x2442b1e0
    ctx->pc = 0x2a359cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x2a35a0: 0x2429021
    ctx->pc = 0x2a35a0u;
    SET_GPR_U32(ctx, 18, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2a35a4: 0x24111388
    ctx->pc = 0x2a35a4u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 5000));
label_2a35a8:
    // 0x2a35a8: 0x26300003
    ctx->pc = 0x2a35a8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 17), 3));
    // 0x2a35ac: 0x3c02ffff
    ctx->pc = 0x2a35acu;
    SET_GPR_U32(ctx, 2, ((uint32_t)65535 << 16));
    // 0x2a35b0: 0x3442fffc
    ctx->pc = 0x2a35b0u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 65532));
    // 0x2a35b4: 0x2028024
    ctx->pc = 0x2a35b4u;
    SET_GPR_U32(ctx, 16, AND32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a35b8: 0xc0a8d2e
    ctx->pc = 0x2A35B8u;
    SET_GPR_U32(ctx, 31, 0x2A35C0u);
    ctx->pc = 0x2A35BCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A34B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        ipbLogVu1GetPkt_0x2a34b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A35C0u; }
    }
    if (ctx->pc != 0x2A35C0u) { return; }
    ctx->pc = 0x2A35C0u;
    // 0x2a35c0: 0x40182d
    ctx->pc = 0x2a35c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a35c4:
    // 0x2a35c4: 0x230102b
    ctx->pc = 0x2a35c4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x2a35c8: 0x1040000b
    ctx->pc = 0x2A35C8u;
    {
        const bool branch_taken_0x2a35c8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2a35c8) {
            ctx->pc = 0x2A35F8u;
            goto label_2a35f8;
        }
    }
    ctx->pc = 0x2A35D0u;
    // 0x2a35d0: 0xac600000
    ctx->pc = 0x2a35d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2a35d4: 0x24630004
    ctx->pc = 0x2a35d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a35d8: 0x8e64002c
    ctx->pc = 0x2a35d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x2a35dc: 0x8c820024
    ctx->pc = 0x2a35dcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2a35e0: 0x62102b
    ctx->pc = 0x2a35e0u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a35e4: 0x1440fff7
    ctx->pc = 0x2A35E4u;
    {
        const bool branch_taken_0x2a35e4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A35E8u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x2a35e4) {
            ctx->pc = 0x2A35C4u;
            goto label_2a35c4;
        }
    }
    ctx->pc = 0x2A35ECu;
    // 0x2a35ec: 0x1000fff5
    ctx->pc = 0x2A35ECu;
    {
        const bool branch_taken_0x2a35ec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A35F0u;
        SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
        if (branch_taken_0x2a35ec) {
            ctx->pc = 0x2A35C4u;
            goto label_2a35c4;
        }
    }
    ctx->pc = 0x2A35F4u;
    // 0x2a35f4: 0x0
    ctx->pc = 0x2a35f4u;
    // NOP
label_2a35f8:
    // 0x2a35f8: 0x1200000f
    ctx->pc = 0x2A35F8u;
    {
        const bool branch_taken_0x2a35f8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A35FCu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        if (branch_taken_0x2a35f8) {
            ctx->pc = 0x2A3638u;
            goto label_2a3638;
        }
    }
    ctx->pc = 0x2A3600u;
    // 0x2a3600: 0x8e420000
    ctx->pc = 0x2a3600u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a3604: 0x0
    ctx->pc = 0x2a3604u;
    // NOP
label_2a3608:
    // 0x2a3608: 0xac620000
    ctx->pc = 0x2a3608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2a360c: 0x26520004
    ctx->pc = 0x2a360cu;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 18), 4));
    // 0x2a3610: 0x24630004
    ctx->pc = 0x2a3610u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4));
    // 0x2a3614: 0x8e64002c
    ctx->pc = 0x2a3614u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x2a3618: 0x8c820024
    ctx->pc = 0x2a3618u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2a361c: 0x62102b
    ctx->pc = 0x2a361cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a3620: 0x14400002
    ctx->pc = 0x2A3620u;
    {
        const bool branch_taken_0x2a3620 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2A3624u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
        if (branch_taken_0x2a3620) {
            ctx->pc = 0x2A362Cu;
            goto label_2a362c;
        }
    }
    ctx->pc = 0x2A3628u;
    // 0x2a3628: 0x8c83001c
    ctx->pc = 0x2a3628u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_2a362c:
    // 0x2a362c: 0x5600fff6
    ctx->pc = 0x2A362Cu;
    {
        const bool branch_taken_0x2a362c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x2a362c) {
            ctx->pc = 0x2A3630u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->pc = 0x2A3608u;
            goto label_2a3608;
        }
    }
    ctx->pc = 0x2A3634u;
    // 0x2a3634: 0xdfbf0040
    ctx->pc = 0x2a3634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a3638:
    // 0x2a3638: 0xdfb30030
    ctx->pc = 0x2a3638u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a363c: 0xdfb20020
    ctx->pc = 0x2a363cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3640: 0xdfb10010
    ctx->pc = 0x2a3640u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3644: 0xdfb00000
    ctx->pc = 0x2a3644u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3648: 0x3e00008
    ctx->pc = 0x2A3648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A364Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A35A8u: goto label_2a35a8;
            case 0x2A35C4u: goto label_2a35c4;
            case 0x2A35F8u: goto label_2a35f8;
            case 0x2A3608u: goto label_2a3608;
            case 0x2A362Cu: goto label_2a362c;
            case 0x2A3638u: goto label_2a3638;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A3650u;
}
