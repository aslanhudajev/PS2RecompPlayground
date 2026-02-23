#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXAMP_Create
// Address: 0x166260 - 0x166380
void ADXAMP_Create_0x166260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXAMP_Create");


    ctx->pc = 0x166260u;

    // 0x166260: 0x27bdffa0
    ctx->pc = 0x166260u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x166264: 0xffb20020
    ctx->pc = 0x166264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x166268: 0x3c120023
    ctx->pc = 0x166268u;
    SET_GPR_U32(ctx, 18, ((uint32_t)35 << 16));
    // 0x16626c: 0xffb40040
    ctx->pc = 0x16626cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x166270: 0xffb30030
    ctx->pc = 0x166270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x166274: 0xa0a02d
    ctx->pc = 0x166274u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166278: 0xffb10010
    ctx->pc = 0x166278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16627c: 0xc0982d
    ctx->pc = 0x16627cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166280: 0xffb00000
    ctx->pc = 0x166280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166284: 0x80882d
    ctx->pc = 0x166284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166288: 0x8242ab50
    ctx->pc = 0x166288u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294945616)));
    // 0x16628c: 0x802d
    ctx->pc = 0x16628cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166290: 0x10400009
    ctx->pc = 0x166290u;
    {
        const bool branch_taken_0x166290 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166294u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        if (branch_taken_0x166290) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x166298u;
    // 0x166298: 0x2643ab50
    ctx->pc = 0x166298u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4294945616));
    // 0x16629c: 0x26100001
    ctx->pc = 0x16629cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_1662a0:
    // 0x1662a0: 0x2a020008
    ctx->pc = 0x1662a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), 8));
    // 0x1662a4: 0x10400004
    ctx->pc = 0x1662A4u;
    {
        const bool branch_taken_0x1662a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1662A8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 48));
        if (branch_taken_0x1662a4) {
            ctx->pc = 0x1662B8u;
            goto label_1662b8;
        }
    }
    ctx->pc = 0x1662ACu;
    // 0x1662ac: 0x80620000
    ctx->pc = 0x1662acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1662b0: 0x5440fffb
    ctx->pc = 0x1662B0u;
    {
        const bool branch_taken_0x1662b0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1662b0) {
            ctx->pc = 0x1662B4u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x1662A0u;
            goto label_1662a0;
        }
    }
    ctx->pc = 0x1662B8u;
label_1662b8:
    // 0x1662b8: 0x24020008
    ctx->pc = 0x1662b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1662bc: 0x12020028
    ctx->pc = 0x1662BCu;
    {
        const bool branch_taken_0x1662bc = (GPR_U32(ctx, 16) == GPR_U32(ctx, 2));
        ctx->pc = 0x1662C0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1662bc) {
            ctx->pc = 0x166360u;
            goto label_166360;
        }
    }
    ctx->pc = 0x1662C4u;
    // 0x1662c4: 0xc05a4e4
    ctx->pc = 0x1662C4u;
    SET_GPR_U32(ctx, 31, 0x1662CCu);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1662CCu; }
        else if (ctx->pc != 0x1662CCu) { ctx->pc = 0x1662CCu; }
    }
    if (ctx->pc != 0x1662CCu) { return; }
    ctx->pc = 0x1662CCu;
    // 0x1662cc: 0x24020030
    ctx->pc = 0x1662ccu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x1662d0: 0x2643ab50
    ctx->pc = 0x1662d0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 18), 4294945616));
    // 0x1662d4: 0x2021018
    ctx->pc = 0x1662d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x1662d8: 0x382d
    ctx->pc = 0x1662d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1662dc: 0x438021
    ctx->pc = 0x1662dcu;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1662e0: 0x1a200013
    ctx->pc = 0x1662E0u;
    {
        const bool branch_taken_0x1662e0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1662E4u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
        if (branch_taken_0x1662e0) {
            ctx->pc = 0x166330u;
            goto label_166330;
        }
    }
    ctx->pc = 0x1662E8u;
    // 0x1662e8: 0x260a0004
    ctx->pc = 0x1662e8u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 16), 4));
    // 0x1662ec: 0x2609000c
    ctx->pc = 0x1662ecu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 16), 12));
    // 0x1662f0: 0x26080014
    ctx->pc = 0x1662f0u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 16), 20));
    // 0x1662f4: 0x0
    ctx->pc = 0x1662f4u;
    // NOP
label_1662f8:
    // 0x1662f8: 0x71880
    ctx->pc = 0x1662f8u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1662fc: 0x741021
    ctx->pc = 0x1662fcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x166300: 0x1432821
    ctx->pc = 0x166300u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x166304: 0x8c440000
    ctx->pc = 0x166304u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x166308: 0x733021
    ctx->pc = 0x166308u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x16630c: 0x1031021
    ctx->pc = 0x16630cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x166310: 0x24e70001
    ctx->pc = 0x166310u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 1));
    // 0x166314: 0xaca40000
    ctx->pc = 0x166314u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
    // 0x166318: 0x1231821
    ctx->pc = 0x166318u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x16631c: 0xac400000
    ctx->pc = 0x16631cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x166320: 0xf1202a
    ctx->pc = 0x166320u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 17)));
    // 0x166324: 0x8cc20000
    ctx->pc = 0x166324u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x166328: 0x1480fff3
    ctx->pc = 0x166328u;
    {
        const bool branch_taken_0x166328 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16632Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        if (branch_taken_0x166328) {
            ctx->pc = 0x1662F8u;
            goto label_1662f8;
        }
    }
    ctx->pc = 0x166330u;
label_166330:
    // 0x166330: 0xc7808014
    ctx->pc = 0x166330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x166334: 0x3402ac44
    ctx->pc = 0x166334u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 0), 44100));
    // 0x166338: 0x24030001
    ctx->pc = 0x166338u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16633c: 0xae11001c
    ctx->pc = 0x16633cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x166340: 0xae020020
    ctx->pc = 0x166340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x166344: 0xe6000028
    ctx->pc = 0x166344u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x166348: 0xa2030000
    ctx->pc = 0x166348u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x16634c: 0xa2000001
    ctx->pc = 0x16634cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x166350: 0xae00002c
    ctx->pc = 0x166350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x166354: 0xc05a4f0
    ctx->pc = 0x166354u;
    SET_GPR_U32(ctx, 31, 0x16635Cu);
    ctx->pc = 0x166358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16635Cu; }
        else if (ctx->pc != 0x16635Cu) { ctx->pc = 0x16635Cu; }
    }
    if (ctx->pc != 0x16635Cu) { return; }
    ctx->pc = 0x16635Cu;
    // 0x16635c: 0x200102d
    ctx->pc = 0x16635cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_166360:
    // 0x166360: 0xdfbf0050
    ctx->pc = 0x166360u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x166364: 0xdfb40040
    ctx->pc = 0x166364u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166368: 0xdfb30030
    ctx->pc = 0x166368u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16636c: 0xdfb20020
    ctx->pc = 0x16636cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166370: 0xdfb10010
    ctx->pc = 0x166370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166374: 0xdfb00000
    ctx->pc = 0x166374u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166378: 0x3e00008
    ctx->pc = 0x166378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16637Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1662A0u: goto label_1662a0;
            case 0x1662B8u: goto label_1662b8;
            case 0x1662F8u: goto label_1662f8;
            case 0x166330u: goto label_166330;
            case 0x166360u: goto label_166360;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166380u;
}
