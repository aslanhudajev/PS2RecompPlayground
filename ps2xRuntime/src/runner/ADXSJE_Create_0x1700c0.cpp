#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJE_Create
// Address: 0x1700c0 - 0x170284
void ADXSJE_Create_0x1700c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJE_Create");


    ctx->pc = 0x1700c0u;

    // 0x1700c0: 0x27bdffb0
    ctx->pc = 0x1700c0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1700c4: 0xffb10010
    ctx->pc = 0x1700c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1700c8: 0x80882d
    ctx->pc = 0x1700c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700cc: 0xffb30030
    ctx->pc = 0x1700ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1700d0: 0xffb20020
    ctx->pc = 0x1700d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1700d4: 0xc0982d
    ctx->pc = 0x1700d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700d8: 0x8f848208
    ctx->pc = 0x1700d8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294935048)));
    // 0x1700dc: 0xa0902d
    ctx->pc = 0x1700dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700e0: 0xffbf0040
    ctx->pc = 0x1700e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1700e4: 0xc051554
    ctx->pc = 0x1700E4u;
    SET_GPR_U32(ctx, 31, 0x1700ECu);
    ctx->pc = 0x1700E8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1700ECu; }
        else if (ctx->pc != 0x1700ECu) { ctx->pc = 0x1700ECu; }
    }
    if (ctx->pc != 0x1700ECu) { return; }
    ctx->pc = 0x1700ECu;
    // 0x1700ec: 0x40382d
    ctx->pc = 0x1700ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1700f0: 0x3c030023
    ctx->pc = 0x1700f0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)35 << 16));
    // 0x1700f4: 0x80625bc0
    ctx->pc = 0x1700f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 23488)));
    // 0x1700f8: 0x10400009
    ctx->pc = 0x1700F8u;
    {
        const bool branch_taken_0x1700f8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1700FCu;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1700f8) {
            ctx->pc = 0x170120u;
            goto label_170120;
        }
    }
    ctx->pc = 0x170100u;
    // 0x170100: 0x24645bc0
    ctx->pc = 0x170100u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 23488));
    // 0x170104: 0x24a50001
    ctx->pc = 0x170104u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_170108:
    // 0x170108: 0x28a20008
    ctx->pc = 0x170108u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 8));
    // 0x17010c: 0x10400004
    ctx->pc = 0x17010Cu;
    {
        const bool branch_taken_0x17010c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x170110u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 712));
        if (branch_taken_0x17010c) {
            ctx->pc = 0x170120u;
            goto label_170120;
        }
    }
    ctx->pc = 0x170114u;
    // 0x170114: 0x80820000
    ctx->pc = 0x170114u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x170118: 0x5440fffb
    ctx->pc = 0x170118u;
    {
        const bool branch_taken_0x170118 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x170118) {
            ctx->pc = 0x17011Cu;
            SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
            ctx->pc = 0x170108u;
            goto label_170108;
        }
    }
    ctx->pc = 0x170120u;
label_170120:
    // 0x170120: 0x24020008
    ctx->pc = 0x170120u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 8));
    // 0x170124: 0x14a20003
    ctx->pc = 0x170124u;
    {
        const bool branch_taken_0x170124 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 2));
        ctx->pc = 0x170128u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 712));
        if (branch_taken_0x170124) {
            ctx->pc = 0x170134u;
            goto label_170134;
        }
    }
    ctx->pc = 0x17012Cu;
    // 0x17012c: 0x1000004e
    ctx->pc = 0x17012Cu;
    {
        const bool branch_taken_0x17012c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170130u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17012c) {
            ctx->pc = 0x170268u;
            goto label_170268;
        }
    }
    ctx->pc = 0x170134u;
label_170134:
    // 0x170134: 0x24635bc0
    ctx->pc = 0x170134u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 23488));
    // 0x170138: 0xa21018
    ctx->pc = 0x170138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)(uint32_t)result); }
    // 0x17013c: 0x282d
    ctx->pc = 0x17013cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170140: 0x438021
    ctx->pc = 0x170140u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170144: 0x1a20000e
    ctx->pc = 0x170144u;
    {
        const bool branch_taken_0x170144 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x170148u;
        WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
        if (branch_taken_0x170144) {
            ctx->pc = 0x170180u;
            goto label_170180;
        }
    }
    ctx->pc = 0x17014Cu;
    // 0x17014c: 0x24e8001a
    ctx->pc = 0x17014cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 7), 26));
    // 0x170150: 0x26060004
    ctx->pc = 0x170150u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 16), 4));
    // 0x170154: 0x24e70017
    ctx->pc = 0x170154u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 23));
label_170158:
    // 0x170158: 0x51080
    ctx->pc = 0x170158u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x17015c: 0x521821
    ctx->pc = 0x17015cu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x170160: 0x24a50001
    ctx->pc = 0x170160u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x170164: 0x8c640000
    ctx->pc = 0x170164u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170168: 0xc21021
    ctx->pc = 0x170168u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x17016c: 0xb1182a
    ctx->pc = 0x17016cu;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 17)));
    // 0x170170: 0x1460fff9
    ctx->pc = 0x170170u;
    {
        const bool branch_taken_0x170170 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        ctx->pc = 0x170174u;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        if (branch_taken_0x170170) {
            ctx->pc = 0x170158u;
            goto label_170158;
        }
    }
    ctx->pc = 0x170178u;
    // 0x170178: 0x10000004
    ctx->pc = 0x170178u;
    {
        const bool branch_taken_0x170178 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x17017Cu;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
        if (branch_taken_0x170178) {
            ctx->pc = 0x17018Cu;
            goto label_17018c;
        }
    }
    ctx->pc = 0x170180u;
label_170180:
    // 0x170180: 0x24e8001a
    ctx->pc = 0x170180u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 7), 26));
    // 0x170184: 0x24e70017
    ctx->pc = 0x170184u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 23));
    // 0x170188: 0x24060004
    ctx->pc = 0x170188u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4));
label_17018c:
    // 0x17018c: 0x24090080
    ctx->pc = 0x17018cu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 128));
    // 0x170190: 0x126001a
    ctx->pc = 0x170190u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 9);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x170194: 0x2402ffff
    ctx->pc = 0x170194u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x170198: 0x47102a
    ctx->pc = 0x170198u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 7)));
    // 0x17019c: 0x2403000d
    ctx->pc = 0x17019cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 13));
    // 0x1701a0: 0xe2400b
    ctx->pc = 0x1701a0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 8, GPR_U32(ctx, 7));
    // 0x1701a4: 0x2404000e
    ctx->pc = 0x1701a4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 14));
    // 0x1701a8: 0x81083
    ctx->pc = 0x1701a8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 8), 2));
    // 0x1701ac: 0x3c0a7fff
    ctx->pc = 0x1701acu;
    SET_GPR_U32(ctx, 10, ((uint32_t)32767 << 16));
    // 0x1701b0: 0x21080
    ctx->pc = 0x1701b0u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x1701b4: 0x24050003
    ctx->pc = 0x1701b4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1701b8: 0x2442fffc
    ctx->pc = 0x1701b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x1701bc: 0x3407ac44
    ctx->pc = 0x1701bcu;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 0), 44100));
    // 0x1701c0: 0x62182a
    ctx->pc = 0x1701c0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 2)));
    // 0x1701c4: 0x24080012
    ctx->pc = 0x1701c4u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 18));
    // 0x1701c8: 0x43200b
    ctx->pc = 0x1701c8u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
    // 0x1701cc: 0xae05004c
    ctx->pc = 0x1701ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 5));
    // 0x1701d0: 0xae040048
    ctx->pc = 0x1701d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
    // 0x1701d4: 0x24030004
    ctx->pc = 0x1701d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4));
    // 0x1701d8: 0xae07005c
    ctx->pc = 0x1701d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 7));
    // 0x1701dc: 0x240201f4
    ctx->pc = 0x1701dcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 500));
    // 0x1701e0: 0xae080050
    ctx->pc = 0x1701e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 8));
    // 0x1701e4: 0x24050020
    ctx->pc = 0x1701e4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1701e8: 0xae0a0034
    ctx->pc = 0x1701e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 10));
    // 0x1701ec: 0x24040020
    ctx->pc = 0x1701ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 32));
    // 0x1701f0: 0xae060054
    ctx->pc = 0x1701f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 6));
    // 0x1701f4: 0xae13000c
    ctx->pc = 0x1701f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
    // 0x1701f8: 0xae110058
    ctx->pc = 0x1701f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 17));
    // 0x1701fc: 0xa2000001
    ctx->pc = 0x1701fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x170200: 0xae000028
    ctx->pc = 0x170200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x170204: 0xae00002c
    ctx->pc = 0x170204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x170208: 0xae000030
    ctx->pc = 0x170208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x17020c: 0x50600001
    ctx->pc = 0x17020Cu;
    {
        const bool branch_taken_0x17020c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x17020c) {
            ctx->pc = 0x170210u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x170214u;
            goto label_170214;
        }
    }
    ctx->pc = 0x170214u;
label_170214:
    // 0x170214: 0xae020064
    ctx->pc = 0x170214u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x170218: 0xae0a0060
    ctx->pc = 0x170218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 10));
    // 0x17021c: 0xae000068
    ctx->pc = 0x17021cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x170220: 0xae00006c
    ctx->pc = 0x170220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x170224: 0xae000070
    ctx->pc = 0x170224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x170228: 0xae000074
    ctx->pc = 0x170228u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x17022c: 0xae000078
    ctx->pc = 0x17022cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x170230: 0xae00007c
    ctx->pc = 0x170230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x170234: 0xae000038
    ctx->pc = 0x170234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x170238: 0xae00003c
    ctx->pc = 0x170238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x17023c: 0x4812
    ctx->pc = 0x17023cu;
    SET_GPR_U32(ctx, 9, ctx->lo);
    // 0x170240: 0xae090044
    ctx->pc = 0x170240u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 9));
    // 0x170244: 0xc05bb2a
    ctx->pc = 0x170244u;
    SET_GPR_U32(ctx, 31, 0x17024Cu);
    ctx->pc = 0x170248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 10));
    ctx->pc = 0x16ECA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_create_0x16eca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17024Cu; }
        else if (ctx->pc != 0x17024Cu) { ctx->pc = 0x17024Cu; }
    }
    if (ctx->pc != 0x17024Cu) { return; }
    ctx->pc = 0x17024Cu;
    // 0x17024c: 0x8e040044
    ctx->pc = 0x17024cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x170250: 0xc05bb2a
    ctx->pc = 0x170250u;
    SET_GPR_U32(ctx, 31, 0x170258u);
    ctx->pc = 0x170254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    ctx->pc = 0x16ECA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_create_0x16eca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170258u; }
        else if (ctx->pc != 0x170258u) { ctx->pc = 0x170258u; }
    }
    if (ctx->pc != 0x170258u) { return; }
    ctx->pc = 0x170258u;
    // 0x170258: 0x24030001
    ctx->pc = 0x170258u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x17025c: 0xae020084
    ctx->pc = 0x17025cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x170260: 0xa2030000
    ctx->pc = 0x170260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x170264: 0x200102d
    ctx->pc = 0x170264u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170268:
    // 0x170268: 0xdfbf0040
    ctx->pc = 0x170268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17026c: 0xdfb30030
    ctx->pc = 0x17026cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170270: 0xdfb20020
    ctx->pc = 0x170270u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170274: 0xdfb10010
    ctx->pc = 0x170274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170278: 0xdfb00000
    ctx->pc = 0x170278u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17027c: 0x3e00008
    ctx->pc = 0x17027Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170280u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170108u: goto label_170108;
            case 0x170120u: goto label_170120;
            case 0x170134u: goto label_170134;
            case 0x170158u: goto label_170158;
            case 0x170180u: goto label_170180;
            case 0x17018Cu: goto label_17018c;
            case 0x170214u: goto label_170214;
            case 0x170268u: goto label_170268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170284u;
}
