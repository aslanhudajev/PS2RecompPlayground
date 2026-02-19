#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _type2id
// Address: 0x2ecdc8 - 0x2ece50
void _type2id_0x2ecdc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ecdc8u;

    // 0x2ecdc8: 0xa0382d
    ctx->pc = 0x2ecdc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecdcc: 0x27bdfff0
    ctx->pc = 0x2ecdccu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ecdd0: 0x182d
    ctx->pc = 0x2ecdd0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ecdd4: 0x2c82000a
    ctx->pc = 0x2ecdd4u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 10));
    // 0x2ecdd8: 0x1040001a
    ctx->pc = 0x2ECDD8u;
    {
        const bool branch_taken_0x2ecdd8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECDDCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2ecdd8) {
            ctx->pc = 0x2ECE44u;
            goto label_2ece44;
        }
    }
    ctx->pc = 0x2ECDE0u;
    // 0x2ecde0: 0x3c08003a
    ctx->pc = 0x2ecde0u;
    SET_GPR_U32(ctx, 8, ((uint32_t)58 << 16));
    // 0x2ecde4: 0x43100
    ctx->pc = 0x2ecde4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 4), 4));
    // 0x2ecde8: 0x25022f58
    ctx->pc = 0x2ecde8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 12120));
    // 0x2ecdec: 0x3404ffff
    ctx->pc = 0x2ecdecu;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65535));
    // 0x2ecdf0: 0x42638
    ctx->pc = 0x2ecdf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x2ecdf4: 0x461021
    ctx->pc = 0x2ecdf4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ecdf8: 0xdc430008
    ctx->pc = 0x2ecdf8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2ecdfc: 0x10640009
    ctx->pc = 0x2ECDFCu;
    {
        const bool branch_taken_0x2ecdfc = (GPR_U32(ctx, 3) == GPR_U32(ctx, 4));
        ctx->pc = 0x2ECE00u;
        SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x2ecdfc) {
            ctx->pc = 0x2ECE24u;
            goto label_2ece24;
        }
    }
    ctx->pc = 0x2ECE04u;
    // 0x2ece04: 0x5440000a
    ctx->pc = 0x2ECE04u;
    {
        const bool branch_taken_0x2ece04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2ece04) {
            ctx->pc = 0x2ECE08u;
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x2ECE30u;
            goto label_2ece30;
        }
    }
    ctx->pc = 0x2ECE0Cu;
    // 0x2ece0c: 0x3402ff00
    ctx->pc = 0x2ece0cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 65280));
    // 0x2ece10: 0x21638
    ctx->pc = 0x2ece10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x2ece14: 0x10620005
    ctx->pc = 0x2ECE14u;
    {
        const bool branch_taken_0x2ece14 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2ECE18u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 12120));
        if (branch_taken_0x2ece14) {
            ctx->pc = 0x2ECE2Cu;
            goto label_2ece2c;
        }
    }
    ctx->pc = 0x2ECE1Cu;
    // 0x2ece1c: 0x10000006
    ctx->pc = 0x2ECE1Cu;
    {
        const bool branch_taken_0x2ece1c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECE20u;
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
        if (branch_taken_0x2ece1c) {
            ctx->pc = 0x2ECE38u;
            goto label_2ece38;
        }
    }
    ctx->pc = 0x2ECE24u;
label_2ece24:
    // 0x2ece24: 0x10000002
    ctx->pc = 0x2ECE24u;
    {
        const bool branch_taken_0x2ece24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2ECE28u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 24));
        if (branch_taken_0x2ece24) {
            ctx->pc = 0x2ECE30u;
            goto label_2ece30;
        }
    }
    ctx->pc = 0x2ECE2Cu;
label_2ece2c:
    // 0x2ece2c: 0x24050020
    ctx->pc = 0x2ece2cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_2ece30:
    // 0x2ece30: 0x25022f58
    ctx->pc = 0x2ece30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 8), 12120));
    // 0x2ece34: 0xa72014
    ctx->pc = 0x2ece34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (GPR_U32(ctx, 5) & 0x3F));
label_2ece38:
    // 0x2ece38: 0xc21021
    ctx->pc = 0x2ece38u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ece3c: 0xdc430000
    ctx->pc = 0x2ece3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ece40: 0x641825
    ctx->pc = 0x2ece40u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2ece44:
    // 0x2ece44: 0x60102d
    ctx->pc = 0x2ece44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ece48: 0x3e00008
    ctx->pc = 0x2ECE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ECE4Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2ECE24u: goto label_2ece24;
            case 0x2ECE2Cu: goto label_2ece2c;
            case 0x2ECE30u: goto label_2ece30;
            case 0x2ECE38u: goto label_2ece38;
            case 0x2ECE44u: goto label_2ece44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2ECE50u;
}
