#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpvcmc_OutputIntra6blk
// Address: 0x183850 - 0x1839d4
void mpvcmc_OutputIntra6blk_0x183850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpvcmc_OutputIntra6blk");


    ctx->pc = 0x183850u;

    // 0x183850: 0x27bdffd0
    ctx->pc = 0x183850u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x183854: 0x80782d
    ctx->pc = 0x183854u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183858: 0xffb10010
    ctx->pc = 0x183858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18385c: 0xa0602d
    ctx->pc = 0x18385cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183860: 0xffb00000
    ctx->pc = 0x183860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x183864: 0x240b0006
    ctx->pc = 0x183864u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 0), 6));
    // 0x183868: 0xffb20020
    ctx->pc = 0x183868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18386c: 0x24f1fff0
    ctx->pc = 0x18386cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x183870: 0x8cd20000
    ctx->pc = 0x183870u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x183874: 0x24c60004
    ctx->pc = 0x183874u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4));
    // 0x183878: 0x24ce0004
    ctx->pc = 0x183878u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 6), 4));
    // 0x18387c: 0x0
    ctx->pc = 0x18387cu;
    // NOP
label_183880:
    // 0x183880: 0x8cc90000
    ctx->pc = 0x183880u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x183884: 0x1721026
    ctx->pc = 0x183884u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 11), GPR_U32(ctx, 18)));
    // 0x183888: 0x8dd80000
    ctx->pc = 0x183888u;
    SET_GPR_U32(ctx, 24, READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x18388c: 0x222380a
    ctx->pc = 0x18388cu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 17));
    // 0x183890: 0x25c60004
    ctx->pc = 0x183890u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 14), 4));
    // 0x183894: 0x25ea0002
    ctx->pc = 0x183894u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 15), 2));
    // 0x183898: 0x2579ffff
    ctx->pc = 0x183898u;
    SET_GPR_S32(ctx, 25, ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x18389c: 0x1828c2
    ctx->pc = 0x18389cu;
    SET_GPR_U32(ctx, 5, SRL32(GPR_U32(ctx, 24), 3));
    // 0x1838a0: 0x120402d
    ctx->pc = 0x1838a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1838a4: 0x25ce0008
    ctx->pc = 0x1838a4u;
    SET_GPR_S32(ctx, 14, ADD32(GPR_U32(ctx, 14), 8));
    // 0x1838a8: 0x24f1fff0
    ctx->pc = 0x1838a8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x1838ac: 0x25900020
    ctx->pc = 0x1838acu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 12), 32));
    // 0x1838b0: 0x240d0007
    ctx->pc = 0x1838b0u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 0), 7));
    // 0x1838b4: 0x140582d
    ctx->pc = 0x1838b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1838b8:
    // 0x1838b8: 0x8562fffe
    ctx->pc = 0x1838b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967294)));
    // 0x1838bc: 0x25ef0010
    ctx->pc = 0x1838bcu;
    SET_GPR_S32(ctx, 15, ADD32(GPR_U32(ctx, 15), 16));
    // 0x1838c0: 0x25adffff
    ctx->pc = 0x1838c0u;
    SET_GPR_S32(ctx, 13, ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x1838c4: 0xe21021
    ctx->pc = 0x1838c4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1838c8: 0x90430000
    ctx->pc = 0x1838c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1838cc: 0xa1230000
    ctx->pc = 0x1838ccu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1838d0: 0x85420000
    ctx->pc = 0x1838d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1838d4: 0xe21021
    ctx->pc = 0x1838d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1838d8: 0x90430000
    ctx->pc = 0x1838d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1838dc: 0xa1230001
    ctx->pc = 0x1838dcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1838e0: 0x85420002
    ctx->pc = 0x1838e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x1838e4: 0xe21021
    ctx->pc = 0x1838e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1838e8: 0x90430000
    ctx->pc = 0x1838e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1838ec: 0xa1230002
    ctx->pc = 0x1838ecu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1838f0: 0x85420004
    ctx->pc = 0x1838f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x1838f4: 0xe21021
    ctx->pc = 0x1838f4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1838f8: 0x90430000
    ctx->pc = 0x1838f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1838fc: 0xa1230003
    ctx->pc = 0x1838fcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x183900: 0x85420006
    ctx->pc = 0x183900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 6)));
    // 0x183904: 0xe21021
    ctx->pc = 0x183904u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x183908: 0x90430000
    ctx->pc = 0x183908u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18390c: 0xa1230004
    ctx->pc = 0x18390cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x183910: 0x85420008
    ctx->pc = 0x183910u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x183914: 0xe21021
    ctx->pc = 0x183914u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x183918: 0x90430000
    ctx->pc = 0x183918u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18391c: 0xa1230005
    ctx->pc = 0x18391cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x183920: 0x8542000a
    ctx->pc = 0x183920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 10)));
    // 0x183924: 0xe21021
    ctx->pc = 0x183924u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x183928: 0x90430000
    ctx->pc = 0x183928u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18392c: 0xa1230006
    ctx->pc = 0x18392cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 6), (uint8_t)GPR_U32(ctx, 3));
    // 0x183930: 0x8564000c
    ctx->pc = 0x183930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x183934: 0x256b0010
    ctx->pc = 0x183934u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 16));
    // 0x183938: 0xe42021
    ctx->pc = 0x183938u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x18393c: 0x160502d
    ctx->pc = 0x18393cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183940: 0x90820000
    ctx->pc = 0x183940u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x183944: 0xa1220007
    ctx->pc = 0x183944u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x183948: 0x5a1ffdb
    ctx->pc = 0x183948u;
    {
        const bool branch_taken_0x183948 = (GPR_S32(ctx, 13) >= 0);
        ctx->pc = 0x18394Cu;
        SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 24)));
        if (branch_taken_0x183948) {
            ctx->pc = 0x1838B8u;
            goto label_1838b8;
        }
    }
    ctx->pc = 0x183950u;
    // 0x183950: 0xdd030000
    ctx->pc = 0x183950u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x183954: 0x528c0
    ctx->pc = 0x183954u;
    SET_GPR_U32(ctx, 5, SLL32(GPR_U32(ctx, 5), 3));
    // 0x183958: 0x1054021
    ctx->pc = 0x183958u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x18395c: 0x320582d
    ctx->pc = 0x18395cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183960: 0xfd830000
    ctx->pc = 0x183960u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 3));
    // 0x183964: 0xdd020000
    ctx->pc = 0x183964u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x183968: 0x1054021
    ctx->pc = 0x183968u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x18396c: 0xfd820008
    ctx->pc = 0x18396cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 2));
    // 0x183970: 0xdd030000
    ctx->pc = 0x183970u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x183974: 0x1054021
    ctx->pc = 0x183974u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x183978: 0xfd830010
    ctx->pc = 0x183978u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 3));
    // 0x18397c: 0xdd020000
    ctx->pc = 0x18397cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x183980: 0x1054021
    ctx->pc = 0x183980u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x183984: 0xfd820018
    ctx->pc = 0x183984u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 2));
    // 0x183988: 0x200602d
    ctx->pc = 0x183988u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18398c: 0xdd020000
    ctx->pc = 0x18398cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x183990: 0x1054021
    ctx->pc = 0x183990u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x183994: 0xfd820000
    ctx->pc = 0x183994u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x183998: 0xdd030000
    ctx->pc = 0x183998u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x18399c: 0x1054021
    ctx->pc = 0x18399cu;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1839a0: 0xfd830008
    ctx->pc = 0x1839a0u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 8), GPR_U64(ctx, 3));
    // 0x1839a4: 0xdd040000
    ctx->pc = 0x1839a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1839a8: 0x1054021
    ctx->pc = 0x1839a8u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1839ac: 0xfd840010
    ctx->pc = 0x1839acu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 4));
    // 0x1839b0: 0xdd020000
    ctx->pc = 0x1839b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1839b4: 0xfd820018
    ctx->pc = 0x1839b4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 2));
    // 0x1839b8: 0x1d60ffb1
    ctx->pc = 0x1839B8u;
    {
        const bool branch_taken_0x1839b8 = (GPR_S32(ctx, 11) > 0);
        ctx->pc = 0x1839BCu;
        SET_GPR_S32(ctx, 12, ADD32(GPR_U32(ctx, 12), 32));
        if (branch_taken_0x1839b8) {
            ctx->pc = 0x183880u;
            goto label_183880;
        }
    }
    ctx->pc = 0x1839C0u;
    // 0x1839c0: 0xdfb20020
    ctx->pc = 0x1839c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1839c4: 0xdfb10010
    ctx->pc = 0x1839c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1839c8: 0xdfb00000
    ctx->pc = 0x1839c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1839cc: 0x3e00008
    ctx->pc = 0x1839CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1839D0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183880u: goto label_183880;
            case 0x1838B8u: goto label_1838b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1839D4u;
}
