#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: IdctColumn_1010_1
// Address: 0x180248 - 0x180384
void IdctColumn_1010_1_0x180248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("IdctColumn_1010_1");


    ctx->pc = 0x180248u;

    // 0x180248: 0x27bdfff0
    ctx->pc = 0x180248u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18024c: 0x3c19ffff
    ctx->pc = 0x18024cu;
    SET_GPR_U32(ctx, 25, ((uint32_t)65535 << 16));
    // 0x180250: 0xffb00000
    ctx->pc = 0x180250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180254: 0x3c180002
    ctx->pc = 0x180254u;
    SET_GPR_U32(ctx, 24, ((uint32_t)2 << 16));
    // 0x180258: 0x3c0f0001
    ctx->pc = 0x180258u;
    SET_GPR_U32(ctx, 15, ((uint32_t)1 << 16));
    // 0x18025c: 0x3c0efffe
    ctx->pc = 0x18025cu;
    SET_GPR_U32(ctx, 14, ((uint32_t)65534 << 16));
    // 0x180260: 0x80582d
    ctx->pc = 0x180260u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180264: 0x24100008
    ctx->pc = 0x180264u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 8));
    // 0x180268: 0x37393c11
    ctx->pc = 0x180268u;
    SET_GPR_U32(ctx, 25, OR32(GPR_U32(ctx, 25), 15377));
    // 0x18026c: 0x37189cf6
    ctx->pc = 0x18026cu;
    SET_GPR_U32(ctx, 24, OR32(GPR_U32(ctx, 24), 40182));
    // 0x180270: 0x35ef6a0a
    ctx->pc = 0x180270u;
    SET_GPR_U32(ctx, 15, OR32(GPR_U32(ctx, 15), 27146));
    // 0x180274: 0x35ceeae8
    ctx->pc = 0x180274u;
    SET_GPR_U32(ctx, 14, OR32(GPR_U32(ctx, 14), 60136));
    // 0x180278: 0x10000002
    ctx->pc = 0x180278u;
    {
        const bool branch_taken_0x180278 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x18027Cu;
        SET_GPR_U32(ctx, 13, ((uint32_t)32 << 16));
        if (branch_taken_0x180278) {
            ctx->pc = 0x180284u;
            goto label_180284;
        }
    }
    ctx->pc = 0x180280u;
label_180280:
    // 0x180280: 0x256b0002
    ctx->pc = 0x180280u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 11), 2));
label_180284:
    // 0x180284: 0x856a0040
    ctx->pc = 0x180284u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 64)));
    // 0x180288: 0x2610ffff
    ctx->pc = 0x180288u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x18028c: 0x85690050
    ctx->pc = 0x18028cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 80)));
    // 0x180290: 0x856c0010
    ctx->pc = 0x180290u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x180294: 0xa4400
    ctx->pc = 0x180294u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 10), 16));
    // 0x180298: 0x85640030
    ctx->pc = 0x180298u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x18029c: 0x85630070
    ctx->pc = 0x18029cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 112)));
    // 0x1802a0: 0x85660000
    ctx->pc = 0x1802a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x1802a4: 0x1241023
    ctx->pc = 0x1802a4u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1802a8: 0x1835021
    ctx->pc = 0x1802a8u;
    SET_GPR_U32(ctx, 10, ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x1802ac: 0x892021
    ctx->pc = 0x1802acu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1802b0: 0x6c1823
    ctx->pc = 0x1802b0u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1802b4: 0x63400
    ctx->pc = 0x1802b4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 16));
    // 0x1802b8: 0xc83823
    ctx->pc = 0x1802b8u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1802bc: 0x1446023
    ctx->pc = 0x1802bcu;
    SET_GPR_U32(ctx, 12, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1802c0: 0x584818
    ctx->pc = 0x1802c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 24); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)(uint32_t)result); }
    // 0x1802c4: 0xc83021
    ctx->pc = 0x1802c4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1802c8: 0x431021
    ctx->pc = 0x1802c8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1802cc: 0x8a2021
    ctx->pc = 0x1802ccu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1802d0: 0x70595018
    ctx->pc = 0x1802d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 25); ctx->lo1 = (uint32_t)result; ctx->hi1 = (uint32_t)(result >> 32); }
    // 0x1802d4: 0x6e4018
    ctx->pc = 0x1802d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)(uint32_t)result); }
    // 0x1802d8: 0x42400
    ctx->pc = 0x1802d8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 16));
    // 0x1802dc: 0x18f6018
    ctx->pc = 0x1802dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)(uint32_t)result); }
    // 0x1802e0: 0xc42823
    ctx->pc = 0x1802e0u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1802e4: 0xc41021
    ctx->pc = 0x1802e4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1802e8: 0xad2821
    ctx->pc = 0x1802e8u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x1802ec: 0x10a1821
    ctx->pc = 0x1802ecu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x1802f0: 0x52d83
    ctx->pc = 0x1802f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 22));
    // 0x1802f4: 0x641823
    ctx->pc = 0x1802f4u;
    SET_GPR_U32(ctx, 3, SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1802f8: 0x4d1021
    ctx->pc = 0x1802f8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x1802fc: 0x1836023
    ctx->pc = 0x1802fcu;
    SET_GPR_U32(ctx, 12, SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x180300: 0x21583
    ctx->pc = 0x180300u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x180304: 0x1494821
    ctx->pc = 0x180304u;
    SET_GPR_U32(ctx, 9, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x180308: 0xa5650070
    ctx->pc = 0x180308u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 112), (uint16_t)GPR_U32(ctx, 5));
    // 0x18030c: 0xe32823
    ctx->pc = 0x18030cu;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180310: 0x12c4823
    ctx->pc = 0x180310u;
    SET_GPR_U32(ctx, 9, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x180314: 0xa5620000
    ctx->pc = 0x180314u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x180318: 0xec2023
    ctx->pc = 0x180318u;
    SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x18031c: 0xc91023
    ctx->pc = 0x18031cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x180320: 0xe31821
    ctx->pc = 0x180320u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x180324: 0xec3821
    ctx->pc = 0x180324u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x180328: 0xc93021
    ctx->pc = 0x180328u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x18032c: 0x6d1821
    ctx->pc = 0x18032cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x180330: 0xed3821
    ctx->pc = 0x180330u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x180334: 0xcd3021
    ctx->pc = 0x180334u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
    // 0x180338: 0x4d1021
    ctx->pc = 0x180338u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x18033c: 0x8d2021
    ctx->pc = 0x18033cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x180340: 0xad2821
    ctx->pc = 0x180340u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
    // 0x180344: 0x31d83
    ctx->pc = 0x180344u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x180348: 0x73d83
    ctx->pc = 0x180348u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 22));
    // 0x18034c: 0x63583
    ctx->pc = 0x18034cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 22));
    // 0x180350: 0x21583
    ctx->pc = 0x180350u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x180354: 0x42583
    ctx->pc = 0x180354u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 22));
    // 0x180358: 0x52d83
    ctx->pc = 0x180358u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 22));
    // 0x18035c: 0xa5630010
    ctx->pc = 0x18035cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x180360: 0xa5670020
    ctx->pc = 0x180360u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 32), (uint16_t)GPR_U32(ctx, 7));
    // 0x180364: 0xa5660030
    ctx->pc = 0x180364u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 48), (uint16_t)GPR_U32(ctx, 6));
    // 0x180368: 0xa5620040
    ctx->pc = 0x180368u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 64), (uint16_t)GPR_U32(ctx, 2));
    // 0x18036c: 0xa5640050
    ctx->pc = 0x18036cu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 80), (uint16_t)GPR_U32(ctx, 4));
    // 0x180370: 0x1600ffc3
    ctx->pc = 0x180370u;
    {
        const bool branch_taken_0x180370 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x180374u;
        WRITE16(ADD32(GPR_U32(ctx, 11), 96), (uint16_t)GPR_U32(ctx, 5));
        if (branch_taken_0x180370) {
            ctx->pc = 0x180280u;
            goto label_180280;
        }
    }
    ctx->pc = 0x180378u;
    // 0x180378: 0xdfb00000
    ctx->pc = 0x180378u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18037c: 0x3e00008
    ctx->pc = 0x18037Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180380u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180280u: goto label_180280;
            case 0x180284u: goto label_180284;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180384u;
}
